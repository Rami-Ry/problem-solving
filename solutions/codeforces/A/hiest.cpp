/**
 * Author       : Rami Rayya
 * Problem Name : hiest
 * Problem URL  : https://codeforces.com/problemset/problem/1041/A
 * Category     : greedy implementation sortings    
 * Level        : *800
 * Created Date : 2021-03-07 08:19:50
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned int n;
    cin >> n;

    unsigned int smallest = 0, largest = 0;
    for (unsigned int i = 1; i <= n; ++i) {
        unsigned int num; cin >> num;
        if (i == 1) smallest = num;
        smallest = min(smallest, num);
        largest = max(largest, num);
    }

    cout << largest - smallest + 1 - n;

    return 0;
}