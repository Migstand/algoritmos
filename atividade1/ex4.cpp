#include <iostream>

int main(){
int m,p,ults;
double quant;
std::cin >> m >> p;
quant = (m/p) + 1;
if ((m%p)!=0){
    {
        quant = quant + 1;
    }
}
ults = m%p;
std::cout << quant << std::endl;
std::cout << ults << std::endl;
return 0;
}