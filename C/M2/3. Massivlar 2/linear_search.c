#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[] = {34, 23, 6, 32, 96, 31, 3, 5, 26, 7};

    for(int i=0; i <10; i++){
        if (sonlar[i] == n){
            printf("%d soni %d-indeksda\n", n, i);
            break;
        }
    }
}