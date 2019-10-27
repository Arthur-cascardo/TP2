#include "Matrix.h"
#include <locale.h>

using namespace std;

Matrix::Matrix() {

    this->colunas = 0;
    this->linhas = 0;
    this->valores = new double*[0];
    this->valores[0] = new double[0];
}

Matrix::Matrix(int linhas, int colunas, const double &valor) {

    if (validacao(linhas, colunas)) {
        std::cout << "Digite um valor válido para colunas e linhas" << endl;
        this->linhas = 0;
        this->colunas = 0;
        this->valores = new double *[0];
        this->valores[0] = new double[0];

    } else {
        this->valores = new double *[linhas];

        for (int i = 0; i < linhas; i++) {
            this->valores[i] = new double[colunas];
        }
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                valores[i][j] = valor;
            }
        }

        this -> linhas = linhas;
        this -> colunas = colunas;


    }

}

Matrix::Matrix(Matrix const& m) {

    this->colunas = m.colunas;
    this->linhas = m.linhas;
    this->valores = m.valores;
}

int Matrix::getCols(){return colunas;}
int Matrix::getRows() {return linhas;}
void Matrix::setCols(int colunas) {this->colunas = colunas;}
void Matrix::setRows(int linhas) {this->linhas = linhas;}
double Matrix::getValorIndice(int linha, int coluna) {return this->valores[linha--][coluna--];};
void Matrix::setValores(double **val){this->valores = val;};

void Matrix::imprimeMatriz() const{
    if (linhas < 0 || colunas <0){
        cout << "Linha ou coluna com valor inválido";
    } else{
        for(int i = 0; i < linhas; i++){
            for (int j=0; j < colunas; j++){
                cout << valores[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void Matrix:: zeros(){
    for(int i = 0; i < linhas; i++){
        for (int j=0; j < colunas; j++){
            valores[i][j] = 0;
        }
    }
}


double& Matrix::operator()(int posLin, int posCol){

    //TODO: Transformar impressão em metodo de erro;
    if(posLin > this->linhas){cout << "Matriz não possui indice " << posLin << " de Linha" << endl;}
    if(posCol > this->colunas){cout << "Matriz não possui indice " << posCol << " de Coluna" << endl;}
    posLin--;
    posCol--;
    return this->valores[posLin][posCol];
}

//Operador ja possui implementação por default
/*
Matrix Matrix::operator= (const Matrix& m){
    this -> linhas = m.linhas;
    this -> colunas = m.colunas;
    for(int i=0; i<linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            this->valores[i][j] = m.valores[i][j];
        }
    }
    return m;
}
*/
Matrix Matrix::operator+(const Matrix& m){
    Matrix aux(m.linhas,m.colunas);
    if (!verficarMesmoTamanho(*this, m)){
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," <<this->colunas << ")"
             << " com matriz de tamanho (" << m.linhas << "," << m.colunas << ")" << endl;
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
    if(!verficarMesmoTamanho(*this, m)){
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," <<this->colunas << ")"
             << " com matriz de tamanho (" << m.linhas << "," << m.colunas << ")" << endl;
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
    if(!verficarMesmoTamanho(*this, m)){
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," <<this->colunas << ")"
             << " com matriz de tamanho (" << m.linhas << "," << m.colunas << ")" << endl;
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
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," <<this->colunas << ")"
             << " com matriz de tamanho (" << m.linhas << "," << m.colunas << ")" << endl;
    } else {
        for(int i = 0; i < this->linhas; i++){
            for(int j = 0; j < this->colunas; j++){
                this->valores[i][j] -= m.valores[i][j];
            }
        }
    }
}
Matrix Matrix::operator~(){
    Matrix m(linhas,colunas);
    for(int i=0;i<colunas;i++){
        for(int j=0;j<linhas;j++){
            m.valores[j][i] = this->valores[i][j];
        }
    }

    return (*this) = m;
    
}

//TODO: ARTHUR
Matrix Matrix::operator*(const Matrix& m){
    Matrix aux(linhas,colunas);

    if(!verficarPodeMultiplicar(*this, m)) {
        cout << "Não é possível operar matriz de tamanho (" << this->linhas << "," << this->colunas << ")"
             << " com matriz de tamanho (" << m.linhas << "," << m.colunas << ")" << endl;
        return aux;
    } else {


        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < m.colunas; j++) {
                int aux_val = 0;
                for (int k = 0; k < colunas; k++) {
                    aux_val += valores[i][k] * m.valores[k][j];
                }
                aux.valores[i][j] = aux_val;
            }
        }
    }
    return aux;
}

void Matrix::operator*=(int constante){
    for(int i=0; i<this->linhas; i++){
        for(int j=0; j<this->colunas; j++){
            this->valores[i][j] = this->valores[i][j]*constante;
        }
    }
}

bool Matrix::operator==(const Matrix& m)
{
    if(!verficarMesmoTamanho(*this, m)){
        return false;
    } else{
        for(int i=0; i<m.linhas; i++){
            for(int j=0; j<m.colunas; j++){
                if(this->valores[i][j] != m.valores[i][j]){
                    return false;
                }
            }
        }
    }

}

bool Matrix::operator!=(const Matrix& m)
{
    if(!verficarMesmoTamanho(*this, m)){
        return true;
    } else{
        for(int i=0; i<m.linhas; i++){
            for(int j=0; j<m.colunas; j++){
                if(this->valores[i][j] != m.valores[i][j]){
                    return true;
                }
            }
        }
    }

}

std::ostream& operator<<(std::ostream& saida, const Matrix& m)
{
    for(int i = 0; i < m.linhas; i++){
        for (int j=0; j < m.colunas; j++){
            cout << m.valores[i][j] << " ";
        }
        cout << endl;
    }
    return saida;
}

std::istream& operator>>(std::istream& entrada, Matrix& m)
{
    do{
        std::cout << "Digite o numero de linhas inteiro e positivo: ";
        entrada >> m.linhas;
    } while(m.linhas < 0);

    do {
        std::cout << "Digite o numero de colunas inteiro e positivo: ";
        entrada >> m.colunas;
    } while(m.colunas < 0);

    m.valores = new double *[m.linhas];

    for(int i =0; i<m.linhas; i++){
        m.valores[i] = new double[m.colunas];
    }


    std::cout << "Digite os valores da sua matriz: " << endl;
    for(int i = 0; i<m.linhas; i++){
        std::cout<<endl;
        for(int j = 0; j<m.colunas; j++){
            std::cout << "valor[" << i+1 << "][" << j+1 << "]: ";

            entrada >> m.valores[i][j];

        }

    }
    return entrada;
}

bool Matrix::verficarMesmoTamanho(const Matrix &a, const Matrix &b) {
    return (a.linhas == b.linhas && a.colunas == b.colunas);
}

bool Matrix::verficarPodeMultiplicar(const Matrix &a, const Matrix &b) {
    return (a.colunas == b.linhas);
}

bool Matrix::validacao(int linhas, int colunas){
    return(linhas < 0 || colunas < 0);

}

