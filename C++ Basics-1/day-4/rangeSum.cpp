/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int test_cases;
    cin>>test_cases;
    while(test_cases--){

        ll l,r;
        cin>>l>>r;

        // to prevent negative sum
        if( l>r ){

            ll temp = l;
            l = r;
            r = temp;
        }

        // sum of first l natural numbers
        ll sum1 = (l*(l+1))/2;

        // sum of first r natural numbers
        ll sum2 = (r*(r+1))/2;

        // l is inclusive
        cout<<sum2-sum1+l<<endl;
    }

	return 0;
}