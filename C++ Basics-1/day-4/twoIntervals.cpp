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

    // l1<=r1 | l2<=r2

    if ((l1 < l2 && l1 < r2) && (r1 < l2 && r1 < r2))
    {
        cout << -1 << endl;
    }
    else if (l1 <= l2)
    {

        if (r1 < r2 && r1 < l2)
        {

            cout << -1 << endl;
        }
        else if (r1 >= l2 && r1 < r2)
        {
            cout << l2 << " " << r1 << endl;
        }
        else if (r2 <= r1)
        {
            cout << l2 << " " << r2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else if(l1>l2){
        if(r1<=r2){
            cout<<l1<<" "<<r1<<endl;
        }else if(r2<r1 && r2<l1){
            cout<<l1<<" "<<r2<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    else if (l1 == r1 && l1 == l2 && l1 == r2)
    {
        cout << l1 << " " << r1 << endl;
    }

    return 0;
}