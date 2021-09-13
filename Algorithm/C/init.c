#include <stdio.h>

int add(){
    int x=1;
    int y=2;
    return x+y;
}


int main(){
    int result=add();
    printf("x+y:%d",result);
    return 0;
}