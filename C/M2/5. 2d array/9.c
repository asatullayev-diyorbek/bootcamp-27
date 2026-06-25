#include <stdio.h>

int main(){

    // int array2D[3][2] = {{3, 4}, {6, 7}, {9, 10}};

    // for(int i=0; i<3; i++){
    //     for(int k=0; k<2; k++){
    //         printf("%d ", array2D[i][k]);
    //     }
    //     printf("\n");
    // }

    int n;
    printf("n:");
    scanf("%d", &n);

    int arr[n][n], d1=0, d2=0;

    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            scanf("%d", &arr[i][k]);
        }
    }

    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            if(i==k) d1 += arr[i][k];
            if(i+k == n-1) d2 += arr[i][k];
        }
    }

    printf("%d %d", d1, d2);
}