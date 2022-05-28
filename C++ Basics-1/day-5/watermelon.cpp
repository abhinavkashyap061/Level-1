/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/4/A

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int w;
    cin>>w;

    if( w>2 ){

        if( w%2==0 ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{

        cout<<"NO"<<endl;
    }

	return 0;
}