//Solving for the roots in a quadratic equation

#include <iostream>
#include <cmath>
using namespace std;

main() {
    //The quadratic equation is: x = -b +- sqrt(b^2 - 4ac)/2a
    //The quadratic equation is used to find what points on the curve touches the x-axis
    //Where the standard form is: ax^2 + bx + c = 0
    //There are two forms plus and minus.
    //There are 3 possibilities to the discriminant:
        // b^2 - 4ac > 0 (positive), it has TWO real solutions
        // b^2 - 4ac = 0, it has ONE real solution
        // b^2 - 4ac < 0 (negative), it has a COMPLEX solution

    //Have the user input the values for a, b, and, c.
    //Then solve the quadratic equation.

    float a, b, c;
    float discrim;


    cout << "What are the values of a, b, and c? \n" ;
    cin >> a >> b >> c;
    cout << "You have entered: " << "a = " << a << ", b = " << b << ", c = " << c << endl;

    discrim = pow(b,2) - 4*a*c;

    cout << "Your discriminant is: " << discrim << endl;

    if (discrim > 0) {
        cout << "Your discriminant has two real solutions which are: \n";
        cout << -b << "/" << 2*a << "+" << sqrt(discrim) << "/" << 2*a << endl;
        cout << -b << "/" << 2*a << "-" << sqrt(discrim) << "/" << 2*a << endl;
    }

    else if (discrim == 0) {
            cout << "Your discriminant has one real solution which is: \n" << endl;
            cout << -b << "/" << 2*a << endl;
    }

    else{
        cout << "Your discriminant has complex solutions which are: \n" << endl;
        cout << -b << "/" << 2*a << "+" << sqrt(-discrim) << "i" << "/" << 2*a << endl;
        cout << -b << "/" << 2*a << "+" << sqrt(-discrim) << "i" << "/" << 2*a << endl;
    }


}
