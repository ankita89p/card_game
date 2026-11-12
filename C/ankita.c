#include <stdio.h>
#include <stdlib.h>
void modifybyvalue(int x){
    x = 100;  
}
void modifybyreference(int *x){
    *x = 100;
}
int main(){
    
    int val = 10;
    modifybyvalue(val);
    printf("after call by value: %d\n", val);
    modifyreference(&val);
    printf("after call by reference: %d\n", val);
    return 0;
}