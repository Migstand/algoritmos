#include <iostream>

char cabe(int abl, int abh, int ful, int fuh, int fdl, int fdh){
    int maiora = abl, maiorfu = ful, maiorfd = fdl, menora = abh, menorfu = fuh, menorfd = fdh;
    if (abh > maiora){
        maiora = abh;
        menora = abl;
    } 
    if (fuh > maiorfu){
        maiorfu = fuh;
        menorfu = ful;
    } 
    if (fdh > maiorfd){
        maiorfd = fdh;
        menorfd = fdl;
    }
    int subp = maiora - maiorfu; sub_m = men
    char v;
    if (subp >= menorfd){
        if (maiorfd <= menora){
            v ='S';
        };
    }else {
        v ='N';
    }
    return v;
}

int main(){
    int abl, abh, ful, fuh, fdl, fdh;
    std:: cin >> abl >> abh >> ful >> fuh >> fdl >> fdh;
    char album = cabe(abl, abh, ful, fuh, fdl, fdh);
    std::cout << album << std::endl;
    return 0;
}