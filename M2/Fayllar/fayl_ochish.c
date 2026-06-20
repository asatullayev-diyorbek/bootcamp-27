#include <stdio.h>
#include <string.h>

int main(){
    FILE *f = fopen("son.txt", "r"); // 'w', 'r', 'a'

    if(f == NULL){
        printf("Fayl ochilmadi!\n");
        return 0;
    }

    char matn[1000];
    while(fscanf(f, "%s", matn) != EOF){    // End Of File(-1)
        if (strcmp(matn, "stop\0") == 0) break;

        printf("%s\n", matn);
    }

    


    printf("Fayl ochildi!\n");
    fclose(f);
}