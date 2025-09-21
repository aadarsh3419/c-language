    #include<stdio.h>
    int main(){
        int n,i,j;
        printf("enter a number: ");
        scanf("%d",&n);
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                if((i<=n/2 && (j==n/2-i || j==n/2+i))||
                (i>n/2 && (j==i-n/2 || j==n-1-(i-n/2)))
                )
                printf("*");
                else printf(" ");
            }
        printf("\n");
        }
        
        return 0;
    }