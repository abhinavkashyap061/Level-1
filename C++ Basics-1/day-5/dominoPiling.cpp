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

	// board of M x N squares
	// given -> unlimited no. of 2x1 squares
	// allowed to rotate the pieces

	// each domino covers two squares
	// no two dominos overlap
	// inside the borad, can overlap

	int count=0;

	if( m<n ){

		count = m*2;

		

	}else if( m>=n ){

		count = n;

		if( m%count==1 || m==n ){
			count++;
		}
	}

		
	cout<<count<<endl;
	


	return 0;
}