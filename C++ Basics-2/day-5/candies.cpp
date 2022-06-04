/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/1343/A

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

        ll n;
        cin>>n;

        for( int k=3; k<29; k++ ){

            ll sum = pow(2, k-1) - 1;

            if( n%sum==0 ){

                cout<< n/sum <<endl;
                break;
            }
        }
    
    }

    return 0;
}