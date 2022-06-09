/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/758/A

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
    cin>>n;

    ll b[n], max=int_min;
    for( int i=0; i<n; i++ ){

        cin>>b[i];

        if( b[i]>max ){

            max = b[i];

        }

    }

    if( n==1 ){

        cout<<0<<endl;

    }else{

        ll sum=0;

        for( int i=0; i<n; i++ ){

            ll temp;

            temp = max - b[i];

            sum+=temp;
        
        }

        cout<<sum<<endl;

    }

    return 0;
}