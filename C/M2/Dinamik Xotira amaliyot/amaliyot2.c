#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        *(nums+i) = i;
    }

    for(int i=0; i<n; i++){
        printf("%d\n", *(nums+i));
    }
    free(nums);
}