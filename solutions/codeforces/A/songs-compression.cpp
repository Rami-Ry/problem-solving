/**
 * Author       : Rami Rayya
 * Problem Name : songs-compression
 * Problem URL  : 
 * Category     : 
 * Level        : 
 * Created Date : 2021-03-03 18:14:25
 */
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std; 

int main () { 

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); 
 
    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned int n, m; cin >> n >> m;

    unsigned long long total_before = 0, total_after = 0;

    unsigned int diff[n] = {0};

    for (unsigned int i = 0; i < n; ++i) {
        unsigned int before, after;
        cin >> before >> after;

        total_before += before;
        total_after += after;

        diff[i] = before - after;
    }

    if (total_before < m) cout << 0;
    else if (total_after > m) cout << -1;
    else if (total_after <= m) {
        sort(diff, diff+n, greater<int>());
        unsigned int i = 0;
        while (total_before > m) {
            total_before -= diff[i];
            ++i;
        }
        cout << i;
    }
    return 0;
}