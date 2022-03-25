#include <iostream>
using namespace std;

int isPosibleSolution(int arr[], int size, int mid, int painter)
{

    int lengthSum = 0;
    int painterCount = 1;

    for (int i = 0; i < size; i++)
    {
        if (lengthSum + arr[i] <= mid)
        {
            lengthSum = lengthSum + arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > painter || arr[i] > mid)
            {
                return false;
            }
            lengthSum = arr[i];
        }
    }
    return true;
}

int findMinLengthOfBoard(int arr[], int size, int start, int end, int painter)
{
    int mid, ans = -1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (isPosibleSolution(arr, size, mid, painter))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int findMax(int arr[], int size)
{
    int max = INT32_MIN;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findSum(int arr[], int size)
{

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    int painter = 2;
    int size = 4;
    int arr[size] = {10, 20, 30, 40};

    int crazyMax = findMax(arr, size);
    int sumOfArray = findSum(arr, size);

    // int crazyMax = 40;
    // int sumOfArray = 100;

    cout << findMinLengthOfBoard(arr, size, crazyMax, sumOfArray, painter);

    return 0;
}