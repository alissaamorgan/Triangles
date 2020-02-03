#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
double TOLERANCE;
int main()
{
    double x, y, z, c, b;
    double a = 1;
    int triangle = 1;
    TOLERANCE == 0.0001;
    cout << "Help me build a triangle! Input three real numbers seperated by a space, then press enter.\n"; //prompts for inputs
    cin >> x >> y >> z; //gathers input from user
    while (x, y, z < 0) { //checks for negative inputs
        cout << "Only real numbers may be entered. Please try again.\n";
        break;
    }
    while (x, y, z >= 0) { //labels the longest side as c
        if (x >= y && x >= z) {
            c = x;
            b = y;
            a = z;
        }
        if (y >= x && y >= z) {
            c = y;
            b = x;
            a = z;
        }
        else {
            c = z;
            b = y;
            a = x;
        }
        break;
    }
    while (triangle > 0) { //tests to see if the inputs result in a triangle
        if (a + b <= c) {
            triangle = -1;
            break;
        }
        if (a + c <= b) {
            triangle = -1;
            break;
        }
        if (c + b <= a) {
            triangle = -1;
            break;
        }
        else {
            triangle = 2;
            break;
        }
    }
    while (triangle < 0) { //Error message if inputs don't make a triangle
        cout << "Invalid triangle. \n";
            break;
    }
    while (triangle > 0) { //what type of triangle is it?
        a = pow(a, 2);
        b = pow(b, 2);
        c = pow(c, 2);
        if (fabs(a + b - c) <= TOLERANCE) {
            cout << "Is a right triangle. \n";
            break;
        }
        if (a + b > c) {
            cout << "Is an acute triangle. \n";
            break;
        }
        if (a + b < c) {
             cout << "Is an obtuse triangle. \n";
             break;
        }
        else {
            cout << "Invalid triangle. \n";
            break;
        }
    }
    return 0;
}