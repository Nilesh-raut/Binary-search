#include <iostream>
using namespace std;

long long int binarySearch(int n)
{

    int s = 0, e = n;
    long long mid;
    long long ans = -1;

    while (s <= e)
    {
         mid = (s + e) / 2;

        long long int square = mid * mid;

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