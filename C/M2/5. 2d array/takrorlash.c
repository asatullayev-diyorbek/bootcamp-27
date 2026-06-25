#include <stdio.h>

int main(){
    int array[3][5] = {
        {1, 24, 2002, 05, 03}, 
        {2, 18, 2008, 03, 02},
        {3, 7, 2019, 07, 24}
    };

    int array2[3][3];

    for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
            printf("array2[%d][%d] = ", i, k);
            scanf("%d", &array2[i][k]);
        }
    }

    for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
            printf("%d ", array2[i][k]);
        }
        printf("\n");
    }
}