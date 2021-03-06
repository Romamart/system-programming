#include <thread>
#include <vector>
#include <cmath>

namespace my
{

    template <class Iterator>
    void merge(Iterator start, Iterator midl, Iterator end) {
        typedef typename std::iterator_traits<Iterator>::value_type T;
        std::vector<T> res;
        Iterator it1 = start;
        Iterator it2 = midl;
        while (it1 < midl && it2 < end) {
            if (*it1 < *it2) {
                res.push_back(*it1);
                it1++;
            }
            else {
                res.push_back(*it2);
                it2++;
            }
        }
        while (it1 < midl) {
            res.push_back(*it1);
            it1++;
        }
        while (it2 < end) {
            res.push_back(*it2);
            it2++;
        }
        std::copy(res.begin(), res.end(), start);
    }

    unsigned int num_threads = std::thread::hardware_concurrency();
    unsigned int max_depth = floor(log(num_threads) / log(2));
    template <class Iterator>
    void mergeSortRecursive(Iterator start, Iterator end, int num) {
        if (end - start > 1) {

            auto middle = start + (end - start) / 2;

            if (num < max_depth) {
                std::thread t1 = std::thread(mergeSortRecursive<Iterator>, start, middle, num + 1);
                std::thread t2 = std::thread(mergeSortRecursive<Iterator>, middle, end, num + 1);
                t1.join();
                t2.join();
            }
            else {
                mergeSortRecursive(start, middle, num+1);
                mergeSortRecursive(middle, end, num+1);
            }
            merge(start, middle, end);
        }

    }


    template <class Iterator>
    void mergeSort(Iterator start, Iterator end)
    {
        mergeSortRecursive(start, end, std::thread::hardware_concurrency());
    }


    template <class Iterator>
    void mergeSortSeq(Iterator start, Iterator end)
    {
        mergeSortRecursive(start, end, 1);
    }
};