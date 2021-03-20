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
     * Solution Alogirthm : 
     * Calculate the sum of the sequence 
     * if it is even so we can divide the numbers into two sets and the their difference will be zero
     * if it isn't even so we can divide sum - 1 into two sets and the first element of the sequence remained which is 1 so if you add 1 to either the first group or the second one the difference will be 1
     **/

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned long long n;
    cin >> n;

    n = n*(n+1);
    n /= 2;

    if (n % 2 == 0) {
        cout << 0;
    }
    else {
        cout << 1;
    }

    return 0;
}