#include <iostream>
using namespace std;

int pivatElement(int array[], int size)
{
    int s = 0, e = size - 1, mid;
    while (s < e)
    {
        mid = (s+e)/2;
        if (array[0] <= array[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return e;
}

int main()
{
    int array[5] = {7, 9, 1, 2, 3};
    cout << "This the index number of pivartElement " <<pivatElement(array, 5) << endl;

    return 0;
}