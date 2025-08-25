// for loop
#include <stdio.h>
int main()
{
    int i,j,r,num,multi=1;
    printf ("Enter the multiplied limit: ");
    scanf ("%d",&num);
    printf ("Enter the multiplier limit: ");
    scanf ("%d",&r);
    printf ("Multiplication Tables: \n");
    for (i=1; i<=num; i++)
    {
        for (j=1; j<=r; j++)
        {
            multi=j*i;
            printf ("%d X %d = %d\n",i,j,multi);
        }
        printf ("\n");
    }
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i,j,r,num,multi=1;
    printf ("Enter the multiplied limit: ");
    scanf ("%d",&num);
    printf ("Enter the multiplier limit: ");
    scanf ("%d",&r);
    printf ("Multiplication Tables: \n");
    i=1;
    while (i<=num)
    {
        j=1;
        while (j<=r)
        {
            multi=j*i;
            printf ("%d X %d = %d\n",i,j,multi);
            j++;
        }
        i++;
        printf ("\n");
    }
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i,j,r,num,multi=1;
    printf ("Enter the multiplied limit: ");
    scanf ("%d",&num);
    printf ("Enter the multiplier limit: ");
    scanf ("%d",&r);
    printf ("Multiplication Tables: \n");
    i=1;
    do
    {
        j=1;
        do
        {
            multi=j*i;
            printf ("%d X %d = %d\n",i,j,multi);
            j++;
        } while (j<=r);
        i++;
        printf ("\n");
    } while (i<=num);
    return 0;
}
