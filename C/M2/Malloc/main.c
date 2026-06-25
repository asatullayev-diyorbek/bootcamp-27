#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Nechta son kiritmoqchisiz: ");
    scanf("%d", &size);

    int *numbers = malloc(size * sizeof(int)); 

    if(numbers == NULL){
        printf("Xotiradan joy ajratilmadi!\n");
        return 0;
    }

    // for(int i=0; i<size; i++){
    //     scanf("%d", (numbers+i));
    // }

    printf("*** Natija ***\n");
    for(int i=0; i<size; i++){
        printf("%d\n", *(numbers+i));
    }

    free(numbers);
    return 0;
}