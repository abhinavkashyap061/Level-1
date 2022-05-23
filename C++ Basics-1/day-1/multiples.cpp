/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int a,b;
	cin>>a>>b;
    
    (a%b==0 || b%a==0)?cout<<"Multiples\n":cout<<"No Multiples\n";
    
	return 0;
}