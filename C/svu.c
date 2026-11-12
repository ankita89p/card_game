#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if (ch >= '0' && ch <= '9'){
        printf("it is a digit.");
    }
    else{
        printf("it is not a digit.");
    }
    return 0;
}