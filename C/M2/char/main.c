#include <stdio.h>
#include <string.h>


int main(){
    char matn[1000];
    fgets(matn, 1000, stdin);

    int i=0;
    int count=1;
    while(matn[i]){
        if(matn[i] == ' ') count++;
        i++;
    }
    printf("So'zlar soni: %d\n", count);

    char suzlar[count][100];
    i=0;
    int c=0;
    int k=0;
    while(matn[i]){
        if(matn[i] == ' ' || matn[i] == '\n'){
            suzlar[c][k] = '\0';
            c++;
            k=0;
        }
        else{
            suzlar[c][k] = matn[i];
            k++;
        }
        i++;
    }

    for(int a=0; a<count; a++){
        // printf("%s\n", suzlar[a]);
        int l=strlen(suzlar[a])-1;
        // printf("%d\n", l);
        while (l>=0){
            printf("%c", suzlar[a][l]);
            l--;
        }
        printf(" ");
    }
}