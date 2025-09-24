#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter a number: ");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        for (j=0;j<=i;j++){
            if(j==0 || 
                j==i  )
                printf("*");
            else printf(" ");
        }
        for (j=0;j<=2*(n-i);j++)printf(" ");
        for (j=0;j<=i;j++){
            if(j==0 || 
                j==i  )
                printf("*");
            else printf(" ");
        }
    printf("\n");
    }
    for (i=n;i>=0;i--){
        for (j=0;j<=i;j++){
            if(j==0 || 
                j==i  )
                printf("*");
            else printf(" ");
        }
        for (j=0;j<=2*(n-i);j++)printf(" ");
        for (j=0;j<=i;j++){
            if(j==0 || 
                j==i  )
                printf("*");
            else printf(" ");
        }
    printf("\n");
    }
}
