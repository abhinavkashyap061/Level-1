/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/50/A

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int m,n;
	cin>>m>>n;

	int temp=n;

	if( m*2>=temp ){
		cout<<temp<<endl;
	}else{
		temp--;
		goto start;
	}


	return 0;
}