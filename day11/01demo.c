/*
 *      字符串演示
 * */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "abc";
    printf("str = %s\n", str);
    printf("strlen(str) = %d\n", strlen(str));
    printf("sizeof(str) = %d\n", sizeof(str));
    strcat(str, "def");
    printf("str = %s\n", str);
    strncat(str, "xyzpqr", 3);
    printf("str = %s\n", str);
    printf("%s和%s的比较结果:%d\n", "abc", "abcd", strcmp("abc", "abcd"));
    printf("%s和%s的前2个字符比较结果:%d\n", "abc", "abcd", strncmp("abc", "abcd", 2));
    printf("strcpy(str, 'xyz') = %s\n", strcpy(str, "xyz"));
    printf("strcpy(str, 'xyz', 2) = %s\n", strncpy(str, "abc", 2));
    printf("memset(str, 'h', 9) = %s\n", memset(str, 'h', 9));
    printf("strstr('abcdefghijk', 'def') = %s\n", strstr("abidcdefdefgdhijk", "def"));
    return 0;
}
