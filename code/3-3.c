#include <stdio.h>

int main()
{
    printf("%f\n", 5/3);
    printf("%f\n", (float)5/3);

    return 0;

    //둘다 format String이 %f라서 double값을 출력하는데 정수 나눗셈은 소수점 자리는 다 버리므로 값은 1이다. 그러나 int형식이 double로 자동변환 되지 않아서 0.000000이 출력된다.  
}
