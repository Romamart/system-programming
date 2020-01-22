#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <iomanip>
#include <chrono>
#include <cassert>
#include <gtest/gtest.h>
#include "../main/parallel.hpp"

using namespace std;

TEST(Table, try_table)
{
    cout << "sequential       parallel" << endl;
    for (unsigned length = 10; length < 10000; length *= 10)
    {
        vector<int> seq(length);
        generate(seq.begin(), seq.end(), []() {return rand(); });

        vector<int> parallel = seq;

        using chrono::system_clock;

        typedef chrono::duration<int, milli> milli;
        auto start_solo = system_clock::now();
        my::mergeSortSeq(seq.begin(), seq.end());
        auto end_solo = system_clock::now();

        auto start_parallel = system_clock::now();
        my::mergeSortPar(parallel.begin(), parallel.end());
        auto end_parallel = system_clock::now();


        cout << setw(10) << chrono::duration_cast<milli>(end_solo - start_solo).count()
             << "    " << setw(10) <<
             chrono::duration_cast<milli>(end_parallel - start_parallel).count() <<
             "      "  << endl;

//        assert(seq == parallel);

    }
//    EXPECT_EQ(1, 1);
}