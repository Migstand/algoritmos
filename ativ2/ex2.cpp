#include <iostream>

int impars(int a[], unsigned int n){
    int d = 0;
    for (unsigned int i = 0; i < n; ++i){
        if (a[i] % 2 == 1){
            d = d + 1;
        }
    }
    return d;
}

int main() {
    unsigned int n;
    std::cin >> n;
    int a[n];
    for (unsigned int i = 0; i < n; ++i){
        std::cin >> a[i];
    }
    int impares = impars(a, n);
    std::cout << impares << std::endl;
    return 0;
}