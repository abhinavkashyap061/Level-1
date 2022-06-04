/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/71/A

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

    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {

        // your code goes here

        string s;
        cin>>s;

        int n = s.length();

        if( n<=10 ){

            cout<< s <<endl;

        }else{

            cout<< s[0] << n-2 << s[n-1] <<endl;
        }
    
    }

    return 0;
}