/*
 *      编写程序从键盘得到多个人员信息并把它们都记录到文件里
 *      每个人员信息包括整数类型的id，float类型的工资和姓名
 *      人员信息个数不确定，文件内容可以追加
 *      一个程序把人员信息记录到文件里
 *      另外一个程序从文件里得到人员信息并显示在屏幕上
 * */
#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    float salary;
    char name[10];
} person;
int main()
{
    person prsn = {0};
    int choice = 0;
    FILE *p_file = fopen("person.bin", "ab");
    if (p_file)
    {
        while(1)
        {
            printf("请输入ID:");
            scanf("%d", &(prsn.id));
            printf("请输入工资:");
            scanf("%g", &(prsn.salary));
            scanf("%*[^\n]");
            scanf("%*c");
            printf("请输入姓名:");
            fgets(prsn.name, 10, stdin);
            if (strlen(prsn.name) == 9 && prsn.name[8] != '\n')
            {
                scanf("%*[^\n]");
                scanf("%*c");
            }
            fwrite(&prsn, sizeof(person), 1, p_file);
            printf("是否需要输入下一个人员信息?\n0表示不需要,1表示需要!\n");
            scanf("%d", &choice);
            if (!choice)
            {
                break;
            }
        }
        fclose(p_file);
        p_file = NULL;
    }
    return 0;
}
