#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a, b, c;
    printf("enter three numbers:");
    scanf("%d %d %d", &a,&b,&c);
    if (a <= b && a <= c){
        printf("smallest number = %d", a);
    }
    else if (b <= a && b<=c)
    {
        printf("smallest number = %d",b);
    }
    else{
        printf("smallest number = %d", c);
    }
    return 0;
}