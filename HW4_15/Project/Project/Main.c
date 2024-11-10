#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n1, n2, n3, n4, n5, a,flag=0;
    printf("請輸入5個整數\n");
    scanf_s("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    int n[5] = { n1,n2,n3,n4,n5 };
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (n[j] > n[j+1])
            {
                flag = 1;
                a = n[j];
                n[j] = n[j+1];
                n[j+1] = a;
            }
        }
        if (flag == 0)
        {
            break;
        }
        else
        {
            flag = 0;
        }
        printf("第%d輪排序: ", i);
        for (int k = 0; k < 5; k++)
                    printf("%d ", n[k]);
        printf("\n");
    }
    system("pause");
    return 0;
}