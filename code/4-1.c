#include <stdio.h>

int main()
{
    int a;
    int b;
    char cal;

    scanf("%d %d %c", &a, &b, &cal);

    if (cal == '+') {
        printf("%d\n", a + b);
    }
    else if (cal == '-') {
        printf("%d\n", a - b);
    }
    else if (cal == '*') {
        printf("%d\n", a * b);
    }
    else if (cal == '/') {
        if (b == 0) {
            printf("0으로 나누기 불가");
        }
        else {
            printf("%d\n", a / b);
        }
    }
    else {
        printf("잘못된 기호");
    }

    return 0;
}
