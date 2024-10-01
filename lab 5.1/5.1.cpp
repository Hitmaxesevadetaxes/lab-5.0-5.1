#include <iostream>
#include <cmath>
using namespace std;

double k(double x, double y); // Прототип

int main() {
    double p, q;

    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    double result = pow(k(p + sqrt(q), q - sqrt(p)), 2) - k(1, p + q);

    cout << "Result = " << result << endl;

    return 0;
}
double k(double x, double y) {
    return (x / (pow(x, 3) + pow(y, 3))) + (y / (x + y));
}
