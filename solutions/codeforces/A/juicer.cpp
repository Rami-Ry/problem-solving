/**
 * Author       : Rami Rayya
 * Problem Name : juicer
 * Problem URL  : https://codeforces.com/contest/709/problem/A
 * Category     : implementation
 * Level        : *900
 * Created Date : 2021-02-17 12:52:16
 */
#include <iostream>

using namespace std; 

int main () { 

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); 
 
    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned int n, b, d;
    cin >> n >> b >> d;

    unsigned int total = 0;

    unsigned short int counter = 0;

    for (unsigned int i = 0; i < n; ++i) {
        unsigned int size; cin >> size;

        if (size > b) continue;

        total += size;

        if (total > d) {
            ++counter;
            total = 0;
        }
    }

    cout << counter;

    return 0;
}