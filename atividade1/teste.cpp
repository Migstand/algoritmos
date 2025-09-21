#include <iostream>
#include <iomanip>

int main() {
int a, b;
double media;
std::cin >> a >> b;
media = (a+b)/2.0; // conversão implícita Divisão de doubles
std::cout << std::fixed << std::setprecision(1)
<< media << std::endl;
return 0;
}