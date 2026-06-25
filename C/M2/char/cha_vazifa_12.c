#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char matn[1000];
    fgets(matn, 1000, stdin);

    int i=0, probel=1;
    while(matn[i] != '\n'){
        if(probel == 1){
            printf("%c", toupper(matn[i]));
            probel=0;
        }
        else{
            printf("%c", matn[i]);
        }
        
        if(matn[i] == ' ') probel=1;
        i++;
    }
}