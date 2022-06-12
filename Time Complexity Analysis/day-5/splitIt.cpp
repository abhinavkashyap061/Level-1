/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/1496/A

*/

#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {

        // your code goes here

        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int i=0, j = n - 1;

        while( k-- ){

            if( s[i]!=s[j] ){

                cout<<"NO"<<endl;
                break;
            }

            if( j-i>1 ){

                cout<<"YES"<<endl;
            }

            cout<<"NO"<<endl;
        }
    
    }

    return 0;

}