/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/1498/A

*/

#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

ll sumOfDigits( ll n ){
 
    ll sum=0;
 
    while( n ){
 
        int temp = n%10;
 
        sum = sum + temp;
 
        n/=10;
 
    }
 
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test_cases;
    cin >> test_cases;
    while (test_cases--)
    {

        // your code goes here

        ll n;
        cin>>n;

        // __gcd(x,y) is an inbuilt function

        while( __gcd(n, sumOfDigits(n))==1 ){

            n++;

        }

        cout<<n<<endl;
    
    }

    return 0;
}