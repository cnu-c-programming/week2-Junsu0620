#include <stdio.h>

int main()
{
    int a,b,c;
    
    a = b = c = 5;
    printf("%d %d %d\n", a ,b, c); 
    //a,b,c = 5 이므로 5 5 5출력 

    a = 2 + 3 * 4;
    printf("%d %d %d\n", a, b, c); 
    //a의 값만 2+12=14로 바뀌므로 14 5 5 출략

    c = a++ + ++b;
    printf("%d %d %d\n", a, b, c);
    //a++ = 14 + 1 = 15이고 ++b는 같은 +1인데 연산에 +1된 값을 사용하므로 c의 값은 14+6=20이다 따라서 15 6 20을 출력한다. 

    return 0;
}
