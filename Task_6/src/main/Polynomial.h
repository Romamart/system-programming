#include <complex>

template<class T>
class Polynomial{
private:
    T* coeff;
    int size;
    bool flag = true;

    template<class Arg>
    void setArgs(int pos, Arg head){
        coeff[pos] = head;
    }

    template<class Arg>
    void setArgs(int pos, Arg head, Arg tail){
        coeff[pos] = head;
        coeff[pos+1] = tail;
    }

    template<class Head, class ...Tail>
    void setArgs(int pos, Head head, Tail ...tail){
        coeff[pos] = head;
        setArgs(pos+1, tail...);
    }


public:
    template<class ...Args>
    Polynomial(T head, Args ... args){
        size = sizeof...(args) + 1;
        coeff = new T[size];
        coeff[0] = head;
        setArgs(1, args...);
    }

    Polynomial(T* coeff, int size, bool flag = true){
        this->coeff = coeff;
        this->size = size;
        this->flag = flag;
    }

    int getSize() const{
        return size;
    }

    T getCoeff(int pos) const{
        return coeff[pos];
    }

    void multiply(T x){
        for (int i=0; i<size; ++i){
            coeff[i] *= x;
        }
    }
    Polynomial<T>&operator=(const Polynomial<T> &pol){
        int size_pol = pol.getSize();
        size = size_pol;
        T* coeff_new = new T[size_pol];
        for(int i=0; i<size_pol; ++i)
            coeff_new[i] = pol.getCoeff(i);
        coeff = coeff_new;
        return *this;
    }
    void condition(){
        if (flag){
            flag = false;
        }else{
            flag = true;
        }
    }
    ~Polynomial(){
        if (flag) {
            delete[] coeff;
        }
    }
};


template<class T>
typename std::enable_if<std::is_arithmetic<T>::value, Polynomial<T>>::type
schurTransform(Polynomial<T> p){
    p.condition();
    int size = p.getSize();
    T* coeff = new T[size];
    for(int i=0; i<size; ++i)
        coeff[i] = p.getCoeff(size-i-1);

    Polynomial<T> mutual(coeff, size);

    mutual.multiply(p.getCoeff(0));
    p.multiply(p.getCoeff(p.getSize()-1));

    T* schurCoeff = new T[size];

    for(int i=0; i<size; ++i)
        schurCoeff[i] = p.getCoeff(i) - mutual.getCoeff(i);
    return Polynomial<T>(schurCoeff, size);
}


template <class T>
struct isComplex{
    static constexpr bool value = false;
    constexpr operator bool() const noexcept { return value; }
};

template <class T>
struct isComplex<std::complex<T>>{
    static constexpr bool value = true;
    constexpr operator bool() const noexcept { return value; }
};

template<class T>
typename std::enable_if<isComplex<T>::value, Polynomial<T>>::type
schurTransform(Polynomial<T> p){
    p.condition();
    int size = p.getSize();
    T* coeff = new T[size];
    for(int i=0; i<size; ++i)
        coeff[i] = std::conj(p.getCoeff(size-i-1));

    Polynomial<T> mutual(coeff, size);

    mutual.multiply(p.getCoeff(0));
    p.multiply(std::conj(p.getCoeff(p.getSize()-1)));

    T* schurCoeff = new T[size];

    for(int i=0; i<size; ++i){
        schurCoeff[i] = p.getCoeff(i) - mutual.getCoeff(i);
    }

    return Polynomial<T>(schurCoeff, size);
}