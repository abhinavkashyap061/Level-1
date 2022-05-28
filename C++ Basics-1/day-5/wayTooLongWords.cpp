/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/71/A

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

	int n;
	cin>>n;
	while(n--){

		string w;
		cin>>w;

		int l = w.length();

		if( l>10 ){

			cout<<w[0]<<l-2<<w[l-1]<<endl;
		}else{

			cout<<w<<endl;
		}
	}
    

	return 0;
}