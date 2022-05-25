/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/734/A

*/


#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main(){

    int n;
    cin>>n;

    string res;
    cin>>res;

    int anton=0, danik=0;

    for( int i=0; i<n; i++){

        if( res[i]=='A'){
            anton++;
        }else{
            danik++;
        }
    }

    if( anton==danik ){

        cout<<"Friendship"<<endl;
    }else if( anton>=danik ){

        cout<<"Anton"<<endl;
    }else{

        cout<<"Danik"<<endl;
    }

	return 0;
}