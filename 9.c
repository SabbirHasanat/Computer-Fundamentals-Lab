#include <stdio.h>

int main() {

    int a,b,i,s=0;
    scanf("%d%d",&a,&b);
//    if(a==b){
//        printf("%d\n");
//    }
    for(i=b;i<=a;i++){
        if(i%2!=0 && i!=a & i!=b){
            s=s+i;
        }
    }
 printf("%d\n",s);

    return 0;
}
