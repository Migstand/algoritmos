#include <iostream>
#include <iomanip>

int main(){
double a, r;
std::cin >> a;
double area;
r = a/2.0;
area = (r*r) * 3.14159;
// std::cout << r << std::endl;
std::cout << std::fixed << std::setprecision(5)
<< area << std::endl;
return 0;
}