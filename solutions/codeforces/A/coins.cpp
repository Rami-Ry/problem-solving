/**
 * Author       : Rami Rayya
 * Problem Name : coins
 * Problem URL  : https://codeforces.com/problemset/problem/1061/A
 * Category     : greedy implementation math
 * Level        : 800
 * Created Date : 2021-03-09 14:59:24
 */
#include <iostream>
#include <cmath>

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
    
    if (n == 1) {
        cout << s;
        return 0;
    }
    
    cout << fixed;

    s = ceil((double)s/n);
    
    cout << s;


    return 0;
}