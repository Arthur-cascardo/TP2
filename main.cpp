#include <iostream>
#include "Matrix.h"

using namespace std;

long long int fibonacci(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}

int main() {

    long long int aux = 0, n = 0, m = 1, x;
/*
    std::cin >> x;

    for(int i = 0; i < x; i++){
        aux = n + m;
        std::cout << aux << std::endl;
        n = m;
        m = aux;
    }

    std::cout << fibonacci(x);
    */


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