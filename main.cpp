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
    Matrix X(3,1), A(3,3), C(3,3);
    Matrix Z(A);
    Matrix W = C;
     int numeroLinhas = A.getRows();
     int numeroColunas = A.getCols();

     cout << A;
    A(2,1) = 10;
    cout << endl;
    cout << A;




    return 0;
}