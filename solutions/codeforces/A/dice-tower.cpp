/**
 * Author       : Rami Rayya
 * Problem Name : dice-tower
 * Problem URL  : https://codeforces.com/contest/225/problem/A
 * Category     : constructive algorithms geedy
 * Level        : *1100
 * Created Date : 2021-03-13 09:27:43
 */
#include <iostream>

using namespace std;

int main () {
    /*
     * Solution Algorithm :
     * First : We can't uniquely identify the numbers on the faces of the dices if one of the known faces of one dice is equal to the top face of the first dice or the bottom face of the first one
     * Read the number of dices and the top face of the first dice
     * Calculate the bottom face of the first dice by subtracting top face number from 7 (Each two opposite faces on the dice their sum is 7)
     * Iterate over all the dices and get the known faces
     * Check if one of the dices known faces is equal to the top or bottom face of the first dice
     * If so we should print NO
     * Else we should print YES
     */

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned short int n, x, opposite_x;
    cin >> n >> x;
    opposite_x = 7 - x;

    bool we_can = true;
    for (unsigned short int i = 0; i < n; ++i) {
        unsigned short int a, b;
        cin >> a >> b;
        if (
            a == x || a == opposite_x ||
            b == x || b == opposite_x) {
            we_can = false;
            break;
        }
    }

    if (we_can) cout << "YES";
    else cout << "NO";

    return 0;
}