#include <iostream>
#include <string>
#include <cctype>

extern char **environ;

size_t env_length(char **environ)
{
    size_t size = 0;
    while (*(environ++) != nullptr) 
        ++size;
    return size;
}

size_t partition(std::string *arr, size_t left, size_t right)
{
    std::string pivot_elem = arr[left];
    size_t pivot = left;

    while (left < right)
    {
        if (arr[left].compare(pivot_elem) <= 0)
        {
            std::string tmp = arr[pivot];
            arr[pivot] = arr[left];
            arr[left] = tmp;
            pivot = left;
            ++left;
        }
        else
        {
            std::string tmp = arr[--right];
            arr[right] = arr[left];
            arr[left] = tmp;
        }
    }
    return pivot;
}

void quicksort(std::string *arr, size_t left, size_t right)
{
    if (left >= right)
        return;
    size_t mid = partition(arr, left, right);
    quicksort(arr, left, mid);
    quicksort(arr, mid + 1, right);
}


int main()
{
    // size_t length = env_length(environ);
    // std::string env_array[length];
    // for (int i = 0; *environ != nullptr; ++environ, ++i)
    // {
    //     env_array[i] = std::string(*environ);
    // }

    std::string another_arr[] = {"alpha", "apple", "vue", "angular", "gemini"};


    for (int i = 0; i < 5; i++)
        std::cout << another_arr[i] << ' ';
    std::cout << '\n';

    quicksort(another_arr, 0, 5);

    for (int i = 0; i < 5; i++)
        std::cout << another_arr[i] << ' ';
    std::cout << '\n';
}