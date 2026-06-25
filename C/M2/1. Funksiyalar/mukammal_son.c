#include <stdio.h>
#include <stdbool.h>

bool mukammalSonmi(int son){
    int yigindi=0;
    for (int i=1; i<son; i++){
        if (son%i==0) yigindi+=i;
    }

    return yigindi == son;
}

int teskari_son(int son){
    long long int teskari=0;
    while(son>0){
        teskari = teskari * 10 +  son%10;
        son /= 10;
    }
    return teskari;
}

int qurbaqa(int h, int d, int n){
    int kun = 0;
    while(h>0){
        h -= d;
        kun++;

        if (h<=0){
            return kun;
        }
        h+=n;
    }
}

int main(){
    int son;
    printf("Sonni kiriting: ");
    scanf("%d", &son);

    // if (mukammalSonmi(son)){
    //     printf("%d - mukammal son", son);
    // }
    // else{
    //     printf("%d - mukammal son emas", son);
    // }

    // printf("Teskari son: %d\n\n", teskari_son(son));
    printf("Kunlar soni: %d\n\n", qurbaqa(10, 2, 1));

}