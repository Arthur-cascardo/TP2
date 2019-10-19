#include <iostream>

long long int fibonacci(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}

int main() {

    long long int aux = 0, n = 0, m = 1, x;

    std::cin >> x;

    for(int i = 0; i < x; i++){
        aux = n + m;
        std::cout << aux << std::endl;
        n = m;
        m = aux;
    }

    std::cout << fibonacci(x);
    return 0;
}