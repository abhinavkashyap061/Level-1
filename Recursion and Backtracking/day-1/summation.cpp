/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int summation( int a[], int n, int sum){

    if( n==0 ){

        sum+=a[n];
        return sum;

    }

    sum+=a[n];
    
    /*
        returning the value i got from each recursive call
        when n==0 it will return the final value of sum, 
        it will exit from recursive calls stack frame
        then this value will be returned in every other calls
    */

    return summation(a, n-1, sum);


}

int32_t main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	// your code goes here

    int n;
    cin>>n;

    int a[n];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum=0;
    
    cout<<summation( a, n-1, sum)<<endl;

    return 0;

}