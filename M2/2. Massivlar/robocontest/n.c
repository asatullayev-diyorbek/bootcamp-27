#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int numbers[n];

    for (int i=0; i<n; i++){
        // printf("%d - elementni kiriting: ", i+1);
        scanf("%d", &numbers[i]);
    }

    for(int i=0; i<n; i+=2){
        printf("%d ", numbers[i]);
    }

    for(int i=1; i<n; i+=2){
        printf("%d ", numbers[i]);
    }
}
