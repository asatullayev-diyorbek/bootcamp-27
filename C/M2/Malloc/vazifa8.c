#include <stdio.h>
#include <stdlib.h>

int* copy_array(int *arr, int size){
    int *arr_copy = malloc(size * sizeof(int));
    for(int i=0; i<size; i++){
        *(arr_copy+i) = *(arr+i);
    }
    return arr_copy;
}

int main(){
    int size=5;
    int *arr = malloc(size*sizeof(int));

    *(arr+0) = 5;
    *(arr+1) = 4;
    *(arr+2) = 7;
    *(arr+3) = 2;
    *(arr+4) = 20;

    int *new_arr = copy_array(arr, size);

    printf("Asl nusxa: %p\n", arr);
    printf("Copy nusxa: %p\n", new_arr);

    for(int i=0; i<size; i++){
        printf("%d ", *(new_arr+i));
    }

    free(new_arr);
    free(arr);
}
