#include <stdio.h>

int main(){
    FILE *poem = fopen("sher.txt", "a");
    char satr[1000];

    // while (fgets(satr, 1000, poem) != NULL){
    //     printf("%s", satr);
    // }

    fputs("sherning oxiri\n", poem);

    fputc('!', poem);

    fclose(poem);
}