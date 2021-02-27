/**
 * Author       : Rami Rayya
 * Problem Name : oath-of-the-night-watch
 * Problem URL  : https://codeforces.com/contest/768/problem/A
 * Category     : constructive algorithms, sortings
 * Level        : *900
 * Created Date : 2021-02-27 14:32:43
 * 
 * Note         : They didn't mention that the given numbers are sorted by default but the test cases are.
 */
#include <iostream> 
#include <algorithm>

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

    sort(data, data+n);

    unsigned int counter = 0;
    for (unsigned int i = 1; i < n-1; ++i) { // We don't need the first one and the last one
        // Note: Sorted Array maybe contains more than one same element if the number is repeated twice or more
        
        bool smaller = false;
        if (data[i] == data[i-1]) { // Check if there is smaller number than this (Not all the previous ones are equal)
            for (int j = i-1; j >= 0; --j) {
                if (data[i] != data[j]) {
                    smaller = true;
                    break;
                }
            }
        }
        else smaller = true;
        
        if (!smaller) continue; // If there is smaller number than this one complete your process
        
        if (data[i] == data[i+1]) { // Check if there is bigger number than this (Not all the next ones are equal)
            for (unsigned int j = i+1; j < n; ++j) {
                if (data[i] < data[j]) {
                    ++counter;
                    break;
                }
            }
        }
        else ++counter; // Number is bigger
    }

    cout << counter;

    return 0;
}