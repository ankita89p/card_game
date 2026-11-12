#include<stdio.h>
long long calculate factorial(int n){
    long long fact = 1;
    for(int i = 1;i<=n;i++){
        fact*=i;
    }
    int main(){
        system("cls");
        int num;
        printf("enter a positive integer:");
        scanf("%d",&num);
        if (num<0){
            printf("error!factorial of a negative number does't exit.\n");   
        }else{
            printf("factorial of %d = %11d\n", num calculate factorial(num));
        }
    }
    return 0;
}