#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int score = 85;
    if(score >= 90){
        printf("grade A\n");
    }
    else if (score >= 75){
        printf("grade B\n");
    }
    else{
        printf("grade C\n");
    }
    char *result = (score >= 40) ? "passed" : "failed";
    printf("status: %s\n", result);
    return 0;
}
