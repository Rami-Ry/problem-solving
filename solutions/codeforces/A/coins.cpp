/**
 * Author       : Rami Rayya
 * Problem Name : coins
 * Problem URL  : https://codeforces.com/problemset/problem/1061/A
 * Category     : greedy implementation math
 * Level        : 800
 * Created Date : 2021-03-09 14:59:24
 */
#include <iostream>

using namespace std;

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned int n;
    unsigned long long s;

    cin >> n >> s;

    if (n >= s) {
        cout << 1;
        return 0;
    }

    unsigned int remainder = s % n;
    
    unsigned int i = 0;
    while (s >= n) {
        s -= n;
        ++i;
    }

    if (remainder == 0) cout << i;
    else cout << i + 1;

    return 0;
}