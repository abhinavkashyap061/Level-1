/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

ll decToBinary( int n){

	ll res = 0;

	ll i=1;

	while( n>=1 ){

		int temp = n%2;


		res = res + temp*i;

		i*=10;

		n/=2;

	}

	return res;
}

ll reverse( ll n ){

	ll res=0;

	while( n>=1 ){

		int temp = n%10;

		

		res = res*10 + temp;

		n/=10;
	}

	return res;
}


int main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {

        // your code goes here
		int n;
		cin>>n;

		ll bin = decToBinary(n);
		ll res = reverse(bin);

		cout<<res<<endl;
    
    }


	return 0;
}