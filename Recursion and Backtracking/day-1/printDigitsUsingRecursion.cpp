/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

void printDigits(int n)
{

    if (n == 0)
    {
        return;
    }

    int digit = n % 10;

    printDigits(n / 10);
    cout << digit << " ";
}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        if (n == 0)
        {
            cout << 0 << endl;
        }
        else
        {

            printDigits(n);

            cout << endl;
        }
    }

    return 0;
}