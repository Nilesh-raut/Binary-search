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

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans1 = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans1; j * j < n; j = j + factor)
        {
            ans1 = j;
        }
    }
    return ans1;
}

int main()
{

    int n;
    cout << "please enter the n " << endl;
    cin >> n;

    int tempSol = binarySearch(n);
    int precision = 3;
    cout << "The ans is " << morePrecision(n, 3, tempSol);

    return 0;
}