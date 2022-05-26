/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

*/

#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648

using namespace std;

int main()
{

    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // l1, l2 are the lower bounds
    // r1, r2 are upper bounds


    int p2 = max(l1,l2);// starting point of the common interval
    int p1 = min(r1,r2);// end point of common interval

    if(p1<p2){// if no common interval -> starting > end point

        cout<<-1<<endl;

    }else {

        cout<<p2<<" "<<p1<<endl;

    }

    return 0;
}