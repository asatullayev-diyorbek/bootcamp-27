#include <stdio.h>
/*
void kupaytirish(int son1, int son2){
    printf("Natija: %d * %d = %d\n\n", son1, son2, son1 * son2);
}
*/

double daraja(double son, int daraja){
    double natija = 1;
    for (int i=1; i<=daraja; i++){
        natija *= son;
    }
    return natija;
}

int main(){
    /*
    int a, b;
    printf("Sonlarni kiriting: ");
    scanf("%d %d", &a, &b);

    kupaytirish(a, b);


    int c, d;
    printf("Sonlarni kiriting: ");
    scanf("%d %d", &c, &d);

    kupaytirish(c, d); */

    printf("%lf\n\n", daraja(3, 2));

    char ism[] = "FN27";

    printf("%s", ism);
    return 0;
}