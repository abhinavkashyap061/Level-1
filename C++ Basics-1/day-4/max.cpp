/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1, max=int_min;
    while( i<=n ){

        int temp;
        cin>>temp;

        if( temp>max ){

            max = temp;
        }

        i++;
    }

    cout<<max<<endl;

	return 0;
}