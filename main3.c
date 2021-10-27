#include <stdio.h>
     
int getMissingNo(int a[], int n)
{
    int i, total;
    total = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
        total -= a[i];
    return total;
}
 

int main()
{
    int a[] = { 1, 2, 3, 4, 6,7};
    int miss = getMissingNo(a,5);
    int b  = miss+1;
    
    printf ("%d\n",b);
    
}





