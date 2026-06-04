#include <stdio.h>

void kichiginiTop(int son1, int son2){
    if (son1<son2){
        printf("%d\n", son1);
    }else{
        printf("%d\n", son2);
    }
}



int main(){
    kichiginiTop(5, 7);
    kichiginiTop(8, 2);
    kichiginiTop(15, 27);
    kichiginiTop(54, 74);
}