#include <iostream>

int primo(int n){
    int i,divs = 0;
    for (i=1; i<n+1; ++i){
        if ((n%i)==0){
            divs++;
        }
    }
    return divs;
}

int main(){
    int a,s;
    std::cin >> a;
    s = primo(a);
    if ((s)==2){
        std::cout << "Verdadeiro" << std::endl;
    } else {
        std::cout << "Falso" << std::endl;
    }
    return 0;
}