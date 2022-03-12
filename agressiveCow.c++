#include <iostream>
using namespace std;

int isPossibleOrNot(int arr[], int size, int mid, int cow)
{
    int cowCount = 1, cowPlaced = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] - cowPlaced >= mid)
        {
            cowCount++;
            cowPlaced = arr[i];
        }
        if (cowCount == cow)
        {
            return true;
        }
    }
    return false;
}

int findLargestMinimumDistance(int arr[], int size, int cow)
{
    int start = 0, end = arr[size - 1] - arr[0], mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (isPossibleOrNot(arr, size, mid, cow))
        {

            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return mid;
}
int main()
{

    int size = 5;
    int arr[size] = {1, 2, 3, 4, 6};
    int cow = 2;
    cout << findLargestMinimumDistance(arr, size, cow);

    return 0;
}