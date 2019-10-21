#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {

    Matrix Y;
    Matrix B;
    Matrix X(3,1), A(3,3), C(3,3);

    Matrix Z(A);

    cin >> C;
    cout << endl;
    cout << C;

    C*=2;
    cout << C;





    return 0;
}