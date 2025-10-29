#include <iostream>
#include <cmath>
#include <algorithm>

struct cordenada{
    int x,y;
};

bool forma_triangulos(cordenada p1,cordenada p2,cordenada p3){
    double dists[3] = {sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y)),
                       sqrt((p1.x-p3.x)*(p1.x-p3.x) + (p1.y-p3.y)*(p1.y-p3.y)),
                       sqrt((p3.x-p2.x)*(p3.x-p2.x) + (p3.y-p2.y)*(p3.y-p2.y))};
    std::sort(dists, dists+3);
    return dists[2]*dists[2] == dists[1]*dists[1] + dists[0]*dists[0];

    double d12 = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
    double d13 = sqrt((p1.x-p3.x)*(p1.x-p3.x) + (p1.y-p3.y)*(p1.y-p3.y));
    double d23 = sqrt((p3.x-p2.x)*(p3.x-p2.x) + (p3.y-p2.y)*(p3.y-p2.y));
    if (d13>d12){
        double tmp = d12;
        d12 = d13;
        d13 = tmp;
    if (d23>d12){
        double tmp = d12;
        d12 = d23;
        d23 = tmp;
    }
    return d12*d12 == d13*d13 + d23*d23;
    }
};

int contar_tr(cordenada cordenadas[], int n){
    int resposta = 0;
    for (int i=0 ; i<n ; ++i){
        for (int j=i+1 ; j<n ; ++j){
            for (int k=j+2 ; k<n ; ++k){
                if (forma_triangulos(cordenadas[i], cordenadas[j], cordenadas[k])){
                    resposta = resposta + 1;
                }
            }
        }        
    }
    return resposta;
}

int main(){
    int n;
    std::cin >> n;
    cordenada cordenadas[n];
    for (int i=0; i<n; ++i){
        std::cin >> cordenadas[i].x >> cordenadas[i].y;
    }
    int qtd = contar_tr(cordenadas,n);
    std:: cout << qtd << std::endl;
    return 0;
}