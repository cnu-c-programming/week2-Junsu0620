#include <stdio.h>

int main() 
{
    int a = -1;
    unsigned int b = 1;

    if (a < b) {
        printf("a < b\n");
    }
    else {
        printf("a >= b ???\n");
    }

    return 0;

    // a > b 의 결과가 나온다. int와 unsigned int가 가팅 연산되면 int가 unsigned int로 형변환이 일어나기 때문이다. 
}
