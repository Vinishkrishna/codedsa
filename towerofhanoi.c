#include <stdio.h>
void TOH(int n, char x, char y, char z) // source through destination of 
{
    if (n > 0)
    {
        TOH(n - 1, x, z, y);
        printf("\n Move disk %d from %c to %c",n, x, z);
        TOH(n - 1, y, x, z);
    }
}
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    TOH(n, 'A', 'B', 'C');
}