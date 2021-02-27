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
#include <map>
#include <vector>

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

    /*
     * Map Contains all the numbers (numbers)
     * Key   => The number
     * Value => How many times the number is repeated
     */
    map<unsigned long, unsigned int> numbers;

    unsigned int 
    smallest = 0,
    biggest = 0;

    for (unsigned int i = 0; i < n; ++i) {
        unsigned long num = 0; cin >> num;
        
        ++numbers[num]; // iterate repeation number for this num
        
        // Get the biggest and the smallest number
        if (i == 0) {
            smallest = num;
            biggest  = num;
        }

        if (num < smallest) smallest = num;
        else if (num > biggest) biggest  = num;
    }

    unsigned int counter = 0;
    for (auto const &data : numbers) {
        if (data.first == smallest || data.first == biggest) continue; // We don't need the first and the last number (There is no smaller num than the smallest one and same for the bigest)
        counter += data.second;
    }

    cout << counter;

    return 0;
}