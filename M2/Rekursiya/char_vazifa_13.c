#include <stdio.h>
#include <string.h>
#include <ctype.h>

int str_to_int(char *s){
    int k=1;
    if(*s == '-') k=-1;

    int i = (k==1)?0:1;
    int butun_son=0;
    while(*(s+i)){
        butun_son = butun_son * 10 + (*(s+i) - 48);
        i++;
    }
    return butun_son * k;
}

int main(){
    char sonlar[1000];
    
    scanf("%s", sonlar);
    printf("Natija: %d", str_to_int(sonlar));
}