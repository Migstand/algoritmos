#include <iostream>
#include <algorithm>

int entre_si(int a, int b){
    int i,n;
    bool primo = true;
    n = std::min(a,b);
    for (i=2; i<n+1; i=i+1){
        if (((a%i)) == 0 and ((b%i)) == 0){
            primo = false;
            break;
        }
    }
    return primo;
}
int main(){
    int a,b;
    bool c;
    std::cin >> a >> b;
    c = entre_si(a,b);
    if (c){
        std::cout << "S" << std::endl;
    } else{
        std::cout << "N" << std::endl;
    }
    return 0;
}