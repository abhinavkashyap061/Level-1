/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int fibo( int n ){

    int a=0, b=1, i, c;

    if( n==1 ){
        return a;
    }

    for( i=2; i<n; i++ ){

        c=a+b;

        a=b;
        b=c;

    }

    return b;
}

int32_t main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	// your code goes here

    int n;
    cin>>n;

    cout<<fibo(n);

    return 0;

}