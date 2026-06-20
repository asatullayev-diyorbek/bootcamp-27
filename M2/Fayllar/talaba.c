#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Talaba{
    char ism[50];
    int yosh;
    int kurs;
};

void talaba_qushish(){
    FILE *f_talaba = fopen("talabalar.info", "a");

    char ism[50];
    int yosh, kurs;
    printf("\n -- Talaba ma'lumotlari --\n");
    printf("Talaba ismi: ");
    scanf("%s", ism);

    printf("Talaba yoshi: ");
    scanf("%d", &yosh);

    printf("Talaba kursi: ");
    scanf("%d", &kurs);

    fprintf(f_talaba, "%s %d %d\n", ism, yosh, kurs);

    printf("-- Talaba qo'shildi! --\n");
    fclose(f_talaba);
}

void talaba_ruyxati(){
    FILE *f_talaba = fopen("talabalar.info", "r");
    char ism[50];
    int yosh, kurs;

    printf("\n <-- Talabalar -->\n");
    int i=1;
    while(fscanf(f_talaba, "%s %d %d", ism, &yosh, &kurs) != EOF){
        printf("%d - talaba:\n", i);
        printf("    Ism: %s\n", ism);
        printf("    Yosh: %d\n", yosh);
        printf("    Kurs: %d\n", kurs);
        i++;
    }
    printf("\n -- tugadi --\n");
    fclose(f_talaba);
}

int main(){
    int capacity = 10;
    struct Talaba *talabalar = malloc(capacity * sizeof(struct Talaba));

    while(true){
        int menu;
        printf("<- Menu ->\n");
        printf("1. Barcha talabalar\n");
        printf("2. Qo'shish\n");
        printf("3. O'chirish\n");
        printf("4. Tahrirlash\n");
        printf("5. Chiqish\n");
        printf("Menuni tanlang: ");

        scanf("%d", &menu);

        switch(menu){
            case 1: 
                talaba_ruyxati();
                break;
            
            case 2:
                talaba_qushish();
                break;

            case 5:
                printf("\n -- Dasturdan chiqildi --\n");
                goto stop;
                break;


            default:
                printf("\n-- Bunday menu yo'q, qayta tanlang! --\n\n");
        }
    }
    stop:
    return 0;
}