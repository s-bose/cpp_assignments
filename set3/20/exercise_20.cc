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
        if (pivot_elem.compare(arr[left]) <= 0)
        {
            std::string tmp = arr[pivot];
            arr[pivot] = arr[left];
            arr[left] = tmp;
            pivot = left;
            ++left;
        }
        else if (pivot_elem.compare(arr[left]) > 0)
        {
            std::string tmp = arr[--right];
            arr[right] = arr[left];
            arr[left] = tmp;
        }
    }

}

int main()
{
    size_t length = env_length(environ);
    std::string env_array[length];
    for (int i = 0; *environ != nullptr; ++environ, ++i)
    {
        env_array[i] = std::string(*environ);
    }

    std::string another_arr[] = {"alpha", "apple", "vue", "angular", "gemini"};

    for (int i = 0; i < length; i++)
        std::cout << env_array[i] << '\n';
}