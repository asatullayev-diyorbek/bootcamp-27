#include <stdio.h>
#include <string.h>

int main(){
    FILE *f = fopen("sonlar.txt", "r"); // 'w', 'r', 'a'

    if(f == NULL){
        printf("Fayl ochilmadi!\n");
        return 0;
    }

    int sonlar[100];
    int i=0;
    while (fscanf(f, "%d", (sonlar+i)) != EOF){
        printf("%d ", sonlar[i]);
        i++;
    }
    
    printf("\nFayldan o'qildi!\n");
    fclose(f);
}