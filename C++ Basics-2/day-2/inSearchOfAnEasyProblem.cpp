/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem Link: https://codeforces.com/problemset/problem/1030/A

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

    int n; cin>>n;

    int i=1, flag=0;

    while( i<=n ){

        int temp;
        cin>>temp;

        if( temp==1 ){
            flag=1;
            break;
        }

        i++;
    }

    if( flag==1 ){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }



    return 0;
}