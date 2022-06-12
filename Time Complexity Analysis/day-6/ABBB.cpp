/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/1428/C

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int32_t main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	// your code goes here

    int t;
    cin>>t;
    while(t--){

        string t;
        cin>>t;

        int n = t.size();

        stack<char> s;

        for( int i=0; i<n; i++ ){

            if( s.empty() ){

                s.push( t[i] );
            }else {

                if( t[i]=='A' ){
                    
                    s.push( t[i] );
                }else{

                    s.pop();
                }
            }
        }

        cout<< s.size() <<endl;
    }

    return 0;

}