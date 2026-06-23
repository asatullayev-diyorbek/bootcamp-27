#include <stdio.h>

int main(){
    FILE *f = fopen("talabalar.txt", "r");

    int yosh,baho;
    char ism[100];
    

    while(fscanf(f, "%[^,],%d,%d", ism, &yosh, &baho) != EOF){
        if(yosh < 18){
            printf("%s (%d) - %d", ism, yosh, baho);
        }
    }
    fclose(f);
}