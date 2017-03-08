/*
 *      读取员工信息
 * */
#include <stdio.h>
typedef struct
{
    int id;
    float salary;
    char name[10];
} person;
int main()
{
    int size = 0;
    person prsn = {0};
    FILE *p_file = fopen("person.bin", "rb");
    if (p_file)
    {
        while(1)
        {
            size = fread(&prsn, sizeof(person), 1, p_file);
            if (!size)
            {
                break;
            }
            printf("ID:%d\n", prsn.id);
            printf("工资:%g\n", prsn.salary);
            printf("姓名:%s\n", prsn.name);
        }
        fclose(p_file);
        p_file = NULL;
    }
    return 0;
}
