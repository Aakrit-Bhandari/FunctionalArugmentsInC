#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int multi(int num, ...)
{
    int res = 1;
    va_list args_List;
    va_start(args_List, num);
    for (int i = 0; i < num; i++)
    {
        res = res * va_arg(args_List, int);
    }
    va_end(args_List);
    return res;
}

int main()
{
    printf("\nResult %d", multi(2, 3, 4));
    printf("\nResult %d", multi(3, 3, 4, 3));
    printf("\nResult %d", multi(4, 3, 2, 4, 4));
    printf("\nResult %d", multi(5, 1, 2, 5, 3, 4));
}