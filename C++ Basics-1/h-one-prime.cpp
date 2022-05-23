/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==1){
        cout<<"NO"<<endl;
        return 0;
    }else{

        if(n==2){
            cout<<"YES"<<endl;
            return 0;
        }else{

            int i = 2;
            while( i<n ){

                if(n%i==0){
                    cout<<"NO"<<endl;
                    return 0;
                }

                i++;
            }

            cout<<"YES"<<endl;

        }

    }
    
	return 0;
}