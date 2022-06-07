/*

Author: Abhinav Kashyap

Portfolio: https://abhinavkashyap061.github.io

Problem link: https://www.hackerrank.com/challenges/summing-the-n-series/problem

*/

/*
 * Complete the 'summingSeries' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */
 

int summingSeries(long n) {
    
    int i = 1000000007;
    
    int res = ((n%i)*(n%i))%i;
    
    return res; 

}