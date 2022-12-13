#include <stdio.h>

int main (){
    print_sign(3094);
    return 0;
}
int print_sign(int n){
    if (n > 0){
        printf("+\n");
        return 1;
    }
    else if (n == 0){
        printf("0\n");
        return 0;
    }
    else {
        printf("-\n");
        return -1;
    }
}