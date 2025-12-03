#include <stdio.h>
int main()
{

    int n1 = 0;
    int n2 = 1;
    int n3;
    int n;
    // taking input from the user to run the fibonacci sequence upto
    printf("Enter the value : ");
    scanf("%d", &n);
     printf("%d\n", n1);
    for (int i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        // printing each value that n3 will get
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}