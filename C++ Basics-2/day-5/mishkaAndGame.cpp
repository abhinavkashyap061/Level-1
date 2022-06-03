/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/703/A

*/

#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int i = 1;

    int m_points = 0, c_points = 0;

    while (i <= n)
    {

        int m, c;
        cin >> m >> c;

        if (m > c)
        {
            m_points++;
        }
        else if (c > m)
        {
            c_points++;
        }

        i++;
    }

    if (m_points > c_points)
    {

        cout << "Mishka" << endl;
    }
    else if (c_points > m_points)
    {

        cout << "Chris" << endl;
    }
    else
    {

        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}