#include <iostream>
#include "Matrix.h"
#include <locale>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    Matrix Y,B;
    Matrix X(3,1),A(3,3),C(3,3), L(3,3);
    Matrix F(3,3,2);
    Matrix W = F;
    Matrix Z(W);
    int numeroLinhas = A.getRows();
    int numeroColunas = A.getCols();





/*

    cout << "Matriz A(2,1) = 10: " << endl;
    cout << A << endl;
    cout << "----------------------------------" << endl;


    cout << "o numero de linhas da matriz A e: " << numeroLinhas << endl;
    cout << "o numero de colunas da mariz A e: " << numeroColunas;


    cout << "Matriz F: " << endl;
    cout << F << endl;
    cout << "----------------------------------" << endl;

    cout << "Matriz W: " << endl;
    cout << W << endl;
    cout << "----------------------------------" << endl;

    cout << "Matriz Z: " << endl;
    cout << Z << endl;
    cout << "----------------------------------" << endl;

    F.zeros();
    cout << "Matriz F: " << endl;
    cout << F << endl;
    cout << "----------------------------------" << endl;



























    cout << "altera o valor de uma posicao de A" << endl;
    A(2,1) = 10;
    cout << "------------------------------------" << endl;

    cin >> Y;
    cout << "a matriz Y: " << endl;
    cout << Y << endl;

    cout << "transforma tudo em 0" << endl;
    Y.zeros();
    cout << Y << endl;
    cout << "------------------------------------" << endl;

    cin >> A;
    cout << A;

    cout << "soma de matrizes: " << endl;
    C = A + A;
    cout << C << endl;
    cout << "------------------------------------" << endl;

    cout << "Subtracao -=: " << endl;
    C -= A;
    cout << C << endl;
    cout << "------------------------------------" << endl;

    cout << "subtracao - : ";
    Z = C - A;
    cout << Z << endl;
    cout << "------------------------------------" << endl;

    cout << "soma: ";
    A += A;
    cout << A << endl;
    cout << "------------------------------------" << endl;


    cout << "A = transposta de C: ";
    cout << "C: " << endl;
    cout << C << endl;
    A =~ C;
    cout << "transposta: " << endl;
    cout << "------------------------------------" << endl;

    cout << "multiplicacao por constante: " << endl;
    cout << "A: " << endl;
    A*=2;
    cout << A << endl;
    cout << "------------------------------------" << endl;

    cout << "multiplicacao de matrizes: " << endl;
    cout << "A" << endl;
    cout << A << endl;
    cout << "C" << endl;
    cout << C << endl;
    B = A * C;
    cout << B << endl;
    cout << "------------------------------------" << endl;

    cout << "operador de atribuicao: ";
    Matrix D = B;
    cout << B << endl;
    cout << "------------------------------------" << endl;

    cout << "igualdade de matrizes: " << endl;
    if (D == B){
        cout << "as matrizes D e B sao iguais" << endl;
        cout << "------------------------------------" << endl;
    }

    cout << "desigualdade de matrizes: " << endl;
    if (A != B){
        cout << "as matrizes A e B sao diferentes" << endl;
        cout << "------------------------------------" << endl;
    }

*/

    cout << "Transposta de Y: " << endl;
    cin >> Y;
    X =~ Y;
    cout << "------------------------------------" << endl;
    cout << X;
    cout << "------------------------------------" << endl;


    return 0;
}