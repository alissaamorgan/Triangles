#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
double TOLERANCE;
int main()
{
    double x, y, z, c, b;
    double a = 1;
    double a2, b2, c2, s, p, area;
    int triangle = 1;
    TOLERANCE == 0.0001;
    cout << "Help me build a triangle! Input three real numbers seperated by a space, then press enter.\n"; //prompts for inputs
    cin >> x >> y >> z; //gathers input from user
    while (x, y, z < 0) { //checks for negative inputs
        cout << "Only real numbers may be entered. Please try again.\n";
        break;
    }
    while (x, y, z >= 0) { //labels the longest side as c and the shortest side as a
        if (x >= y && x >= z) {
            c = x;
            if (y >= z) {
                b = y;
                a = z;
            }
            else {
                b = z;
                a = y;
            }
        }
        if (y >= x && y >= z) {
            c = y;
            if (x >= z) {
                b = x;
                a = z;
            }
            else {
                b = z;
                a = x;
            }
        }
        }
        else {
            c = z;
            if (y >= x) {
                b = y;
                a = x;
            }
            else {
                b = x;
                a = y;
            }
        }
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
        a2 = pow(a, 2);
        b2 = pow(b, 2);
        c2 = pow(c, 2);
        if (fabs(a2 + b2 - c2) <= TOLERANCE) {
            cout << "Is a right triangle. \n";
        }
        if (a2 + b2 > c2) {
            cout << "Is an acute triangle. \n";
        }
        if (a2 + b2 < c2) {
             cout << "Is an obtuse triangle. \n";
        }
        else {
            cout << "Invalid triangle. \n";
            break;
        }
        cout << a, b, c;
        p = a + b + c;
        cout << p;
        s = a + b + c / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << area;
    }
    return 0;
}