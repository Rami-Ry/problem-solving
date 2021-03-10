/**
 * Author       : Rami Rayya
 * Problem Name : integer-sequence-division
 * Problem URL  : 
 * Category     : 
 * Level        : 
 * Created Date : 2021-03-10 10:02:01
 */
#include <iostream>

using namespace std;

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    unsigned long long n, m;
    cin >> n;

    m = n*(n+1);
    m = m/2;

    cout << m%2;
    
    return 0;
}