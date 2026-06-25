#include <stdio.h>
void tortburchak(int a,int b){
    printf("s=%d",a*b);
}
int main(){
    int a,b;
    printf("tortburcha tomoni kiritng: ");
    scanf("%d %d",&a,&b);
    tortburchak(a,b);
}