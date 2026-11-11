#include <stdio.h>

int main() {

    printf("suhani patel\n");
    int n,i,count=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0 && i%5!=0){
            printf("%d\n",i);
            count++;
            
        }
    }
    printf("\ntotal count =%d");
    
    return 0;
}
