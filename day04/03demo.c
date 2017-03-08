/*
 *      假设有三个变量gender,height和weight分别记录一个人的性别，身高和体重
 *      0代表女人，1代表男人
 *      男人身高减体重小于105算超重
 *      女人身高减体重小于110算超重
 *      要求编写逻辑表达式判断变量所代表的人是否超重
 *      (gender && (height - weight < 105)) || (!gender && (height - weight < 110))
 *      gender ? height - weight < 105 : height - weight < 110;
 */
#include <stdio.h>

int main()
{
    int gender = 0;
    int height = 0;
    int weight = 0;
    printf("请输入0或1（0代表女人，1代表男人）:");
    scanf("%d",&gender);
    printf("请输入身高:");
    scanf("%d",&height);
    printf("请输入体重:");
    scanf("%d",&weight);
    if((gender && (height - weight < 105)) || (!gender && (height - weight < 110)))
        printf("超重!\n");
    else
        printf("正常!\n");
    return 0;
}
