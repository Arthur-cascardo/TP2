#include "Matrix.h"

using namespace std;

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



void Matrix::operator()(int posLin, int posCol){

    //TODO: Transformar impressão em metodo de erro;
    if(posLin > this->linhas){cout << "Matriz não possui indice " << posLin << " de Linha" << endl;}
    if(posCol > this->colunas){cout << "Matriz não possui indice " << posCol << " de Coluna" << endl;}
    posLin--;
    posCol--;
    //TODO: Achar um meio de receber o valor depois do igual
    //this->valores[posLin][posCol] = valor;
}

Matrix Matrix::operator+(const Matrix& m){
    Matrix aux(m.linhas,m.colunas);
    if(verficarMesmoTamanho(*this, m)){
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," <<this->colunas + ")"
        << " com matriz de tamanho (" << m.linhas << "," << m.colunas + ")" << endl;
    } else {
        for(int i = 0; i < aux.linhas; i++){
            for(int j = 0; j < aux.colunas; j++){
                aux.valores[i][j] = this->valores[i][j] + m.valores[i][j];
            }
        }
        return aux;
    }
}

void Matrix::operator+=(const Matrix& m){
    if(verficarMesmoTamanho(*this, m)){
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," <<this->colunas + ")"
             << " com matriz de tamanho (" << m.linhas << "," << m.colunas + ")" << endl;
    } else {
        for(int i = 0; i < this->linhas; i++){
            for(int j = 0; j < this->colunas; j++){
                this->valores[i][j] += m.valores[i][j];
            }
        }
    }
}

Matrix Matrix::operator-(const Matrix& m){
    Matrix aux(m.linhas,m.colunas);
    if(verficarMesmoTamanho(*this, m)){
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," <<this->colunas + ")"
             << " com matriz de tamanho (" << m.linhas << "," << m.colunas + ")" << endl;
    } else {
        for(int i = 0; i < aux.linhas; i++){
            for(int j = 0; j < aux.colunas; j++){
                aux.valores[i][j] = this->valores[i][j] - m.valores[i][j];
            }
        }
        return aux;
    }
}

void Matrix::operator-=(const Matrix& m){
    if(!verficarMesmoTamanho(*this, m)){
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," <<this->colunas + ")"
             << " com matriz de tamanho (" << m.linhas << "," << m.colunas + ")" << endl;
    } else {
        for(int i = 0; i < this->linhas; i++){
            for(int j = 0; j < this->colunas; j++){
                this->valores[i][j] -= m.valores[i][j];
            }
        }
    }
}
/*
void Matrix::operator=~(const Matrix& m){
}
*/
//TODO: ARTHUR
Matrix Matrix::operator*(const Matrix& m){
    int index_x = 0, index_y = 0;
    Matrix aux(this->linhas,m.colunas);
    double aux_val[this->linhas*m.colunas];
    if(!verficarPodeMultiplicar(*this, m)){
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," <<this->colunas + ")"
        << " com matriz de tamanho (" << m.linhas << "," << m.colunas + ")" << endl;
    } else {
        for(int k = 0; k < this->colunas; k++) {
            for (int i = 0; i < this->linhas; i++) {
                for (int j = 0; j < m.colunas; j++) {
                    aux_val[i*j] += this->valores[i][j] * m.valores[j][k];
                }
            }
        }
        for(int i = 0; i < this->linhas; i++){

        }
    }
}

void Matrix::operator*=(const Matrix& m){

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
}

std::istream operator>>(std::istream& entrada, Matrix& m)
{
}

void Matrix::zeros()
{

}

bool Matrix::verficarMesmoTamanho(const Matrix &a, const Matrix &b) {
    return (a.linhas == b.linhas && a.colunas == b.colunas);
}

bool Matrix::verficarPodeMultiplicar(const Matrix &a, const Matrix &b) {
    return (a.colunas == b.linhas);
}
