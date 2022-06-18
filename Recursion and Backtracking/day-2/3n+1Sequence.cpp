/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int sol(int n){

    //base case
    if( n<=2 ){

        return n;
    }

    // sequence computation
    if( n%2==0 ){

        return 1+ sol(n/2);
    }else{

        return 1 + sol(3*n + 1);
    }
    
}

int32_t main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	// your code goes here

    int n;
    cin>>n;

    cout<<sol(n)<<endl;

    return 0;

}