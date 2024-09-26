#include <stdio.h>

int main()
{
    char a;
    printf("my friend is:");
    scanf_s("%s", &a);
    printf("%s", &a);

    return 0;
}