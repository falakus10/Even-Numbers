#include <stdio.h>
#include <stdarg.h>

void evenNumber(int arg_sayac, ...)
{
    int number = 0;
    int even = 0;
    va_list ap;
    va_start(ap, arg_sayac);

    for (int i = 1; i <= arg_sayac; i++)
    {
        if ((number = va_arg(ap, int)) % 2 == 0)
        {
            even = number;
            printf(" %d", even);
        }
    }
}
int main()
{
    printf("numbers : 14,18,51,6,27,3\n");
    int counter[6] = {14, 18, 51, 6, 27, 3};
    evenNumber(6, 14, 18, 51, 6, 27, 3);
    return 0;

}