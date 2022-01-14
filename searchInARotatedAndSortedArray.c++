// Please help why its not working.
// Question is search element in rotated array.
#include <iostream>
using namespace std;

int pivotElement(int array[], int size)
{
    int s = 0, e = size - 1, mid;
    while (s < e)
    {
        mid = (s + e) / 2;
        if (array[0] <= array[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binarySearch(int arr[], int key, int start, int end)
{
    int s = start, e = end;
    int mid;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key >arr[mid])
        {
            s = mid + 1;
        }
    }
    return -1;
}

int searchInArray(int array[], int size, int key)
{

    int getPivote = pivotElement(array, size);
    if (key >= array[getPivote] && key <= array[size-1])
    {
        // cout << "81";
        return binarySearch(array, key, /*start*/ getPivote, /*end*/ size-1);
    }
    else
    {
        return binarySearch(array,key,0,getPivote-1);

    }
}

int main()
{

    int array[5] = {7, 9, 1, 2, 3};

    int key = 3;
    cout << "The index num of "<<key<< " is "<< searchInArray(array, 5, key);

    return 0;
}