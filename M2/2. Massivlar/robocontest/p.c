#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;

    scanf("%d", &n);

    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    // for(int i=0; i<n/2; i+=2){
    //     printf("a%d ", sonlar[i]);

    //     if(i+1 <= n-2-i)
    //         printf("b%d ", sonlar[i+1]);


    //     if (n-1-i >= i)
    //         printf("c%d ", sonlar[n-1-i]);

    //     if (n-2-i >= i)
    //         printf("d%d ", sonlar[n-2-i]);
    // }

    int start=0, end=n-1;

    while(n>0){
        printf("%d ", sonlar[start]);
        start++;
        n--;

        if(n>0){
            printf("%d ", sonlar[start]);
            start++;
            n--;
        }
        if(n>0){
            printf("%d ", sonlar[end]);
            end--;
            n--;
        }
        if(n>0){
            printf("%d ", sonlar[end]);
            end--;
            n--;
        }
    }
}