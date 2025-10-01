#include <iostream>

struct fracao{
    int numerador;
    int denominador;
};

int mdc(int a, int b){
    if (b==0) return a;
    else return mdc(b, a%b);

}

int mmc(int a, int b){
    return (a*b)/mdc(a,b);
}
fracao soma(fracao &f1, fracao &f2){
    fracao resultado;
    resultado.denominador = mmc(f1.denominador, f2.denominador);
    resultado.numerador = (f1.numerador*resultado.denominador/f1.denominador) + 
                    (f2.numerador*resultado.denominador/f2.denominador);
    int x = mdc(resultado.numerador, resultado.denominador);
    resultado.numerador = resultado.numerador/x;
    resultado.denominador = resultado.denominador/x;
    return resultado;
}

int main(){
    fracao f1, f2;
    std::cin >> f1.numerador >> f1.denominador;
    std::cin >> f2.numerador >> f2.denominador;
    fracao f3 = soma(f1, f2);
    std::cout << f3.numerador <<  "/" << f3.denominador << std::endl;
    return 0;
}