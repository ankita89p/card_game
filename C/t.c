#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    float a, b, division;
    printf("emter two numbers:");
    scanf("%f %f", &a,&b);
    if(b == 0){
        printf("division by zero is not possible");
    }
    else{
    division = a/b;
    printf("division = %.f",division);}
    return 0;
}