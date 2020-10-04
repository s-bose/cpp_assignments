#include "interest.ih"

double interest_calc(size_t year, double amount, size_t percent)
{
    double f_amount = amount;
    for (size_t iter = 0; iter < year; ++iter)
        f_amount *= (1.0 + percent / 100.0);
    return f_amount;
}