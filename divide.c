#include <stdio.h>
int main (){
    int x, y;
    int divide(int x, int y);
    printf("Starting program: divide\n");
    
    x = 10;
    
    y = 5;
    
    printf("%d / %d = %d\n", x, y, divide(x, y));

    y = 0;

    printf("%d / %d = %d\n", x, y, divide(x, y));
    return 0;
}

int divide(int x, int y){
    return x/y;
}
