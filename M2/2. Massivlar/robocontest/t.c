#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);

    double numbers[n];
    for(int i=0; i<n;i++){
        scanf("%lf", &numbers[i]);
    }

    bool is_swap;

    do{
        is_swap=false;
        for(int i=1; i<n; i++){
            if(numbers[i-1] > numbers[i]){
                double temp = numbers[i-1];

                numbers[i-1] = numbers[i];
                numbers[i]=temp;
                is_swap=true;
            }
        }
    } while (is_swap);

    for (int i = 0; i < n; i++){
        printf("%lf ", numbers[i]);
    }

    double q = numbers[1] / numbers[0];

    if (numbers[0]>0 && q>1){
        for(int i=1; i<n; i++){
            if(numbers[i]/numbers[i-1] != q){
                printf("0");
                goto tugadi;
            }
        }
        printf("%lf", q);
    }
    else if (numbers[0]<0 && q>0 && q<1){
        for(int i=0; i<n-1; i++){
            if(numbers[i]/numbers[i+1] != q){
                printf("0");
                goto tugadi;
            }
        }
        printf("%lf", q);
    }
    else{
        printf("0");
    }

    

    tugadi:
}
