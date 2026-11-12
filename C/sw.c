#include<stdio.h>
int addnumbers(int a, int b);
int main(){
    system("cls");
    int sum = addnumbers(5, 10);
    printf("sum: %d\n", sum);
    return 0;
}
int addnumbers(int a, int b){
    return a + b;
}