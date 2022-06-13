/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

void printfromNto1( int n ){

    // no leading or trailing spaces
    if( n==1 ){
        cout<<n;
        return;
    }

    cout<<n<<" ";

    printfromNto1(n-1);
    

}

int32_t main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	// your code goes here

    int n;
    cin>>n;

    printfromNto1(n);

    return 0;

}