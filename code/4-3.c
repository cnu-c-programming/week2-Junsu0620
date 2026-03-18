#include <stdio.h>

int main()
{   
    int a;

    scanf("%d", &a);

    if (a <= 1) {
        printf("false\n");
        return 0;
    }

    for (int b = 2; b * b <= a; b++) {
        if (a % b == 0) {
            printf("false\n");
            return 0;
        }
    }
    
    printf("true\n");
    return 0;
}
