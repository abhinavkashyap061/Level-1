/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

bool isPrime(int n){

    int i=2;

    while( i<n ){

        if( n%i==0 ){
            return false;
        }

        i++;
    }

    return true;
}

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){

        if( i==1 ){
            continue;
        }

        if( isPrime(i) ){
            cout<<i<<" ";
        }
    }

	return 0;
}