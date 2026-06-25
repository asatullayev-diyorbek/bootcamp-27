#include <stdio.h>
#include <stdbool.h>

void draw_table(int (*katak)[3]){
    for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
            if (*(*(katak + i) + k) == 1){
                printf("X | ");
            }
            else if (*(*(katak + i) + k) == 2){
                printf("O | ");
            }
            else{
                printf("  | ");
            }
        }
        printf("\n------------\n");
    }
}

void hozirgi_navbat(int player){
    if(player == 1) printf("Hozirgi navbat: X\n");
    else printf("Hozirgi navbat: O\n");
}

bool katakni_tekshirish(int x, int y, int (*katak)[3]){
    if (*(*(katak+x)+y) == 0){
        return true;
    }
    return false;
}

void katakni_tanlash(int (*katak)[3], int *player, int x, int y){
    *(*(katak + x) + y) = *player;
    *player = (*player==1)?2:1;
}

int kim_yutdi(int (*katak)[3]){ // 0=> durrang; 1=> X yutdi; 2=> O yutdi
    if(*(*(katak + 0) + 0) == (*(*(katak + 0) + 1)) && (*(*(katak + 0) + 1) == *(*(katak + 0) + 2) && *(*(katak + 0) + 0)!=0)){
        return *(*(katak + 0) + 0);
    }
    return 0;
}

int main(){
    int katak[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };   // 0=>bo'sh katak; 1=>X; 2=>O
    int player = 1; // 1=> X; 2=> O

    while (1){
        int x, y;
        draw_table(katak);
        hozirgi_navbat(player);
        printf("Katak manzilini kiriting: ");
        scanf("%d %d", &x, &y);
        x--;
        y--;
        if(katakni_tekshirish(x, y, katak)){
            katakni_tanlash(katak, &player, x, y);
        }
        else{
            printf("Bu katak band!\n");
        }

        if(kim_yutdi(katak) == 1){
            printf("X yutdi\n");
            draw_table(katak);
            break;
        }
        else if(kim_yutdi(katak) == 2){
            printf("O yutdi\n");
            draw_table(katak);
            break;
        }
    }
}