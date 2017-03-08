#include <stdio.h>

int main()
{
    int i = 10;
    int *p = &i;
    const int *p;   //const *p   *p的值不能变，p指向的地址可以变
    int const *p;   //const *p   *p的值不能便，p指向的地址可以变
    int* const p;   //* const p  p指向的地址不能便，*p的值可以变
    printf("i = %d\n", i);
    printf("&i = %p\n", &i);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    return 0;
}
