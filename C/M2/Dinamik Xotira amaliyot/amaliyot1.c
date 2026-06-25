#include <stdio.h>
#include <stdlib.h>

int main(){
    int *nums = malloc(5 * sizeof(int));

    for(int i=0; i<5; i++){
        *(nums+i) = i+1;
    }

    for(int i=0; i<5; i++){
        printf("%d\n", *(nums+i));
    }
    free(nums);
}