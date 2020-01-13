//
// Created by roman on 21.11.2019.
//
#include "../project/Task_4/Matrix.h"
#include <gtest/gtest.h>

typedef float T;

//______________________________________________where() TESTS_________________________________________________

struct where_param {
    std::vector<T>  inputA;
    std::vector<T>  inputB;
    std::vector<T>  expected_output;
};


class where_test : public ::testing::TestWithParam<where_param> {};


TEST_P(where_test, _) {
    const where_param& param = GetParam();
    Matrix<T> matrixA{param.inputA};
    Matrix<T> matrixB{param.inputB};
    Matrix<T> val2 = where(matrixA < matrixB, matrixA, matrixB);
    EXPECT_EQ(param.expected_output, val2.get());
}


INSTANTIATE_TEST_CASE_P(
        _,
        where_test,
        ::testing::Values(
                where_param{
                        {2,1,3,4,5,7,6,8,9},
                        {7,8,9,4,5,6,1,2,3},
                        {2,1,3,4,5,6,1,2,3}
                },
                where_param{
                        {10,4,5,10,15,16,11,2,4},
                        {1,5,3,11,12,17,4,1,1},
                        {1,4,3,10,12,16,4,1,1}
                },
                where_param{
                        {1000, 212, 45},
                        {999, 101, 46},
                        {999, 101, 45}
                }
        )
);



//______________________________________________is_symmetric() TESTS_________________________________________________


struct symmetric_param {
    std::vector<T>  input;
    double eps;
    bool expected_output;
};


class symmetric_test : public ::testing::TestWithParam<symmetric_param> {};

TEST_P(symmetric_test, _) {
    const symmetric_param& param = GetParam();
    Matrix<T> matrix({ param.input });
    EXPECT_EQ(param.expected_output, matrix.is_symmetric(param.eps));
}



INSTANTIATE_TEST_CASE_P(
        _,
        symmetric_test,
        ::testing::Values(
                symmetric_param{
                        {1, 2, 3,
                         4, 5, 6,
                         7, 8, 9},
                        1,
                        false
                },
                symmetric_param{
                        {1, 0,
                         0, 1},
                        0.01,
                        true
                },
                symmetric_param{
                        {1, 2, 3,
                         2, 0, 4,
                         3, 4, 5},
                        1,
                        true
                }
        )
);
