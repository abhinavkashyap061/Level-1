/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

	int n; 
    cin>>n;

    for( int i=1; i<=12; i++){

        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    
	return 0;
}