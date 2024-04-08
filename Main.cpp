#include "QuadraticSolver.h"

int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Welcome to the Quadratic Equation Solver!" << endl << endl;
	cout << "Please enter the values for your equation below..." << endl;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;
	cout << endl << endl << "Your equation is: 0 = " << a << "x^2 + " << b << "x + " << c << endl;
	cout << "In the quadratic equation it looks like:             -" << b << " +- sqrt(" << b << "^2 - 4(" << "(" << a << ")" << "(" << c << ")" << ")" << endl;
	cout << "                                                 x = ------------------------------" << endl;
	cout << "                                                              2(" << a << ")" << endl << endl;

	int discriminant = (pow(b, 2) - 4 * a * c);

	cout << "Now let's handle the solution!..." << endl;
	cout << "The roots given your values for a, b, and c are..." << endl;

	if (a == 0) {
		cout << endl << "Divide by zero error." << endl << endl;
		return 1;
	}

	float root1 = 0;
	float root2 = 0;

	if (discriminant > 0) {
		root1 = (-1 * b + sqrt(discriminant)) / (2 * a);
		root2 = (-1 * b - sqrt(discriminant)) / (2 * a);
	}

	if (discriminant == 0) {
		root1 = root2 = (-abs(b)) / (2 * a);
	}

	if (discriminant < 0) {
		discriminant = -abs(discriminant);

		cout << "x1 = " << "(" << -1 * (b) << " + i" << sqrt(discriminant) << ") / " << 2 * a << endl;
		cout << "x2 = " << "(" << -1 * (b) << " - i" << sqrt(discriminant) << ") / " << 2 * a << endl;
	}

	cout << "x1 = " << root1 << endl;
	cout << "x2 = " << root2 << endl << endl;

	system("pause");
	return 0;
}
