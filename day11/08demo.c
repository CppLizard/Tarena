/*  
 *      字符指针数组演示
 * */
#include <stdio.h>

int main()
{
    char *strs[] = {"abc", "def", "pqr", "vbn", "xyz"};
    char strs1[][10] = {"abc", "def", "pqr", "vbn", "xyz"};
    int num = 0;
    for (num = 0; num < 5; num++)
    {
        printf("%s\n", strs[num]);
        printf("%s\n", strs1[num]);
    }
    return 0;
}
