#include "ft_printf.h"

int main()
{
	int count;

    count = ft_printf("Hello %s my name is %s and I am %d old.\n", "World", "Lisa", 30);
	    ft_printf("The chars written are %d\n", count);

	count = ft_printf("Hello %c.\n", 'C');
	printf("Hello %c\n", 'C');

    count = printf("Hello %s my name is %s and I am %d old.\n", "World", "Lisa", 30);
   	printf("The chars written are %d\n", count);

    ft_printf("Testing large numbers: %d, %d\n", INT32_MIN, INT32_MAX);
	printf("Testing large numbers: %d, %d\n", INT32_MIN, INT32_MAX);
    ft_printf("Testing percent symbol: %%\n");
	printf("Testing percent symbol: %%\n");
    ft_printf("Testing base conversion: %d\n", -2147483648);
    printf("Testing base conversion: %ld\n", -2147483648);
	

	ft_printf("%p\n", "");
	printf("%p\n", "");

	int x = 42;
    int *ptr = &x;
    ft_printf("Pointer test: %p\n", ptr);  // Expect something like: Pointer test: 0x7ffee52a18cc
	printf("Pointer test: %p\n", ptr);  // Expect something like: Pointer test: 0x7ffee52a18cc

    // NULL pointer test
    ft_printf("Pointer test with NULL: %p\n", NULL);  // Expect: Pointer test with NULL: (nil)
	printf("Pointer test with NULL: %p\n", NULL);  // Expect: Pointer test with NULL: (nil)

    // Uppercase hexadecimal test (should print uppercase hex)
    unsigned int num1 = 255;
    ft_printf("Uppercase hexadecimal: %X\n", num1);  // Expect: Uppercase hexadecimal: FF
	printf("Uppercase hexadecimal: %X\n", num1);  // Expect: Uppercase hexadecimal: FF

    // Lowercase hexadecimal test (should print lowercase hex)
    unsigned int num2 = 255;
    ft_printf("Lowercase hexadecimal: %x\n", num2);  // Expect: Lowercase hexadecimal: ff
	printf("Lowercase hexadecimal: %x\n", num2);  // Expect: Lowercase hexadecimal: ff

    // Unsigned integer test (should print unsigned integer in decimal)
    unsigned int num3 = 4294967295;  // Max value for unsigned int
    ft_printf("Unsigned integer test: %u\n", num3);  // Expect: Unsigned integer test: 4294967295
	printf("Unsigned integer test: %u\n", num3);  // Expect: Unsigned integer test: 4294967295

	ft_printf(" %u\n ", 0);
	printf(" %u\n ", 0);
	ft_printf(" %u\n ", 99);
	printf(" %u\n ", 99);

    ft_printf("%p %p\n", (void *)LONG_MIN, (void *)LONG_MAX);  // Use (void *) to cast the values to pointers
    printf("%p %p\n", (void *)LONG_MIN, (void *)LONG_MAX);  // Use (void *) to cast the values to pointers

    int result1 = ft_printf(NULL);
    int result2 = printf(NULL);

    printf("ft_printf returned: %d\n", result1);
    printf("printf returned: %d\n", result2);
    return 0;
}