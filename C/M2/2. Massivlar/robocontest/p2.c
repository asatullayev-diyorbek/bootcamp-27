#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i=0;
    int j=n-1;
    while(i<=j){
    if(i==j){
        printf("%d",a[i]);
        break;
    }
    if(i+1>=j-1){
        printf("%d %d",a[i],a[j]);
        break;
    }
        printf("%d %d ",a[i],a[i+1]);
        printf("%d %d ",a[j],a[j-1]);
        i+=2;
        j-=2;
    
    }

    return 0;
}
