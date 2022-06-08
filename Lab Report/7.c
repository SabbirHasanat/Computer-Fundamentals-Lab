#include<stdio.h>
int main(){
    long int p;
    int n;
    double q;
    printf("-------------------------------------\n");
    printf("2^n   Positive         Negative\n");
    printf("-------------------------------------\n");
    p=1;

    for(n=0;n<21;++n){
        if(n==0)
            p=1;
        else
            p=p*2;
        q=1.0/(double)p;
         printf("%2d  | %7d  |%20.12lf\n",n,p,q);
    }
    printf("--------------------------------------\n");
    return 0;
}
