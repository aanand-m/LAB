#include <stdio.h>

void TOH(int n, char S, char T, char D)
{
    if (n == 1)
        printf("move disk 1 from %c to %c \n", S, D);
    else
    {
        TOH(n - 1, S, D, T);
        printf("move disk %d from %c to %c\n", n, S, D);
        TOH(n - 1, T, S, D);
    }
}

int main()
{
    int n;
    printf("Enter no of disks: ");
    scanf("%d", &n);
    TOH(n, 'S', 'T', 'D');
    return 0;
}
