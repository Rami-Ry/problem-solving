/**
 * Author       : Rami Rayya
 * Problem Name : way-too-long-words
 * Problem URL  : https://codeforces.com/contest/71/problem/A
 * Category     : strings
 * Level        : *800
 * Created Date : 2021-02-28 11:12:53
 */
#include <iostream>
#include <string>

using namespace std; 

int main () { 

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); 
 
    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned short int n; cin >> n;

    while (n--) {
        string word; cin >> word;
        auto l = word.length();
        if (l <= 10) {
            cout << word << "\n";
            continue;
        }
        cout << word.at(0) << l - 2 << word.at(l-1) << "\n";
    }

    return 0;
}