#include<stdio.h>
int main(){
    int n,i,j,c;
    scanf("%d",&n);
    printf("The Prime number between 1 to %d\n",n);
    for(i=1;i<=n;i++){
            c=0;
        for(j=1;j<=i;j++)
            if(i%j==0){
                c++;
            }
            if(c==2){
                printf("%d ",i);
            }
        }
        printf("\n");

        return 0;
}
