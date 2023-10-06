/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:06:42 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/05 21:14:10 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/libft.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <limits.h>
int main(void)
{
	printf("----------ft_isalpha Testing----------\n");
	printf("\"The values returned are nonzero if the character c falls into the tested  class,  and zero if not.\"\n");
	printf("Original (argumento = 'a'): %i\n", isalpha('a'));
	printf("Replica (argumento = 'a'): %i\n", ft_isalpha('a'));
	printf("Original (argumento = '0'): %i\n", isalpha('0'));
	printf("Replica (argumento = '0'): %i\n", ft_isalpha('0'));
	printf("Original (argumento = 'Z'): %i\n", isalpha('Z'));
	printf("Replica (argumento = 'Z'): %i\n", ft_isalpha('Z'));

	printf("\n----------ft_isdigit Testing----------\n");
	printf("\"The values returned are nonzero if the character c falls into the tested  class,  and zero if not.\"\n");
	printf("Original (argumento = 'a'): %i\n", isdigit('a'));
	printf("Replica (argumento = 'a'): %i\n", ft_isdigit('a'));
	printf("Original (argumento = '0'): %i\n", isdigit('0'));
	printf("Replica (argumento = '0'): %i\n", ft_isdigit('0'));
	printf("Original (argumento = 'Z'): %i\n", isdigit('Z'));
	printf("Replica (argumento = 'Z'): %i\n", ft_isdigit('Z'));
	printf("Original (argumento = '9'): %i\n", isdigit('9'));
	printf("Replica (argumento = '9'): %i\n", ft_isdigit('9'));

	printf("\n----------ft_isalnum Testing----------\n");
	printf("\"The values returned are nonzero if the character c falls into the tested  class,  and zero if not.\"\n");
	printf("Original (argumento = 'a'): %i\n", isalnum('a'));
	printf("Replica (argumento = 'a'): %i\n", ft_isalnum('a'));
	printf("Original (argumento = '0'): %i\n", isalnum('0'));
	printf("Replica (argumento = '0'): %i\n", ft_isalnum('0'));
	printf("Original (argumento = 'Z'): %i\n", isalnum('Z'));
	printf("Replica (argumento = 'Z'): %i\n", ft_isalnum('Z'));
	printf("Original (argumento = '9'): %i\n", isalnum('9'));
	printf("Replica (argumento = '9'): %i\n", ft_isalnum('9'));
	printf("Original (argumento = '-'): %i\n", isalnum('-'));
	printf("Replica (argumento = '-'): %i\n", ft_isalnum('-'));
	printf("Original (argumento = '['): %i\n", isalnum('['));
	printf("Replica (argumento = '['): %i\n", ft_isalnum('['));

	printf("\n----------ft_isascii Testing----------\n");
	printf("\"The values returned are nonzero if the character c falls into the tested  class,  and zero if not.\"\n");
	printf("Original (argumento = 0): %i\n", isascii(0));
	printf("Replica (argumento = 0): %i\n", ft_isascii(0));
	printf("Original (argumento = -1): %i\n", isascii(-1));
	printf("Replica (argumento = -1): %i\n", ft_isascii(-1));
	printf("Original (argumento = '500'): %i\n", isascii(500));
	printf("Replica (argumento = '500'): %i\n", ft_isascii(500));
	printf("Original (argumento = 127): %i\n", isascii(127));
	printf("Replica (argumento = 127): %i\n", ft_isascii(127));
	printf("Original (argumento = 128): %i\n", isascii(128));
	printf("Replica (argumento = 128): %i\n", ft_isascii(128));

	printf("\n----------ft_isprint Testing----------\n");
	printf("\"The values returned are nonzero if the character c falls into the tested  class,  and zero if not.\"\n");
	printf("Original (argumento = 0): %i\n", isprint(0));
	printf("Replica (argumento = 0): %i\n", ft_isprint(0));
	printf("Original (argumento = '\\n'): %i\n", isprint('\n'));
	printf("Replica (argumento = '\\n'): %i\n", ft_isprint('\n'));
	printf("Original (argumento = 'a'): %i\n", isprint('a'));
	printf("Replica (argumento = 'a'): %i\n", ft_isprint('a'));
	printf("Original (argumento = ']'): %i\n", isprint(']'));
	printf("Replica (argumento = ']'): %i\n", ft_isprint(']'));


	printf("\n----------ft_strlen Testing----------\n");
	printf("\"The strlen() function returns the number of bytes in the string pointed to by s.\"\n");
	printf("Original (argumento = \"12345\"): %lu\n", strlen("12345"));
	printf("Replica (argumento = \"12345\"): %lu\n", ft_strlen("12345"));
	printf("Original (argumento = \"12345678\"): %lu\n", strlen("12345678"));
	printf("Replica (argumento = \"12345678\"): %lu\n", ft_strlen("12345678"));
	printf("Original (argumento = \"\"): %lu\n", strlen(""));
	printf("Replica (argumento = \"\"): %lu\n", ft_strlen(""));


	printf("\n----------ft_memset Testing----------\n");
	printf("\"The memset() function fills the first n bytes of the memory area pointed to by s withthe constant byte c.\"\n");

	printf("\n----------ft_bzero Testing----------\n");
	printf("\"The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\\0') to that area.\"\n");

	printf("\n----------ft_memcpy Testing----------\n");
	printf("\"The  memcpy()  function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.\"\n");

	printf("\n----------ft_memove Testing----------\n");
	printf("\"The  memmove() function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in  src  are  first copied  into  a  temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.\"\n");

	printf("\n----------ft_strlcpy Testing----------\n");
	printf("\"?\"\n");

	printf("\n----------ft_strlcat Testing----------\n");
	printf("\"?\"\n");

	printf("\n----------ft_toupper Testing----------\n");
	printf("\"These functions convert lowercase letters to uppercase, and vice versa. If  c is a lowercase letter, toupper() returns its uppercase equivalent, if an upper‐case representation exists in the current locale.   Otherwise,  it  returns  c.\"\n");
	printf("Original (argumento = 'a'): %c\n", toupper('a'));
	printf("Replica (argumento = 'a'): %c\n", ft_toupper('a'));
	printf("Original (argumento = 'z'): %c\n", toupper('z'));
	printf("Replica (argumento = 'z'): %c\n", ft_toupper('z'));
	printf("Original (argumento = 'A'): %c\n", toupper('A'));
	printf("Replica (argumento = 'A'): %c\n", ft_toupper('A'));
	printf("Original (argumento = 'Z'): %c\n", toupper('A'));
	printf("Replica (argumento = 'Z'): %c\n", ft_toupper('A'));
	printf("Original (argumento = '1'): %c\n", toupper('1'));
	printf("Replica (argumento = '1'): %c\n", ft_toupper('1'));

	printf("\n----------ft_tolower Testing----------\n");
	printf("\"These functions convert lowercase letters to uppercase, and vice versa. If c is an uppercase letter, tolower() returns its lowercase equivalent, if a  lower‐case  representation  exists  in  the  current locale.  Otherwise, it returns c.\"\n");
	printf("Original (argumento = 'A'): %c\n", tolower('a'));
	printf("Replica (argumento = 'A'): %c\n", ft_tolower('a'));
	printf("Original (argumento = 'Z'): %c\n", tolower('z'));
	printf("Replica (argumento = 'Z'): %c\n", ft_tolower('z'));
	printf("Original (argumento = 'a'): %c\n", tolower('A'));
	printf("Replica (argumento = 'a'): %c\n", ft_tolower('A'));
	printf("Original (argumento = 'z'): %c\n", tolower('A'));
	printf("Replica (argumento = 'z'): %c\n", ft_tolower('A'));
	printf("Original (argumento = '1'): %c\n", tolower('1'));
	printf("Replica (argumento = '1'): %c\n", ft_tolower('1'));

	printf("\n----------ft_strchr Testing----------\n");
	printf("\"The strchr() function returns a pointer to the first occurrence of the character c in the string s.\"\n");
	printf("Original (argumentos = \"abcdefghijkl\", 'g'): ");
	char *original = strchr("abcdefghijkl", 'g');
	char *replica = ft_strchr("abcdefghijkl", 'g');
	int count = 0;
	while (original[count])
	{
		printf("%c", original[count]);
		count++;
	}
	printf("\n");
	printf("Replica (argumentos = \"abcdefghijkl\", 'g'): ");
	count = 0;
	while (replica[count])
	{
		printf("%c", replica[count]);
		count++;
	}
	printf("\n");
	printf("Original (argumentos = \"pastel com caldo de cana\", 'c'): ");
	original = strchr("pastel com caldo de cana", 'c');
	replica = ft_strchr("pastel com caldo de cana", 'c');
	count = 0;
	while (original[count])
	{
		printf("%c", original[count]);
		count++;
	}
	printf("\n");
	printf("Replica (argumentos = \"pastel com caldo de cana\", 'c'): ");
	count = 0;
	while (replica[count])
	{
		printf("%c", replica[count]);
		count++;
	}
	printf("\n");


	printf("\n----------ft_strrchr Testing----------\n");
	printf("\"The strrchr() function returns a pointer to the last occurrence of the character c in the string s.\"\n");
	printf("Original (argumentos = \"abcdefghijkl\", 'g'): ");
	original = strrchr("abcdefghijkl", 'g');
	replica = ft_strrchr("abcdefghijkl", 'g');
	count = 0;
	while (original[count])
	{
		printf("%c", original[count]);
		count++;
	}
	printf("\n");
	printf("Replica (argumentos = \"abcdefghijkl\", 'g'): ");
	count = 0;
	while (replica[count])
	{
		printf("%c", replica[count]);
		count++;
	}
	printf("\n");
	printf("Original (argumentos = \"pastel com caldo de cana\", 'c'): ");
	original = strrchr("pastel com caldo de cana", 'c');
	replica = ft_strrchr("pastel com caldo de cana", 'c');
	count = 0;
	while (original[count])
	{
		printf("%c", original[count]);
		count++;
	}
	printf("\n");
	printf("Replica (argumentos = \"pastel com caldo de cana\", 'c'): ");
	count = 0;
	while (replica[count])
	{
		printf("%c", replica[count]);
		count++;
	}

	printf("\n----------ft_strncmp Testing----------\n");
	printf("\"strcmp() returns an integer indicating the result of the comparison, as follows:\n• 0, if the s1 and s2 are equal;\n• a negative value if s1 is less than s2;\n• a positive value if s1 is greater than s2.\nThe  strncmp()  function  is  similar,  except it compares only the first (at most) n\nbytes of s1 and s2.\"\n");
	printf("Original (argumentos = \"drago\", \"drago\", 5): %i\n", strncmp("drago", "drago", 5));
	printf("Replica (argumentos = \"drago\", \"drago\", 5): %i\n", ft_strncmp("drago", "drago", 5));
	printf("Original (argumentos = \"dragO\", \"drago\", 5): %i\n", strncmp("dragO", "drago", 5));
	printf("Replica (argumentos = \"dragO\", \"drago\", 5): %i\n", ft_strncmp("dragO", "drago", 5));
	printf("Original (argumentos = \"dragO\", \"drago\", 4): %i\n", strncmp("dragO", "drago", 4));
	printf("Replica (argumentos = \"dragO\", \"drago\", 4): %i\n", ft_strncmp("dragO", "drago", 4));
	printf("Original (argumentos = \"\", \"drago\", 5): %i\n", strncmp("", "drago", 4));
	printf("Replica (argumentos = \"\", \"drago\", 5): %i\n", ft_strncmp("", "drago", 4));
	printf("Original (argumentos = \"\", \"drago\", 0): %i\n", strncmp("", "drago", 0));
	printf("Replica (argumentos = \"\", \"drago\", 0): %i\n", ft_strncmp("", "drago", 0));
	
	printf("\n----------ft_memchr Testing----------\n");
	printf("\"The  memchr()  function  scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.\"\n");

	printf("\n----------ft_memcmp Testing----------\n");
	printf("\"The memcmp() function returns an integer less than, equal to, or greater than zero if the  first  n  bytes  of  s1 is found, respectively, to be less than, to match, or begreater than the first n bytes of s2.\n\nFor a nonzero return value, the sign is determined by the sign of the difference  between  the  first  pair of bytes (interpreted as unsigned char) that differ in s1 and s2.\n\nIf n is zero, the return value is zero.\"\n");

	printf("\n----------ft_strnstr Testing----------\n");
	printf("\"?\"\n");

	printf("\n----------ft_atoi Testing----------\n");
	printf("\"The  atoi() function converts the initial portion of the string pointed to by nptr to int.  The behavior is the same as strtol(nptr, NULL, 10);\"\n");
	printf("Original (argumento = \"12345\"): %i\n", atoi("12345"));
	printf("Replica (argumento = \"12345\"): %i\n", ft_atoi("12345"));
	printf("Original (argumento = \"+12345\"): %i\n", atoi("+12345"));
	printf("Replica (argumento = \"+12345\"): %i\n", ft_atoi("+12345"));
	printf("Original (argumento = \"       123f45\"): %i\n", atoi("       123f45"));
	printf("Replica (argumento = \"        123f45\"): %i\n", ft_atoi("       123f45"));
	printf("Original (argumento = \"       -123-45\"): %i\n", atoi("       -123-45"));
	printf("Replica (argumento = \"        -123-45\"): %i\n", ft_atoi("       -123-45"));
	printf("Original (argumento = \"       -+12345\"): %i\n", atoi("       -+12345"));
	printf("Replica (argumento = \"        -+12345\"): %i\n", ft_atoi("       -+12345"));
	printf("Original (argumento = \"       --12345\"): %i\n", atoi("       --12345"));
	printf("Replica (argumento = \"        --12345\"): %i\n", ft_atoi("       --12345"));

	printf("\n----------ft_calloc Testing----------\n");
	printf("\"The  calloc()  function  allocates  memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.  The memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().  If the multiplication of nmemb and size  would  result  in integer  overflow,  then  calloc()  returns an error.  By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated:\n\nmalloc(nmemb * size);\"\n");

	printf("\n----------ft_strdup Testing----------\n");
	printf("\"The  strdup()  function returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with malloc(3),  and  can  be  freed with free(3).\"\n");
	return 0;
}
