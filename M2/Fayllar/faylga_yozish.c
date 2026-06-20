#include <stdio.h>
#include <string.h>

int main(){
    FILE *f = fopen("son.txt", "w"); // 'w', 'r', 'a'

    if(f == NULL){
        printf("Fayl ochilmadi!\n");
        return 0;
    }

    // fprintf(f, "%d\n", 454);
    // fprintf(f, "%d\n", 454);

    for(int i=0; i<5; i++){
        int son;
        scanf("%d", &son);
        fprintf(f, "%d ", son);
    }

    char ism[] = "Toshmat";
    fprintf(f, "%s", ism);

    printf("Fayl yozildi!\n");
    fclose(f);
}