#include <iostream>

struct fracao{
    int numerador;
    int denominador;
};

int mult(int a, int b){
    int min, maior = 1, maior_v = a, menor_v = b;
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
    min = (a * b)/ maior;
    return min;
}

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

fracao soma(fracao &f1, fracao &f2){
    int m, somados;
    m = mult(&f1.denominador, $f2.denominador)
    somados = ((((&f1.numerador)*m)/&f1.denominador) + (((&f2.numerador)*m)/&f2.denominador))/m;
    return somados;
}

int main(){
    int a,b,c,d;
    fracao f1, f2;
    f1.numerador = a;
    f2.numerador = c;
    f1.denominador = b;
    f2.denominador = d;
    fracao f3;
    f3 = soma(f1,f2);

    return 0;
}