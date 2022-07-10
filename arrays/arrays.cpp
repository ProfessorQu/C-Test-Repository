#include <iostream>

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void reverseArr(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};

    printArr(nums, 5);

    nums[0] = 5;
    printArr(nums, 5);

    reverseArr(nums, 5);
    printArr(nums, 5);

    return 0;
}