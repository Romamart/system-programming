#include <string>

namespace my {
    using std::string;

    static int primary_key = 0;
    /**
     * Класс, который пока непонятно что делает, ведь я до сих пор не понял как документировать
     */
    class Man {
    public:
        Man(string const & n, string const & s) :
                first_name(n), last_name(s), id(primary_key++) {};

        string to_string() const {
            return last_name + " " + first_name;
        }

        bool operator<(Man const & other) {
            return other.id < id;
        }
        int get_id() const {
            return id;
        }

        bool operator==(const Man & other) const
        {
            return (id == other.id
                    && first_name == other.first_name
                    && last_name == other.last_name);
        }

    private:
        string first_name;
        string last_name;
        int id;
    };

}

template<>
struct std::hash<my::Man>
{
    typedef size_t result_type;
    typedef my::Man argument_type;
    result_type operator()(const argument_type & x) const
    {
        return static_cast<result_type>(x.get_id());
    }

};

template<>
struct std::less<my::Man>
{
    typedef bool result_type;
    typedef my::Man argument_type;
    result_type operator()(const argument_type & x, const argument_type & y) const
    {
        return x.get_id() < y.get_id();
    }

};