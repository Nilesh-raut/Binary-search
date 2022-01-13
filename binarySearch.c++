#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0, e = size - 1, mid;

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
        else if (key > mid)
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int evenNumArray[6] = {5, 10, 15, 20, 25, 30};
    int oddNumArray[5] = {3, 8, 11, 14, 16};

    int ans = binarySearch(evenNumArray, 6, 30);
    cout << "The index of even function is " << ans << endl;

    int ans1 = binarySearch(oddNumArray, 5, 44);
    cout << "The index of odd function is " << ans1 << endl;

    return 0;
}