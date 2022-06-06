/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/1535/A

*/

#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {

        // your code goes here

        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;

        int max1 = max(s1, s2);
        int max2 = max(s3, s4);

        int min1 = min(s1, s2);
        int min2 = min(s3, s4);

        if( min2>max1 || min1>max2 ){

            cout<<"NO"<<endl;

        }else{

            cout<<"YES"<<endl;

        }
    
    }

    return 0;
}