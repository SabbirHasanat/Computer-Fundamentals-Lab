#include<stdio.h>
int main(){
float c_num,u,bill;
printf("Enter the customer number & unit: ");
scanf("%f%f",&c_num,&u);

if(u>=0 && u<=200){
    bill= u*0.50;
}
else if(u>200 && u<=400){
    bill= 100 + 0.45*(u-200);
}
else if(u>400 && u<=600){
    bill= 270 + 0.75*(u-400);
}
else if(u>600){
    bill= 380 + 1.20*(u-600);
}
else{
    printf("Invalid Input!\n");
}
printf("Amount= %.2f\n",bill);

return 0;
}
