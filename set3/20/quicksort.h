#ifndef QUICKSORT_H_
#define QUICKSORT_H_

#include <string>

int lcase_compare(std::string str_first, std::string str_second);

size_t partition(std::string *arr, size_t left, size_t right);
void quicksort(std::string *arr, size_t left, size_t right);

#endif

