#include <stdio.h>

int main(){

    // int array2D[3][2] = {{3, 4}, {6, 7}, {9, 10}};

    // for(int i=0; i<3; i++){
    //     for(int k=0; k<2; k++){
    //         printf("%d ", array2D[i][k]);
    //     }
    //     printf("\n");
    // }

    int n=2, m=5;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            scanf("%d", &arr[i][k]);
        }
    }

    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            printf("%d ", arr[i][k]);
        }
        printf("\n");
    }
}