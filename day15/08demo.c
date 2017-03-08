/*
 *      编写程序从person.bin文件里得到所有人员的ID
 * */
#include <stdio.h>

int main()
{
    int id = 0;
    int size = 0;
    FILE *p_file = fopen("person.bin", "r");
    if (p_file)
    {
        while(1)
        {
            size = fread(&id, sizeof(int), 1, p_file);
            if (!size)
            {
                break;
            }
            printf("ID:%d\n", id);
            //sizeof(person) - sizeof(int)
            fseek(p_file, 20 - 4, SEEK_CUR);
        }
        fclose(p_file);
        p_file = NULL;
    }
}
