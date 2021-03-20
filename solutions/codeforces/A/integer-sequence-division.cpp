/**
 * Author       : Rami Rayya
 * Problem Name : integer-sequence-division
 * Problem URL  : https://codeforces.com/problemset/problem/1102/A
 * Category     : math
 * Level        : 800
 * Created Date : 2021-03-10 10:02:01
 */
#include <iostream>

using namespace std;

int main () {
    /**
     * Explination : 
     * We should divide the sequence into to sets where the absolute value of their difference is minimum as possible
     * 
     * The sequence is from 1 -> n
     * n might be even or odd
     * 
     * # if n is even
     * 
     * let n be 4
     * 1, 2, 3, 4 => we can divide it into two groups {1 , 4} {2, 3} = 5 - 5 = 0
     * 
     * but what if n is 6
     * 1, 2, 3, 4, 5, 6 =>  we can't divide it into two groups of pairs, so what we should do ?
     * let's take {1, 6} {2, 5} there sum difference is 0.
     * So we take all pairs except the middle two will reamin {3, 4}
     * since all the groups sum difference is zero we can consider the sequence only {3, 4}
     * and their difference is 1 always because they are a sequence
     * 
     * so we can consider two cases when n is even
     * n/2 might be even or odd too
     * if even so the result is 0
     * if odd the result is 1
     * 
     * # if n is odd
     * 
     * let n be 7
     * 1, 2, 3, 4, 5, 6, 7
     * Remove the first element which is 1
     * so the remained sequence is 2, 3, 4, 5, 6, 7 and their count is even
     * so we can apply the above rule (even case) to the sequence
     * and we might get either 1 or 0 as a result for the sequence without the first element we removed (which is 1)
     * so we can take the absolute value of the difference between 1 and (1 or zero) and we will get the result
     * 
     * Solution Algorithm : 
     * 
     * if n is even
     *  if n/2 is even the result is 0 (n, n-1, n-2, n-3 => | [n + n-3] - [n-1 + n-2] | = 0 )
     *  if n/2 is odd the result will be 1 (n, n-1, n-2, n-3, n-4, n-5 => | n-2 - (n-3) | = 1)
     * if n is odd
     *  if n-1 is even
     *      print 1 [1-0] (the sequence without 1 are two groups and their sum difference is 0)
     *  if n-1 is odd
     *      print 0 [1-1] (the sequence without 1 are two gropus and their sum difference is 1)
     **/


    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned long long n;
    cin >> n;

    if (n % 2 == 0) { // n is even
        if ( (n/2) % 2 == 0 ) { // We can divide the sequence into to equal sets so the difference is 0
            cout << 0;
        }
        else { // There are two numbers remained from the sequence and because they are continously their difference is 1
            cout << 1;
        }
    }
    else { // n is odd
        if ( ((n-1) / 2) % 2 == 0 ) {
            cout << 1; // 1 - 0
        }
        else {
            cout << 0; // 1 - 1
        }
    }

    return 0;
}