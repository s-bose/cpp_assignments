#include "quicksort_str.h"
#include <cctype>

size_t partition(std::string &str, size_t left, size_t right)
{
    size_t pivot = left;
    while (left < right)    // iterate from left to right
    {                       // case-insensitive character comparison
        if (tolower(str[left] <= tolower(str[pivot])))
        {                   // if element comes before pivot, put it before pivot
            std::swap(str[pivot], str[left]);
            pivot = left;
            ++left;
        }
        else                // if element comes after pivot, move right forward
            std::swap(str[--right], str[left]);
    }
    return pivot;
}

void quicksort(std::string &str, size_t left, size_t right)
{
    if (left >= right)
        return;
    size_t mid = partition(str, left, right);
    quicksort(str, left, mid);      // left subarray <= pivot element
    quicksort(str, mid + 1, right); // right subarray > pivot element
}


/*
    The exercise description was not immediately clear as in whether to
    sort the characters of a string, or to sort an array of strings 
    chronologically. 

    Therefore this alternative version of quicksort is presented that
    sorts an individual string alphabetically.
*/
