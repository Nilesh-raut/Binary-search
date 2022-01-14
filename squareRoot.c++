#include <iostream>
using namespace std;

int binarySearch(int n)
{

    int s = 0, e = n, mid;
    int ans = -1;
    mid = s + e / 2;
    while (s <= e)
    {
        mid = (s + e) / 2;

        int square = mid * mid;

        if (square > n)
        {
            e = mid - 1;
        }
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{

    int n;
    cout << "please enter the n " << endl;
    cin >> n;

    cout << binarySearch(n);

    return 0;
}