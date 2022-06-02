/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/579/A

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

    ll count=0;

	while( n>=1 ){

		int temp = n%2;

        // counting no. of 1s
        if( temp==1 ){
            count++;
        }

		res = res + temp*i;

		i*=10;

		n/=2;

	}

    // return the number of 1s
	return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    cin>>x;

    // 19 = 16 + 2 + 1, ans = 3
    // count powers of 2 required to get to this no. of bacterias

    // no. of 1s in binary format is the answer basically

    cout<< decToBinary(x) <<endl;

    return 0;
}