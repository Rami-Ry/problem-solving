/**
 * Author       : Rami Rayya
 * Problem Name : snacktower
 * Problem URL  : https://codeforces.com/problemset/problem/767/A
 * Category     : implementation, data structures
 * Level        : *1100
 * Created Date : 2021-02-28 14:33:09
 */
#include <iostream> 
#include <cmath>

using namespace std; 

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned int n = 0;
    cin >> n;
    
    if (n == 1) {
        cout << 1 << " ";
        return 0;
    }

    unsigned int needed_num = n;
    
    bool wishlist[n] = {false};

    for (unsigned int i = 1; i <= n; ++i) {
        int num = 0;
        cin >> num;

        // The previous num position [num = 9, its array position is 8 and the position of the previous number is 7 (9-2)]
        int pre_i = abs(num-2);

        // Check if it is the needed num
        if (num == needed_num) {
            cout << num << " ";
            --needed_num; // Change the needed num to the previous number

            while (num != 0 && wishlist[pre_i]) { // Check if there is previous number exists
                cout << pre_i+1 << " "; // Print the previous number
                needed_num = num = pre_i--; // Now we need the prvious number - 1 which is equal to pre_i-1
            }
            
            cout << "\n";
        }

        else {
            wishlist[num-1] = true;
            cout << "\n";
        }
    }

    return 0;
}