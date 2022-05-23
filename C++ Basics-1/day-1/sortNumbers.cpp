/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    // ascending series
	// first num ( smallest )
    if(a<=b && a<=c){
        cout<<a<<endl;
    }else if(b<=a && b<=c){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
    }

    //second num
    if( (a>=b && a<=c) || (a>=c && a<=b)){
        cout<<a<<endl;
    }else if( (b>=a && b<=c) || (b>=c && b<=a)){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
    }

    //third num ( largest )
    if(a>=b && a>=c){
        cout<<a<<endl;
    }else if(b>=a && b>=c){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
    }


    cout<<endl;

    cout<<a<<"\n"<<b<<"\n"<<c<<endl;


    
	return 0;
}