#include <algorithm>

#include "quicksort.h"
#include "env_size.h"

int lcase_compare(std::string str_first, std::string str_second)
{
        // transform both the strings into lowercase
    std::transform(str_first.begin(), str_first.end(), str_first.begin(), ::tolower);
    std::transform(str_second.begin(), str_second.end(), str_second.begin(), ::tolower);

        // perform case-insensitive string comparison
    return str_first.compare(str_second);
}

/*
    a comparison function to compare between two std::strings, case-insensitively,
    by transforming each string into lowercase and calling std::string::compare()
*/


size_t partition(std::string *arr, size_t left, size_t right)
{
    size_t pivot = left;
    while (left < right)    // iterate from left to right
    {
                            // if element comes before pivot, put it before pivot
        if (lcase_compare(arr[left], arr[pivot]) <= 0)
        {
            std::swap(arr[pivot], arr[left]);
            pivot = left;
            ++left;
        }
        else                // if element comes after pivot, move right forward
            std::swap(arr[--right], arr[left]);
    }
    return pivot;
}


//  standard Hoare's partition algorithm on the passed array of strings.


void quicksort(std::string *arr, size_t left, size_t right)
{
    if (left >= right)
        return;
    size_t mid = partition(arr, left, right);
    quicksort(arr, left, mid);      // left subarray <= pivot element
    quicksort(arr, mid + 1, right); // right subarray > pivot element
}

/*
    this quicksort takes an array of std::strings and sorts the entire array 
    in alphabetical order.
*/