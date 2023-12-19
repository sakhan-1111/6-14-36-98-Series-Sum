#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i, n, s, r=0;
    printf("Enter nth term: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        s=pow(1,i)+pow(2,i)+pow(3,i);
        r=r+s;
        printf("%d", s);
        if(i<n)
        {
            printf("+");
        }
    }
    printf("=%d",r);

    return 0;
}
