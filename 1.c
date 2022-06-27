#include<stdio.h>
int main(){
    int p,q,r;
    scanf("%d%d%d",&p,&q,&r);
    if(p>q){
        if(p>r){
            printf("The largest number is= %d\n",p);
        }
        else{
            printf("The largest number is= %d\n",r);
        }
    }
    else{
        if(q>r){
            printf("The largest number is= %d\n",q);
        }
        else{
            printf("The largest number is= %d\n",r);
        }
    }
    return 0;
}
