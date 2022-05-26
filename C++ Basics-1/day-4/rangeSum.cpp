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

        int l,r;
        cin>>l>>r;

        ll sum=0;

        while(l<=r){

            sum+=l;

            l++;
        }

        cout<<sum<<endl;
    }

	return 0;
}