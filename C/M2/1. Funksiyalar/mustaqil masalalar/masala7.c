#include <stdio.h>
/*
char bahoBerish(int baho){
    if(baho>=60 && baho<70){
        return 'D';
    }else if(baho>=70 && baho<80){
        return 'C';
    }else if(baho>=80 && baho<90){
        return 'B';
    }else if(baho>=90 && baho<100){
        return 'A';
    }else{
        return 0;
    }
} */

int main(){
    int baho;
    scanf("%d",&baho);
    printf("%c",bahoBerish(baho));
}