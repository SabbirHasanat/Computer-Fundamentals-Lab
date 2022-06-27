#include<stdio.h>
int main(){
    float m;
    scanf("%f",&m);
    if(m<0 || m>100){
        printf("Wrong Data!\n");
    }
    else if(m>=80 && m<=100){
        printf("Grade:A+  GPA:4\n");
    }
    else if(m>=75 && m<=79){
        printf("Grade:A  GPA:3.75\n");
    }
    else if(m>=70 && m<=74){
        printf("Grade:A-  GPA:3.5\n");
    }
    else if(m>=65 && m<=69){
        printf("Grade:B+  GPA:3.25\n");
    }
    else if(m>=60 && m<=64){
        printf("Grade:B  GPA:3\n");
    }
    else if(m>=55 && m<=59){
        printf("Grade:B-  GPA:2.75\n");
    }
    else if(m>=50 && m<=54){
        printf("Grade:C+  GPA:2.50\n");
    }
    else if(m>=45 && m<=49){
        printf("Grade:C  GPA:2.25\n");
    }
    else if(m<45){
        printf("You Got Failed\n");
    }

return 0;
}
