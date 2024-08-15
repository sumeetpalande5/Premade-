#include "Calculator.h"
#include <xdevapi.h>
#include <iostream>

double Sin(double angle) {
    return std::sin(angle);
}

double Cos(double angle) {
    return std::cos(angle);
}

double Tan(double angle) {
    return std::tan(angle);
}

double Log(double value) {
    return std::log10(value);
}

double Ln(double value) {
    return std::log(value);
}

double Exp(double value) {
    return std::exp(value);
}

double Pow(double base, double exponent) {
    return std::pow(base, exponent);
}

std::complex<double> AddComplex(std::complex<double> a, std::complex<double> b) {
    return a + b;
}

double Mean(const double* values, int size) {
    double sum = std::accumulate(values, values + size, 0.0);
    return sum / size;
}

double Median(double* values, int size) {
    std::sort(values, values + size);
    if (size % 2 == 0) {
        return (values[size / 2 - 1] + values[size / 2]) / 2.0;
    } else {
        return values[size / 2];
    }
}

double StdDev(const double* values, int size) {
    double mean = Mean(values, size);
    double sq_sum = std::inner_product(values, values + size, values, 0.0);
    return std::sqrt(sq_sum / size - mean * mean);
}
