#include "Matrix.h"

Matrix::Matrix() {

    this->colunas = 0;
    this->linhas = 0;
    this->valores = new double*[0];
    this->valores[0] = new double[0];
}

Matrix::Matrix(int linhas, int colunas, const double &valor){

    this->valores = new double* [linhas];

    for (int i = 0; i < linhas; i++) {
        this->valores[i] = new double[colunas];
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            valores[i][j] = valor;
        }
    }
}

Matrix::Matrix(Matrix const& m) {

    this->colunas = m.colunas;
    this->linhas = m.linhas;
    this->valores = m.valores;
}

int Matrix::getCols(){return this->colunas;}
int Matrix::getRows(){return this->linhas;}

void Matrix::operator()(int linhas, int colunas)
{
}

Matrix Matrix::operator+(const Matrix& m)
{
    return Matrix();
}

void Matrix::operator+=(const Matrix& m)
{
}

Matrix Matrix::operator-(const Matrix& m)
{
    return Matrix();
}

void Matrix::operator-=(const Matrix& m)
{
}

void Matrix::operator=~(const Matrix& m)
{
}

void Matrix::operator*=(const Matrix& m)
{
}

Matrix Matrix::operator*(const Matrix& m)
{
    return Matrix();
}

bool Matrix::operator==(const Matrix& m)
{
    return false;
}

bool Matrix::operator!=(const Matrix& m)
{
    return false;
}

std::ostream operator<<(std::ostream& saida, const Matrix& m)
{
    return std::ostream();
}

std::istream operator>>(std::istream& entrada, Matrix& m)
{
    return std::istream();
}

void Matrix::zeros()
{

}