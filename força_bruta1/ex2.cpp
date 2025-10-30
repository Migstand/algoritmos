#include <iostream>
#include <string>

std::string exist_s(int a[], int s, int n){
    std::string v = "Não existe um par com o resultado da soma";
    for (int i=0; i< n ; ++i){
        for(int j = i + 1; j<n; ++j){
            if (a[i] + a[j] == s){
                v = "Existe o par";
            }
        }
    }
    return v;
}

int main(){
    int n, s;
    std::cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; ++i){
        std::cin >> a[i];
    }
    std::string p = exist_s(a,s,n);
    std::cout << p << std::endl;
    return 0;
}