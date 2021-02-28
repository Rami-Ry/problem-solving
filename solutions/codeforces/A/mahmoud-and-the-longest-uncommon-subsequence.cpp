/**
 * Author       : Rami Rayya
 * Problem Name : mahmoud-and-the-longest-uncommon-subsequence
 * Problem URL  : https://codeforces.com/contest/766/problem/A
 * Category     : constructive algorithms, strings
 * Level        : *1000
 * Created Date : 2021-02-28 12:22:20
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 

int main () { 

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); 
 
    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    string word_one, word_two;
    cin >> word_one >> word_two;

    if (word_one == word_two) {
        cout << -1;
        return 0;
    }
    
    cout << max(word_one.length(), word_two.length());

    return 0;
}