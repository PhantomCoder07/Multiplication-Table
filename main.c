// for loop
#include <stdio.h>
int main()
{
    int i,n,r,multi=1;
    printf("Enter multiplied number: ");
    scanf("%d", &n);
    printf ("Enter multiplier range: ");
    scanf ("%d",&r);
    printf("Multiplication Table:\n");
    for (i=1; i<=r; ++i)
    {
        multi=n*i;
        printf("%d X %d = %d \n",n,i,multi);
    }
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i=1,n,r,multi=1;
    printf("Enter multiplied number: ");
    scanf("%d", &n);
    printf ("Enter multiplier range: ");
    scanf ("%d",&r);
    printf("Multiplication Table:\n");
    while (i<=r)
    {
        multi=n*i;
        printf("%d X %d = %d \n",n,i,multi);
        i++;
    }
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i=1,n,r,multi=1;
    printf("Enter multiplied number: ");
    scanf("%d", &n);
    printf ("Enter multiplier range: ");
    scanf ("%d",&r);
    printf("Multiplication Table:\n");
    do
    {
        multi=n*i;
        printf("%d X %d = %d \n",n,i,multi);
        i++;
    }
    while (i<=r);
    return 0;
}
