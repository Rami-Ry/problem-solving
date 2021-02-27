/**
 * Author       : Rami Rayya
 * Problem Name : oath-of-the-night-watch
 * Problem URL  : https://codeforces.com/contest/768/problem/A
 * Category     : constructive algorithms, sortings
 * Level        : *900
 * Created Date : 2021-02-27 14:32:43
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
    
    unsigned int n = 0; cin >> n;

    if (n == 2) {
        cout << 0;
        return 0;
    }

    unsigned long data[n];

    for (unsigned int i = 0; i < n; ++i) cin >> data[i];

    unsigned int counter = 0;
    for (unsigned int i = 0; i < n; ++i) {

        bool bigger = false, smaller = false;
        
        for (unsigned int j = 0; j < n; ++j) {
            if (!smaller && data[i] > data[j]) smaller = true;
            
            if (!bigger  && data[i] < data[j]) bigger = true;

            if (bigger && smaller) {
                ++counter;
                break;
            }
        }
    }

    cout << counter;

    return 0;
}