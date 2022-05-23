/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int k,s;
    cin>>k>>s;

    int count=0;

    for( int x=0; x<=k; x++){

        for( int y=0; y<=k; y++){

            // taking two loops to avoid TLE
            // calculating z with x,y,s
            // checking if it lies within range

            int z = s - (x+y);

            if( z>=0 && z<=k){
                count++;
            }
        }
    }

    cout<<count<<endl;

	return 0;
}