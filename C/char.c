#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_upper(char belgi){
    return (belgi >= 65 && belgi <= 90);
}

bool is_lower(char belgi){
    return (belgi >= 97 && belgi <= 122);
}

bool is_digit(char belgi){
    return (belgi >= 48 && belgi <= 57);
}

bool is_alpha_numeric(char belgi){
    return is_digit(belgi) || is_upper(belgi) || is_lower(belgi);
}

char to_upper(char belgi){
    if(is_lower(belgi)) belgi -= 32;
    return belgi;
}

bool is_polindrom(char suz[]){
    int size = strlen(suz);

    for(int i=0; i<size/2; i++){
        if(suz[i] != suz[size-1 - i]) return false;
    }
    return true;
}

int main(){
    // char belgi = 'a', belgi2;
    // printf("%c\n", belgi);

    // printf("Belgini kiriting: ");
    // scanf("%c", &belgi2);
    // printf("%c\n", belgi2);

    // for(int i=65; i<=96; i++)
    //     printf("%c\n", i);

    // char belgi = '0';
    // printf("Katta harfmi: %d\n", is_upper(belgi));
    // printf("kichik harfmi: %d\n", is_lower(belgi));
    // printf("raqammi: %d\n", is_digit(belgi));
    // printf("Harf yoki raqam: %d\n", is_alpha_numeric(belgi));
    // printf("%c -> %c\n", belgi, to_upper(belgi));
    
    // printf("*************\n");
    // printf("Katta harfmi: %d\n", isupper(belgi));
    // printf("Kichik harfmi: %d\n", isxdigit(belgi));

    // char name[] = "Toshmat";
    // printf("%s\n", name);

    // // for(int i=0; i<7; i++){
    // //     printf("%c", to_upper(name[i]));
    // // }

    // int i=0;
    // while(name[i]){
    //     printf("%c", to_upper(name[i]));
    //     i++;
    // }

    // char last_name[100];

    // printf("Familiya: ");
    // // fgets(last_name, 100, stdin);  toshmatova
    // scanf("%s", last_name);

    // int i=0;
    // while(last_name[i]){
    //     i++;
    // }
    
    // if(last_name[i-1] == 'a'){
    //     printf("Qiz bola\n");
    // }
    // else{
    //     printf("O'g'il bola");
    // }

    // int size = strlen(last_name);
    //  if(last_name[size-1] == 'a'){
    //     printf("Qiz bola\n");
    // }
    // else{
    //     printf("O'g'il bola");
    // }

    // char qushimcha[] = "kor", suz[30] = "bunyod";
    // strcat(suz, qushimcha);
    // printf("%s\n", suz);

    // char *index = strchr(suz, 'd');

    // printf("%d", index - suz);

    // //----- Polindrom
    // char suz[10];
    // scanf("%s", suz);

    // printf("%d\n", is_polindrom(suz));


    //1. Foydalanuvchidan string kiriting. Undagi harflar, raqamlar va boshqa belgilar sonini alohida hisoblang.

    char satr[1000];
    int alpfa_count=0, digit_count=0, character_count=0;

    fgets(satr, 1000, stdin);

    int i=0;
    while(satr[i]){
       if(isalpha(satr[i])) alpfa_count++; 
       else if(isdigit(satr[i])) digit_count++; 
       else character_count++; 
       i++;
    }
    printf("Harflar soni: %d\n", alpfa_count);
    printf("Raqamlar soni: %d\n", digit_count);
    printf("Belgilar soni: %d\n", character_count);

}