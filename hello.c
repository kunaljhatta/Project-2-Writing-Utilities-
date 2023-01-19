#include <stdio.h>

int main()
{
    int x = 12;
    float y = 3.14;
    char* s = "Hello, world!";

    printf("x is %d, y is %f\n", x, y);
    printf("%s\n", s);

    for(int count = 0; count < 5; count++)
    {
        printf("%d x %d = %d\n", count, 5, count*5);
    }
    return 0;
}
