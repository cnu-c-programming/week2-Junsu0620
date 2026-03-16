#include <stdio.h>

int main()
{   
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("unsigned int: %zu\n", sizeof(unsigned int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("float: %zu\n", sizeof(float));

    // chat gpt를 사용해서 해결하였으며 처음에 int면 %d\n 이런식으로 형태에 맞는 것을 사용했다가 출력이 다르게 나와서 사용했습니다. 
    // chat gpt에서는 sizeof()에서는 무조건 %zu\n을 사용하는 것이 안전하다고 알려줬습니다. 
    
    return 0;
}
