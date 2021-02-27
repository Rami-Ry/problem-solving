/**
 * Author       : Rami Rayya
 * Problem Name : die-roll
 * Problem URL  : https://codeforces.com/contest/9/problem/A
 * Category     : probabilites, math, Implementation
 * Level        : *800
 * Created Date : 2021-02-17 13:27:43
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
    
    unsigned short int y, w;
    cin >> y >> w;

    string values[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};

    cout << values[max(y, w)-1];
    
    return 0;
}