/**
 * Author       : Rami Rayya
 * Problem Name : hiest
 * Problem URL  : https://codeforces.com/problemset/problem/1041/A
 * Category     : greedy implementation sortings    
 * Level        : *800
 * Created Date : 2021-03-07 08:19:50
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

    unsigned short int n;
    cin >> n;

    unsigned int nums[n];
    unsigned int min = 0;
    
    for (unsigned short int i = 0; i < n; ++i) {
        cin >> nums[i];
        if (i == 0 || nums[i] < min) min = nums[i];
    }

    sort(nums, nums+n);
    
    unsigned long long total = 0;
    for (unsigned int i = 1; i < n; ++i) {
        if (nums[i] != min+1) {
            total += nums[i] - min + 1 - 2;
        }
        min = nums[i];
    }

    cout << total;

    return 0;
}