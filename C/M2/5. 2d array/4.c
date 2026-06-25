#include <stdio.h>

int main(){

    // int array2D[3][2] = {{3, 4}, {6, 7}, {9, 10}};

    // for(int i=0; i<3; i++){
    //     for(int k=0; k<2; k++){
    //         printf("%d ", array2D[i][k]);
    //     }
    //     printf("\n");
    // }

    int n, m;
    printf("n va m:");
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            scanf("%d", &arr[i][k]);
        }
    }

    int max = arr[0][0];

    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            if(arr[i][k] > max){
                max = arr[i][k];
            }
        }
    }

    printf("Max: %d", max);
}