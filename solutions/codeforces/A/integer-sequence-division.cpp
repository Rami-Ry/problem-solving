/**
 * Author       : Rami Rayya
 * Problem Name : integer-sequence-division
 * Problem URL  : https://codeforces.com/problemset/problem/1102/A
 * Category     : math
 * Level        : 800
 * Created Date : 2021-03-10 10:02:01
 */
#include <iostream>

using namespace std;

int main () {
    /**
     * Explination : 
     * We should divide the sequence into to sets where the absolute value of their difference is minimum as possible
     * 
     * The sequence is from 1 -> n
     * We know that if n is 4
     * so we have
     * 1, 2, 3, 4
     * 
     * we can take two sets {1, 4} = 5, {2, 3} = 5
     * Each two symmetric numbers (like 1, 4) their sum is equal to the next two symmetric number (like 2, 3) and so on you can do that for big values of n
     * but not always we have a even count that we can take each two symmetric (opposite) numbers
     * like if n is 6
     * 1 2 3 4 5 6
     * {1, 6} {2, 5} but what about 3 and 4
     * {1, 6} {2, 5} yeilds a zero as a result of their sum difference
     * so the result should be 1 because | 4 - 3 | = 1
     * 
     * but what if n is 6
     * 1 2 3 4 5 6 7
     * we can apply the above rule for the whole sequence except 1 and it might be yield 0 or 1 then subtract 1 and get the absolute value
     * 
     * We can approach the above solution
     * using modulus
     * 
     * if we take n % 4 we how many numbers remained without adding it to a group
     * 1, 2, 3, 4 => 4 % 4 = 0 No elements remained without adding to a group [ [1, 4] [2, 3] ]
     * 1, 2, 3, 4, 5 => 5 % 4 = 1 There is one element remained which is 1 [ [2, 5] [3, 4] ] so the result should be 1
     * 1, 2, 3, 4, 5, 6 => 6 % 4 = 2 There are two elements remained which are 3, 4 [ [1, 6] [2, 5] ] and the result should be 1 | 3 - 4 |
     * 1, 2, 3, 4, 5, 6, 7, 8, 9
     * 9 % 4 = 1
     * [ [2 + 9, 4 + 7] [3 + 8, 5 + 6] ] and if we add 1 to either the first one or the second one the result of their difference will be 1
     * 
     * Solution Algorithm :
     * calculate n % 4
     * if n is 0 or 3 so the result will be => 0
     * else the result wil be 1
     **/

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned long long n;
    cin >> n;

    n %= 4;

    cout << ((n == 0 || n == 3) ? 0 : 1);

    return 0;
}