#include<stdio.h>
double aylanayuzi(double r){
    double pi=3.14, s;
    s=pi*r*r ;
    return s;                   

}
int main(){
    double r;
    scanf("%lf", &r);
    printf("aylana yuzi%lf",aylanayuzi(r));
    

}