//
// Created by arthur on 18/10/2019.
//

#ifndef TP2_MATRIX_H
#define TP2_MATRIX_H

#include <iostream>
#include <locale.h>
#include <list>


class Matrix {

public:

    Matrix();
    Matrix(int linhas, int colunas, const double &valor = 0);
    Matrix(const Matrix& m);
    int getCols() const;
    int getRows() const;
    void setCols(int colunas);
    void setRows(int linhas);
    double getValorIndice(int linha, int coluna);
    void setValores(double** val);
    double& operator()(int linhas, int colunas);
    Matrix operator+(const Matrix& m);
    void operator+=(const Matrix& m);
    Matrix operator-(const Matrix& m);
    void operator-=(const Matrix& m);
    Matrix operator~();
    void operator*=(int constante);
    Matrix operator*(const Matrix& m);
    bool operator==(const Matrix& m);
    bool operator!=(const Matrix& m);
    bool verficarMesmoTamanho(const Matrix& a,const Matrix& b);
    bool verficarPodeMultiplicar(const Matrix& a,const Matrix& b);
    void imprimeMatriz() const;
    bool validacao(int a = 0, int b = 0);
    //Operador friend permite que seja passado um objeto matriz como parametro
    //em vez de implicitamente ser referenciado o objeto do qual o método é membro
    friend std::ostream& operator<<(std::ostream &saida, const Matrix &m);
    friend std::istream& operator>>(std::istream &entrada, Matrix &m);
    void zeros();

private:

    int colunas;
    int linhas;
    double** valores;
};


#endif //TP2_MATRIX_H