/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int n;
    cin>>n;

    int even=0, odd=0, positive=0, negative=0;

    int i=1;
    while(i<=n){

        int temp;
        cin>>temp;

        if( temp<0 ){

            negative++;

            if( temp%2==0 ){
                even++;
            }else{
                odd++;
            }

        }else{

            if( temp!=0 ){
                positive++;
            }

            if( temp%2==0 ){
                even++;
            }else{
                odd++;
            }

        }

        i++;
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;

	return 0;
}