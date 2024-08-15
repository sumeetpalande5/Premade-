#pragma once
#include <cmath>
#include <complex>
#include <vector>
#include <algorithm>
#include <numeric>


extern "C" {
    __declspec(dllexport) double Sin(double angle);
    __declspec(dllexport) double Cos(double angle);
    __declspec(dllexport) double Tan(double angle);
    __declspec(dllexport) double Log(double value);
    __declspec(dllexport) double Ln(double value);
    __declspec(dllexport) double Exp(double value);
    __declspec(dllexport) double Pow(double base, double exponent);
    __declspec(dllexport) std::complex<double> AddComplex(std::complex<double> a, std::complex<double> b);
    __declspec(dllexport) double Mean(const double* values, int size);
    __declspec(dllexport) double Median(double* values, int size);
    __declspec(dllexport) double StdDev(const double* values, int size);
}
