#include <stdio.h>

int main(){
    FILE *poem = fopen("sher.txt", "r");
    int belgilar=0, katta_harflar=0, kichik_harflar=0, raqamlar=0;

    char satr[1000];
    while(fgets(satr, 1000, poem) != NULL){

        int i=0;
        while(satr[i] != '\n'){
            if(satr[i] >= 65 && satr[i] <= 90) katta_harflar++;
            else if(satr[i] >= 97 && satr[i] <= 122) kichik_harflar++;
            else if(satr[i] >= 48 && satr[i] <= 57) raqamlar++;
            else belgilar++;
            printf("%c|", satr[i]);
            i++;
        }
    }

    printf("\n%d %d %d %d", katta_harflar, kichik_harflar, raqamlar, belgilar);
}