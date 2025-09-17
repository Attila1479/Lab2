#include <stdio.h>
int main()
{
    int l;
    printf("Length of the line? ");
    scanf("%d",&l);
    printf("+");
    for(int i=1; i<=l; i++)
    {
        printf("-");
    }
    printf("+");

    return 0;
}