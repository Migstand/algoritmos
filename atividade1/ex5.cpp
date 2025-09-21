#include <iostream>

int divisores(int n){
    int i,divs = 0;
    for (i=1; i<n; ++i){
        if ((n%i)==0){
            divs++;
        }
    }
    return divs;
}
int main(){
    int a,s;
    std::cin >> a;
    s = divisores(a);
    std::cout << s << std::endl;
    return 0;
}