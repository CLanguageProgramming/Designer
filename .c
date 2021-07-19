#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number of rows >>");
    scanf("%d", &a);
    getchar();
    printf("Enter Design >>");
    char d;
    scanf("%c", &d);
    for (int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c", d);
        }
        printf("\n");
    }
    getchar();
    getchar();
}
