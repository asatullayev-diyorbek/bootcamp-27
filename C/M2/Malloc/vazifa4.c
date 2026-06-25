#include <stdio.h>
#include <stdlib.h>

int* create_range(int start, int end, int step){
    int size = end-start+1;
    int *numbers = malloc(size * sizeof(int));

    for(int i=0; i<size; i++){
        *(numbers+i) = start;
        start+=step;
    }
    return numbers;
}

int main(){
    int start=5, end=18, step=3;
    int size=(end-start) / step + 1;
    
    int *nums = create_range(start, end, step);

    for(int i=0; i<size; i++){
        printf("%d ", *(nums+i));
    }

    free(nums);
}
