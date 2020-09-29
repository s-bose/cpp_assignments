#ifndef QUICKSORT_STR_H_
#define QUICKSORT_STR_H_

#include <iostream>
#include <string>

void quicksort(std::string &str, size_t left, size_t right);
size_t partition(std::string &str, size_t left, size_t right);

#endif

/*
    The exercise description was not immediately clear as in whether to
    sort the characters of a string, or to sort an array of strings 
    chronologically. 

    Therefore this alternative version of quicksort is presented that
    sorts an individual string alphabetically.
*/