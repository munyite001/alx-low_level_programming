#include "variadic_functions.h"
#include <stddef.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    print_all("cifs", 'A', 5, 5.3, NULL);
    print_all("cifs", 'A', 4, 3.2, "School");
    return (0);
}
