#include <iostream>

char soma_s(int n, int a[], int s){
    char v = 'n';
    int c;
    for (int i = 0; i <n; i++){
            for (int j = i+1; j < n; j++){
                c =a[i] + a[j];
                if (c == s){
                    v = 's';
            };
            
        };
    };
    return v;
};

int main(){
    int n, s;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        std::cin>> a[i];
    }
    std::cin >> s;
    char v = soma_s(n, a, s);
    std::cout << v << std::endl;
    return 0;
}