#include <stdio.h>

int main() {
    int* ip;
    ip = 2;
    printf("%x\n", ip);
    printf("%x\n", *ip);    //x是16進位 //d是10進位
    return 0;
}