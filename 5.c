#include<stdio.h>
int main(){
    int t1=0,t2=1,next,m;
    scanf("%d",&m);

    printf("Fibonacci Numbers: %d %d ", t1, t2);
    next=t1+t2;

    do{
        printf("%d ", next);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    while (next<=m);

    printf("\n");

return 0;
}
