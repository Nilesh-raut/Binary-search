#include <iostream>
using namespace std;

int findPeekElement(int array[], int size)
{
    int s = 0, e = size - 1, mid;
    while (s < e)
    {
        mid = (s + e) / 2;
        if (array[mid] < array[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return array[s];
}

int main()
{

    int array[4] = {0, 5, 3, 0};
    cout << findPeekElement(array, 4);
    return 0;
}