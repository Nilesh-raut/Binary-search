#include <iostream>
using namespace std;

int findPivotArray(int array[], int size)
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
    // return array[mid];
    return array[s];
}

int main()
{

    int arrray[5] = {3, 7, 10, 17, 1};
    cout << "The pivot array is " << findPivotArray(arrray, 5) << endl;

    int arrray2[5] = {7, 9, 2, 3, 4};
    cout << "The pivot array2 is " <<findPivotArray(arrray2, 5) << endl;
    return 0;
}