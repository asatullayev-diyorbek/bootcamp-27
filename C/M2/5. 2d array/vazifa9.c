#include <stdio.h>

int main(){
    int array2D[3][3] = {
        {9, 1, 7},
        {4, 5, 2},
        {6, 3, 8}
    };

    int array[9], index=0;

    for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
            array[index] = array2D[i][k];
            index++;
        }
    }

    for(int i=0; i<8; i++){
        int min = i;
        for(int k=i; k<9; k++){
            if(array[k] < array[min]) min = k;
        }

        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }

    index=0;
    for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
            array2D[i][k] = array[index];
            index++;
        }
    }

    for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
            printf("%d ", array2D[i][k]);
        }
        printf("\n");
    }
}