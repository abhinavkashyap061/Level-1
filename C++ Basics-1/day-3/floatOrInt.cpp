/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    float n;
    cin>>n;

    //seperating int part and decimal part
    int wholePart = (int)n;
    float decimalPart = n - wholePart;

    if( decimalPart>0 ){
        cout<<"float"<<" "<<wholePart<<" "<<decimalPart<<endl;
    }else{
        cout<<"int"<<" "<< (int)n<<endl;
    }   

	return 0;
}