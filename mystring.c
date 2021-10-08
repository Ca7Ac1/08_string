#include <stdio.h>
#include <stdlib.h>

#include "mystring.h"

int mystrlen(char *s)
{
	int size = 0;
	
	while (*s)
	{
		size++;
		s++;
	}
	
	return size;
}

char * mystrncpy(char *dest, char *source, int n)
{
	for (n = n - 1; n >= 0; n--)
	{
		dest[n] = source[n];
	}
	
	return dest;
}

char * mystrcat(char *dest, char *source)
{
	char *start = dest;
	
	while (*dest)
	{
		dest++;
	}
	
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	
	*dest = *source;
	return start;
}

int mystrcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{	
		s1++;
		s2++;
	}
	
	return (signed int) (*s1 - *s2);
}

char * mystrchr(char *s, char c)
{
	while (*s && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return s;
	}
	
	return '\0';
}
