/*
 *      结构体演示
 * */
#include <stdio.h>

/*
struct person
{
    int age;
    float height;
    char name[10];
};
typedef struct person person;
*/
typedef struct person
{
    int age;
    float height;
    char name[10];
} sperson;
int main()
{
    //结构体变量声明
    //struct person prsn;
    sperson prsn1 = {24, 1.75f, "Lizard"};
    printf("年龄 : %d\n", prsn1.age);
    printf("身高 : %g\n", prsn1.height);
    printf("姓名 : %s\n", prsn1.name);
    return 0;
}
