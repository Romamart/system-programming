#include <gtest/gtest.h>
#include "../main/Polynomial.h"
#include <complex>

TEST(PolynomialTests, creationInt){
    Polynomial<int> p(1, 2);
    EXPECT_EQ(1, p.getCoeff(0));
    EXPECT_EQ(2, p.getCoeff(1));
}

TEST(PolynomialTests, multiplyInt){
    Polynomial<int> p(1, 2);
    p.multiply(3);
    EXPECT_EQ(3, p.getCoeff(0));
    EXPECT_EQ(6, p.getCoeff(1));
}

TEST(PolynomialTests, creationComplex){
    std::complex<double> first(1, 1);
    std::complex<double> second(2, 2);

    Polynomial<std::complex<double>> p(first, second);

    EXPECT_EQ(std::real(second), std::real(p.getCoeff(1)));
    EXPECT_EQ(std::imag(second), std::imag(p.getCoeff(1)));
}


