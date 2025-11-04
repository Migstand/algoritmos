#include <iostream>
#include <cmath>

struct cordenada{
    int x, y;
};

int mais_proxima(cordenada a[], int n){
    int dist, menor_dist = 0;
    for (int i = 0; i<n; ++i){
        for (int j = i+1; j < n; ++j){
            dist = sqrt(((a[j].x - a[i].x)*(a[j].x - a[i].x)) + ((a[j].y - a[i].y)*(a[j].y - a[i].y)));
            if (menor_dist ==0){
                menor_dist = dist;
            }
            if (dist < menor_dist){
                menor_dist = dist;
            } 
        }
    }
    return menor_dist;
}

int main(){
    int n;
    std::cin >> n;
    cordenada a[n];
    for (int i = 0; i < n; ++i){
        std::cin >> a[i].x >> a[i].y;
    }
    int menor_dist = mais_proxima(a, n);
    std::cout << menor_dist << std::endl;
    return 0;
}

