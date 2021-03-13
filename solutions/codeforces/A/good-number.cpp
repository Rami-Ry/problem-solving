/**
 * Author       : Rami Rayya
 * Problem Name : good-number
 * Problem URL  : https://codeforces.com/contest/365/problem/A
 * Category     : implementation
 * Level        : 1000
 * Created Date : 2021-03-10 13:02:49
 */
#include <iostream>
#include <map>
#include <cmath>

using namespace std;

// instead of log10 to get the digit counts this way is faster
unsigned short int digits_count(unsigned long long num) {
    if (num >= 1e9)
        return 10;
    else if (num >= 1e8)
        return 9;
    else if (num >= 1e7)
        return 8;
    else if (num >= 1e6)
        return 7;
    else if (num >= 1e5)
        return 6;
    else if (num >= 1e4)
        return 5;
    else if (num >= 1000)
        return 4;
    else if (num >= 100)
        return 3;
    else if (num >= 10)
        return 2;
    else return 1;
}

int main () {
    /*
     * Solution algorithm :
     * Read all numbers in a map (key [the number], value [repeatition count]) so the repeated number appears only once then count how many times the number repeated
     * Loop through all the pairs in the map
     * if the number digits count is smaller than k+1 so we should skip it
     * We should now check if the number contains all the numbers from 0 to k
     * So define a boolean array with length k+1 [0, k]
     * Read each digit in the number and check if it is bigger than k so we should skip it
     * Mark the digit as true in the array
     * Check if the marked digits count equals k+1 so the number is a good number
     * Increment the counter
     */

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned short n, k;
    cin >> n >> k;

    map<unsigned int, unsigned short int> all_nums;
    for (unsigned short i = 0; i < n; ++i) {
        unsigned int a;
        cin >> a;
        ++all_nums[a];
    }

    unsigned short int counter = 0;

    // Loop through the map pairs
    for (const auto &num_data : all_nums) {
        // Calculate number of digits of the number
        unsigned short int l = digits_count(num_data.first);

        // If the number digits is less than k+1 so absolutely there are some missing numbers so skip it
        if (l < k+1) continue;
            
        bool validate[k+1] = {false};
        unsigned int num = num_data.first;
        unsigned short int validated_digits = 0;

        // Iterate from 1 to digits count of that number
        for (unsigned short int i = 1; i <= l; ++i) {
            // Get the last digit
            unsigned short int digit = num % 10;
            // Remove the last digit for the next iterations
            num /= 10;
            
            // If the digit is bigger than k so we don't need it or if we already checked it (to avoid increment validated_digits more than once for the same number)
            if (digit > k || validate[digit]) continue;
            
            // The digit is smaller than k so we should mark it as found
            validate[digit] = true;
            ++validated_digits;

            // Check if the number of validated digits equals to k+1 so the number is a good number
            if (validated_digits == k+1) {
                counter += num_data.second;
                break;
            }
        }
    }

    cout << counter;

    return 0;
}