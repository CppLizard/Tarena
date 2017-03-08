/*
 *      编写程序从键盘上得到一个人的年龄，身高，姓名
 *      然后把结果显示在屏幕上
 * */
#include <stdio.h>

typedef struct
{
    int age;
    float height;
    char name[10];
} person;
int main()
{
    person prsn;
    person prsn1 = {0};
    person *p_person = NULL;
    printf("请输入年龄:");
    scanf("%d", &(prsn.age));
    printf("请输入身高:");
    scanf("%g", &(prsn.height));
    printf("请输入姓名:");
    scanf("%*[^\n]");
    scanf("%*c");
    fgets(prsn.name, 10, stdin);
    printf("年龄:%d\n", prsn.age);
    printf("身高:%g\n", prsn.height);
    printf("姓名:%s\n", prsn.name);
    prsn1 = prsn;
    printf("年龄:%d\n", prsn1.age);
    printf("身高:%g\n", prsn1.height);
    printf("姓名:%s\n", prsn1.name);
    p_person = &prsn;
    printf("年龄:%d\n", p_person->age);
    printf("身高:%g\n", p_person->height);
    printf("姓名:%s\n", p_person->name);
    return 0;
}
