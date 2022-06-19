/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int sol( int s, int e ){

    // base case 1
    if( s==e ){
        return 1;
    }
    //base case2
    if( s>e ){
        return 0;
    }

    //computation 
    return sol(s+1, e) + sol(s+2, e) + sol(s+3, e);
}

int32_t main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	// your code goes here

    int s,e;
    cin>>s>>e;

    cout<< sol(s,e) <<endl;

    return 0;

}