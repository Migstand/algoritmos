#include <iostream>

int euclide(int a, int b){
    int maior = 1, maior_v = a, menor_v = b;
    if (b > maior_v){
        maior_v = b;
    }
    if (a < menor_v){
        menor_v = a;
    }
    while ((maior_v%menor_v) != 0){
        maior = maior_v%menor_v;
        maior_v = menor_v;
        menor_v = maior;
    }
    return maior;
}
int main(){
    int a, b;
    std::cin >> a >> b;
    int c = euclide(a, b);
    std::cout << c << std::endl;
    return 0;
}