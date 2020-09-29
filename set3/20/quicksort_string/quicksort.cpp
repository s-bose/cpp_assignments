#include "quicksort.h"
#include <cctype>

size_t partition(std::string &arr, size_t left, size_t right)
{
    size_t pivot = left;
    while (left < right)    // iterate from left to right
    {                       // case-insensitive character comparison
        if (tolower(arr[left] <= tolower(arr[pivot])))
        {                   // if element comes before pivot, put it before pivot
            std::swap(arr[pivot], arr[left]);
            pivot = left;
            ++left;
        }
        else                // if element comes after pivot, move right forward
            std::swap(arr[--right], arr[left]);
    }
    return pivot;
}

void quicksort(std::string &arr, size_t left, size_t right)
{
    if (left >= right)
        return;
    size_t mid = partition(arr, left, right);
    quicksort(arr, left, mid);      // left subarray <= pivot element
    quicksort(arr, mid + 1, right); // right subarray > pivot element
}


/*
    The exercise description was not immediately clear as in whether to
    sort the characters of a string, or to sort an array of strings 
    chronologically. 

    Therefore this alternative version of quicksort is presented that
    sorts an individual string alphabetically.
*/
