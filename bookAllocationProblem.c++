#include <iostream>
using namespace std;

int isPossibleSolutionOrNot(int arr[], int size, int m, int mid)
{
    int studentCount = 1, pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum = pageSum + arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];

            // if (studentCount > m)
            // {
            //     return false;
            // }
        }
    }
    return true;
}

int main()
{
    int size = 4;
    int arr[4] = {10,20,30,40};
    int start = 40, end = 100, mid;
    int m = 2;
    int ans = -1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (isPossibleSolutionOrNot(arr, size, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "The ans is " << ans << endl;
    cout << "The start is " << start << endl;
    cout << "The end is " << end << endl;
    cout << "The mid is " << mid << endl;
    return 0;
}