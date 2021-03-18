/**
 * Author       : Rami Rayya
 * Topic        : compare-doubles
 * Created Date : 2021-03-18 09:44:53
 * Source       : https://www.youtube.com/watch?v=Syx2qDjj7TE
 */

#include <iostream>
#include <cmath>
using namespace std;

/**
 * Compare two doubles
 * Check if the abolute value of their difference is smaller than or equal to a certain epsioln
 * If the result is smaller so the two numbers are equal
 * If the result is not smaller so we can comapre then in a normal way
 * 
 * @param a - The first operand (The first double number)
 * @param b - The second operand (The second double number)
 * @param eps - Epsilon value its default value is 1e-12
 * 
 * @return [ 0 equal, 1 first double num is bigger, 2 second double num is bigger ]
 */
short int compare_double(double a, double b, double eps = 1e-12) {
    if (fabs(a - b) <= eps) return 0; // They are equal
    return (a > b) ? 1 : 2;
}

int main () {

    double 
    first_num,
    second_num;
    
    cout << "Enter two doubles to compare them : ";

    cin >> first_num >> second_num;
    short int result = compare_double(first_num, second_num);
    
    if (result == 0)
        cout << "They are equal ;)" << endl; 
    else if (result == 1)
        cout << first_num << " is bigger" << endl;
    else
        cout << second_num << " is bigger" << endl;

    return 0;
}