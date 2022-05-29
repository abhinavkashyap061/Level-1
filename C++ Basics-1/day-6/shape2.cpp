/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int n;
    cin>>n;

    for( int row=1; row<=n; row++ ){

        //spaces
        for( int space=1; space<= (n - row); space++ ){

            cout<<" ";
        }

        //stars
        for( int star=1; star<=(2*row - 1); star++ ){
            cout<<'*';
        }

        // row ends
        cout<<endl;
    }


	return 0;
}