#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> //to access variable length argument
int add(int num, ...)
{
    int i, sum = 0;
    va_list args_List;
    va_start(args_List, num);
    for (i = 0; i < num; i++)
    {
        sum = sum + va_arg(args_List, int);
    }
    va_end(args_List);
    return sum;
}
int main(void)
{
    // va_list ap;
    // holds information about variable argumnets//
    // va_start: maro must be called before accssing variable argument list;
    // va_arg(); retrieve the present arguent from the va_list type variable and increment it.
    // va_end():
    // executed before the function returns whenever va_start has been previously used in that function
    printf("\nResult %d", add(2, 3, 4));
    printf("\nResult %d", add(3, 3, 3, 4));
    printf("\nResult %d", add(4, 2, 3, 4, 5));
    printf("\nResult %d", add(2, 5, 1, 3, 4, 5));
}