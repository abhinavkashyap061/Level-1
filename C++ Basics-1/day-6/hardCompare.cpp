/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    // a**b or c**d would be too large to fit in any data type... so we will take b log(a) and c log(d) to compare
    // there size would easily fit...

    ( b*log(a)>d*log(c) )?cout<<"YES"<<endl:cout<<"NO"<<endl;

	return 0;
}