#include <stdio.h>
#include <string.h>


int main(){
    char matn[1000];
    fgets(matn, 1000, stdin);

    char suzlar[strlen(matn)];

    int i=0, probel=0, start=0;

    while(matn[i] != '\n'){
        if(matn[i] != ' '){
            if (probel == 0 && start == 1) printf(" ");
            probel = 1;
            start = 1;
        }
        else{
            probel = 0;
        }

        if(probel==1 && start==1)
            printf("%c", matn[i]);
        i++;
    }
    printf("!");
}