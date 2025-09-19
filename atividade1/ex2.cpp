#include <iostream>

int perimetro(int a, int b){
    int s = (2*a) + (2*b);
    return s;    
}

int main(){
    int l1, l2;
    std::cin >> l1 >> l2;
    int a = perimetro(l1,l2);
    std::cout << a << std::endl;
    return 0;
}