#include <iostream>
#include <cstdlib>

size_t partition(int *arr, size_t left, size_t right)
{
    int pivot_elem = arr[left];
    size_t pivot = left;

    while (left < right)
    {
        if (arr[left] <= pivot_elem)
        {
            int tmp = arr[pivot];
            arr[pivot] = arr[left];
            arr[left] = tmp;
            pivot = left;
            ++left;
        }
        else
        {
            int tmp = arr[--right];
            arr[right] = arr[left];
            arr[left] = tmp;
        }
    }
    return pivot;
}

void quicksort(int *arr, size_t left, size_t right)
{
    if (left >= right)
        return;
    size_t mid = partition(arr, left, right);
    quicksort(arr, left, mid);
    quicksort(arr, mid + 1, right);
}

int main()
{
    int *arr = new int[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < 20; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    quicksort(arr, 0, 20);

    for (int i = 0; i < 20; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}