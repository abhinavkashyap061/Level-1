/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    ll n,m;
    cin>>n>>m;

    ll sum = (n%10) + (m%10);

    cout<<sum<<endl;

	return 0;
}