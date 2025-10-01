#include <iostream>
#include <cmath>
/*
    r_{}
.....

*/

const double EPS = 0.000001;

double raiz_rec(double n, double raiz_anterior){
    double raiz_candidata = (raiz_anterior + (n/raiz_anterior)) / 2.0;
    if (std::fabs(raiz_candidata - raiz_anterior) < 0.0000001)
        return raiz_candidata;
    return raiz_rec(n, raiz_candidata);
}



double raiz_laco(double n){
    double raiz_anterior = 1;
    double raiz_candidata = (raiz_anterior + (n/raiz_anterior)) / 2.0;
    while (not std::fabs(raiz_candidata - raiz_anterior)<EPS){
        raiz_anterior = raiz_candidata;
        raiz_candidata = (raiz_anterior + (n/raiz_anterior)) / 2.0;
    }
    return raiz_candidata;
}

double raiz(double n){
    return raiz_rec(n, 1);
}

int main(){
    double n;
    std::cin >> n;
    double r = raiz(n);
    std::cout<<r<<std::endl;
    return 0;
}