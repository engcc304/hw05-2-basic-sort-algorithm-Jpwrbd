/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)

    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>
int main()
{
    int a1 = 0, a2 = 0, a3 = 0;
    printf("Input[1]: ");
    scanf("%d", &a1);
    printf("Input[2]: ");
    scanf("%d", &a2);
    printf("Input[3]: ");
    scanf("%d", &a3);
    printf("Output: ");
    if (a1 > a2 && a1 > a3)
    {
        printf("%d ", a1);
        if (a2 > a3)
            printf("%d %d ", a2, a3);
        else
            printf("%d %d ", a2, a3);
    }
    else if (a2 > a1 && a2 > a3)
    {
        printf("%d ", a2);
        if (a1 > a3)
            printf("%d %d ", a1, a3);
        else
            printf("%d %d ", a3, a1);
    }
    else if (a3 > a2 && a3 > a1)
    {
        printf("%d ", a3);
        if (a2 > a1)
            printf("%d %d ", a2, a1);
        else
            printf("%d %d ", a1, a2);
    }
    return 0;
}