#include <iostream>
using namespace std;

int firstPosition(int array[], int size, int key)
{
    int leftAns = 0;
    int s = 0, e = size - 1;
    int mid, ans = 0;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (key == array[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > array[mid])
        {
            s = mid + 1;
        }
        else if (key < array[mid])
        {
            e = mid - 1;
        }
    }

    return ans;
}

int rightPosition(int array[], int size, int key)
{
    int leftAns = 0;
    int s = 0, e = size - 1;
    int mid, ans = 0;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (key == array[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > array[mid])
        {
            s = mid + 1;
        }
        else if (key < array[mid])
        {
            e = mid - 1;
        }
    }

    return ans;
}

int main()
{
    
    int array[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int array1[6] = {0, 5, 5, 6, 6, 6};

    int left = firstPosition(array, 8, 2);
    cout << "The first left position is " << left << endl;

    int right = rightPosition(array, 8, 2);
    cout << "The first right position is " << right << endl;

    left = firstPosition(array1, 6, 5);
    cout << "The first left position is " << left << endl;

    right = rightPosition(array1, 6, 5);
    cout << "The first right position is " << right << endl;

    return 0;
}