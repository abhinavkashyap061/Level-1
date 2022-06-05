/*

Author: Abhinav Kashyap

My Portfolio: https://abhinavkashyap061.github.io

Problem link: https://codeforces.com/problemset/problem/50/A

*/

#include <bits/stdc++.h>

#define ll long long
#define int_max 2147483647
#define int_min -2147483648
#define endl '\n'

using namespace std;

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int m, n;
	cin >> m >> n;

	/*

	- board of M x N squares
	- given -> unlimited no. of 2x1 squares
	- allowed to rotate the pieces

	- each domino covers two squares
	- no two dominos overlap inside the borad, can overlap

	(2x1)x + (1x2)y <= nm
	2x + 2y <= (nm)
	x + y <= (nm)/2
	x is 2x1 tiles
	y is 1 x2 tiles

	The answer will always be (n*m)/2
	Cause you can always fill up the board with dominos if there are even number of cells
	Otherwise one cell will remain

	*/

	int count = (m * n) / 2;

	cout << count << endl;

	return 0;
}