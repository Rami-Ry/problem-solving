/**
 * Author       : Rami Rayya
 * Problem Name : pangram
 * Problem URL  : https://codeforces.com/contest/520/problem/A
 * Category     : implementation, strings
 * Level        : 800
 * Created Date : 2021-02-27 20:06:58
 */
#include <iostream> 
#include <string>
#include <cctype>
#include <map>

using namespace std; 

int main () { 

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    map<char, unsigned short int> letters = {
        {'a', false},
        {'b', false},
        {'c', false},
        {'d', false},
        {'e', false},
        {'f', false},
        {'g', false},
        {'h', false},
        {'i', false},
        {'j', false},
        {'k', false},
        {'l', false},
        {'m', false},
        {'n', false},
        {'o', false},
        {'p', false},
        {'q', false},
        {'r', false},
        {'s', false},
        {'t', false},
        {'u', false},
        {'v', false},
        {'w', false},
        {'x', false},
        {'y', false},
        {'z', false},
    };

    unsigned n = 0; cin >> n;

    char str[n]; cin >> str;

    unsigned short int counter = 0;

    for (unsigned short int i = 0; i < n; ++i) {
        char ch = tolower(str[i]);
        if (letters[ch]) continue;
        letters[ch] = true;
        ++counter;
    }

    if (counter == 26) cout << "YES";
    else cout << "NO";

    return 0;
}