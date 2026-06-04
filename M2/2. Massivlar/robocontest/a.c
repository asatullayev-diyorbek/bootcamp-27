#include <stdio.h>

int main(){
    int n;
    // printf("n = ");
    scanf("%d", &n);

    int numbers[n]; // index: 0, 1, 2, 3, 4: -> 0x2+1=1; 1x2+1=3

    for(int i=0; i<n; i++){
        numbers[i] = i * 2 + 1;
    }

    for(int i=0; i<n; i++){
        printf("%d ", numbers[i]);
    }    
}
