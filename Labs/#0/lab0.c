
#include <stdio.h>
int main(void)
{
    printf("Hello, World!\n");

    int i, sum;
    sum = 0;
    i = 0;

    while(i < 200){
        sum += i;
        i = i + 2;
    }
    printf("%d\n", sum);

    return 0;
}
