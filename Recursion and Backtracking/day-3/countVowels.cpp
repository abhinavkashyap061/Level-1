/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

*/

#include <bits/stdc++.h>

#define int long long int
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int numberOfVowels( string s ){

    int l = s.length();

    // base case
    if( l==0 ){

        return 0;
    }

    // if found vowel, add 1 and reduce size of string by 1
    if( s[l-1]=='a' ||  s[l-1]=='e' || s[l-1]=='i' || s[l-1]=='o' || s[l-1]=='u' ){

        s.pop_back();

        return 1 + numberOfVowels(s);

    }

    // if not found
    s.pop_back();
    return numberOfVowels(s);

}

int32_t main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);

	// your code goes here

    string s;
    // using getline(cin, s) method to take input so that the 
    // spaces in the String does'nt get ignored
    getline(cin, s);

    // converting the whole string to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout<<numberOfVowels(s)<<endl;

    return 0;

}