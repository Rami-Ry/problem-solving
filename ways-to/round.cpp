/**
 * Author       : Rami Rayya
 * Topic        : Round to multiple of a specified amount
 * Created Date : 2021-03-18 09:44:53
 * Source       : https://www.youtube.com/watch?v=Syx2qDjj7TE
 */
#include <iostream>
#include <cmath>

using namespace std;

/**
 * Round to the nearest bigger integer using math formula and integer division
 * 
 * @param x - The numerator
 * @param y - The denominator
 * 
 * @return rounded value
 */
int my_ceil(int x, int y) {
    return (x+y-1)/y;
}

/**
 * Normal round using math formula and integer division
 * Note : half way cases will be rounded away from zero
 * 
 * @param x The numberator
 * @param y The denomination
 * 
 * @return The result
 */
int my_round(int x, int y) {
    return (x + y/2)/y;
}

/**
 * Round the number to the nearest smaller integer using math formula
 * 
 * @param x - The numerator
 * @param y - The denominator
 * 
 * @return The result
 */
int my_floor(int x, int y) {
    return x/y;
}

/**
 * Round to a specific number 
 * 
 * @param x - The number to be rounded
 * @param m - The number to be rounded to
 * 
 * @return The result
 */
double round_to_multiple(double x, double m) {
    return trunc(x/m)*m;
}

int main () {
    
    cout << my_ceil(5, 2) << endl;  // Should be 3
    cout << my_floor(5, 2) << endl; // Should be 2
    cout << my_round(5, 2) << endl; // Should be 3
    cout << round_to_multiple(5, 2) << endl; // should be 4
    cout << round_to_multiple(48.55, 15) << endl; // should be 45
    cout << round_to_multiple(2.1784, 0.01) << endl; // should be 2.17

    return 0;
}