/*
 *      编写模拟登陆练习
 *      让用户输入用户名和密码
 *      程序检查用户名是不是admin，密码是不是123456
 *      如果是就说明登陆成功，否则登陆失败
 *      一共给用户三次机会，程序最后要给出登陆提示
 * */
#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0;
    char getname[10] = {0};
    for (num = 0; num < 3; num++)
    {
        printf("请输入用户名:");
        fgets(getname, 10, stdin);
        if (strlen(getname) == 9 && getname[8] != '\n')
        {
            scanf("%*[^\n]");
            scanf("%*c");
        }
        if (strcmp(getname, "admin\n"))
        {
            continue;
        }
        printf("请输入密码:");
        fgets(getname, 10, stdin);
        if (strlen(getname) == 9 && getname[8] != '\n')
        {
            scanf("%*[^\n]");
            scanf("%*c");
        }
        if (strcmp(getname, "123456\n"))
        {
            continue;
        }
        break;
    }
    if (num < 3)
    {
        printf("登陆成功!\n");
    }
    else
    {
        printf("登陆失败!\n");
    }
    return 0;
}
