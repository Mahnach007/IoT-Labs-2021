#include <stdio.h>
     
int getMissingNumber(int a[], int n)// лтримати пропущене число
{
    int i, total;//total-формула суми
    total = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
        total -= a[i];
    return total;
}
 

int main()
{
    int a[] = { 1, 2, 3, 4, 6,7};
    int miss = getMissingNumber(a,5);
    int answear  = miss+1;
    
    printf ("%d\n",answear);
    
}





