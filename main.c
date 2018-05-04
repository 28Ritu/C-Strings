#include<stdio.h>

#include "str.h"

int main(int argc, char *argv[])
{
	char a[50] = "  Hello", b[50] = "  World  ";
	printf("Result = %d \n", my_strncasecmp(a, b, 10));
	printf("Result = %s \n", strcpy(a, b));
	printf("Result = %s \n", my_strncpy(a, b, 10));
	printf("Result = %s \n", strcat(a, b));
	printf("Result = %s \n", my_strncat(a, b, 10));
	printf("Result = %d \n", strcmp(a, b));
	printf("Result = %d \n", my_strncmp(a, b, 10));
	printf("Result = %s \n", my_strchr(a, 'l'));
	printf("Result = %s \n", strchrnul(a, 'l'));
	printf("Result = %s \n", strrchr(a, 'l'));
	printf("Result = %s \n", skip_spaces(a));
	printf("Result = %s \n", strim(b));
	printf("Result = %d \n", my_strlen(a));
	printf("Result = %d \n", strnlen(a, 4));
	printf("Result = %s \n", my_memset(b, '.', 2));
	return 0;
}
