/*
 *      字符串演示
 * */
#include <stdio.h>

int main()
{
    char str[] = "abcdef";
    printf("%p\n", "abc");
    printf("%p\n", "abc");
    printf("%p\n", "ab""c");
    printf("%c\n", *"abc");
    printf("sizeof(str) = %d\n", sizeof(str));
    printf("%s\n", str);
    //*"abc" = 'r';     字符串字面值不可以改变  (编译出错)
    return 0;
}
