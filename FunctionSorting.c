// qsort(array,number,size,function)
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int compare(const void *num1, const void *num2)
{
    char a = *(char *)num1;
    char b = *(char *)num2;
    if (a > b)
    {
        return 1;
    }
    else if (a < b)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int arr[50], n, i;
    printf("ENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d", &n);
    printf("\nENTER ELEMENTS INTO THE ARRAY: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    printf("\nThe sorted array: ");
    printf("\n[");
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", arr[i]);
        }
        printf("%d", arr[i]);
    }
    printf("]");
}