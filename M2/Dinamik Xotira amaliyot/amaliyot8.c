#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int capacity = 20;
    char *ism = calloc(capacity, sizeof(char));
    char name[100];

    printf("Ismingizni kiriting: ");
    scanf("%s", name);

    if(strlen(name) <= capacity){
        strcpy(ism, name);
    }
    else{
        printf("Joy yetarli emas!\n");
        capacity = strlen(name);
        char *temp = realloc(ism, capacity);
        if(temp!=NULL) ism = temp;
        strcpy(ism, name);
    }

    printf("Sizning ismingiz: %s\n", ism);
    free(ism);
}