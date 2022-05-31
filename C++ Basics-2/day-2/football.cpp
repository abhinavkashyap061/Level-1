/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem Link: https://codeforces.com/problemset/problem/96/A

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

    // int test_cases;
    // cin >> test_cases;
    // while (test_cases--)
    // {

    //     // your code goes here
    
    // }

    string a; cin>>a;

    int n=a.length();

    if( n<7 ){
        cout<<"NO"<<endl;
        return 0;
    }

    for( int i=0; i<n; i++){

        int flag=0;

        for( int j=i+1; j<i+5; j++ ){

            if( a[i]!=a[j] ){
                flag=0;
                break;
            }else{
                flag=1;
            }
        }

        if( flag==1 ){
            cout<<"YES"<<endl;
            break;
        }
    }

    return 0;
}