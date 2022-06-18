/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int log2n( int n){

    //base case
    if( n<2 ){
        
        return 0;
    }

    //compuation / recursive call
    return 1 + log2n(n/2);
}

int32_t main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	// your code goes here

    int n;
    cin>>n;

    cout<<log2n(n)<<endl;

    return 0;

}