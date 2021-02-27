/**
 * Author       : Rami Rayya
 * Problem Name : UVA lights-on-off
 * Problem URL  : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051
 * Category     : -
 * Level        : -
 * Created Date : 2021-02-17 18:12:29
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

    unsigned long long n;

    while (true) {
        cin >> n;
        if (n == 0) break;
        bool on = false;
        for (unsigned long long i = 1; i <= n; i += 2) if (n % i == 0) on = !on;
        cout << ((on) ? "yes" : "no") << endl;
    }
    
    return 0;
}