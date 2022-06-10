/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/1269/A

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

bool isPrime( int n ){

    int i=2;

    while( i<=sqrt(n) ){

        if( n%i==0 ){

            return false;
        }

        i++;
    }

    return true;
}

int32_t main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
    cin>>n;

    int temp2 ;
    int temp1 ;

    if( n==1 ){

        temp1 = 9;
        temp2 = 8;
    }else{

        temp1 = 3*n;
        temp2 = 2*n;
    }

    cout<<temp1<<" "<<temp2;

    return 0;

}