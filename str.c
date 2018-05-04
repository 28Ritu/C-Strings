#include <ctype.h>
#include <xlocale.h>
#include "str.h"

/* start implementing your functions here */


/* One is done for you */

int my_strncasecmp(const char *s1, const char *s2, int len)
{
	unsigned char c1, c2;

	if (!len)
		return 0;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		c1 = tolower(c1);
		c2 = tolower(c2);
		if (c1 != c2)
			break;
	} while (--len);
	return (int)c1 - (int)c2;
}
char *strcpy(char *dest, const char *src)
{
	int i=0;
	while(1)
	{
		dest[i]=src[i];
		if (dest[i]=='\0')
			break;		
		i++;
	}
	return dest;
}
char *my_strncpy(char *dest, const char *src, int count)
{
	int len, i;
	for (len=0; src[len]!='\0'; len++);
	if (len>=count)
	{
		for (i=0; i<count; i++)
		{
			dest[i]=src[i];
		}	
	}
	else 
	{
		for (i=0; i<len; i++)
		{
			dest[i]=src[i];
		}
		int j;
		for (j=0; j<count-len; i++, j++)
		{
			dest[i]='\0';
		}		
	}
	return dest;
}
char *strcat(char *dest, const char *src)
{
	int i, j;
   	for (i=0; dest[i]!='\0'; i++);
	for (j=0; src[j]!='\0'; j++)
	{
		dest[i+j]=src[j];
	}
	dest[i+j]='\0';
	return dest;
}
char *my_strncat(char *dest, const char *src, int count)
{
	int i, j, len;
   	for (i=0; dest[i]!='\0'; i++);
	for (len=0; src[len]!='\0'; len++);
	if (len>=count)
	{
		for (j=0; j<count; j++)
		{
			dest[i+j]=src[j];
		}
		dest[i+j]='\0';
	}
	else	
	{
		for (j=0; j<len; j++)
		{
			dest[i+j]=src[j];
		}
		for (; j<count; j++)
		{
			dest[i+j]='\0';
		}
	}
	return dest;
}
int strcmp(const char *cs, const char *ct)
{
	while(*cs && (*cs == *ct))
	{
	        cs++;
	        ct++;
	}
        return *(const unsigned char*)cs - *(const unsigned char*)ct;
}
int my_strncmp(const char *cs, const char *ct, int count)
{
	int i=1;
	while (*cs && (*cs == *ct))
	{
		if (i==count)
			break;
		cs++;
	        ct++;
		i++;
	}
	return *(const unsigned char*)cs - *(const unsigned char*)ct;
}
char *my_strchr(const char *s, int c)
{
	for (; *s != (char)c; ++s)
		if (*s == '\0')
			return;
	return (char *)s;
}
char *strchrnul(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	return (char *)s;
}
char *strrchr(const char *s, int c)
{
	const char* ret=0;
	do 
	{
        	if(*s == (char)c)
            		ret=s;
    	}while(*s++);
    	return (char*)ret;
}
char *strnchr(const char *s, int count, int c)
{
	int i=0, flag=0;
	while(*s)
	{
		if (i==count)
			break;
		if(*s == c)
		{
			flag=1;
			break;
		}
		s++;
		i++;
	}
	if (flag==0)
		return (char*)'\0';
	return (char*)s;
}
char *skip_spaces(const char *str)
{
        while (*str==' ' || *str=='\t' || *str=='\n')
	{
		*str++;
	}
	return (char*)str;	
}
char *strim(char *s)
{
	while (*s==' ' || *s=='\t' || *s=='\n')
	{
		*s++;
	}
	int length, c;
   	char *begin, *end, temp;
 
   	for (length=0; s[length]!='\0'; length++);
 
	begin = s;
        end = s;
 
	for ( c = 0 ; c < ( length - 1 ) ; c++ )
        end++;
	for ( c = 0 ; c < length/2 ; c++ ) 
	{        
		temp = *end;
      		*end = *begin;
      		*begin = temp;
 
      		begin++;
      		end--;
   	}
   	while (*s==' ' || *s=='\t' || *s=='\n')
	{
		*s++;
	}
	for (length=0; s[length]!='\0'; length++);
 
	begin = s;
        end = s;
 
	for ( c = 0 ; c < ( length - 1 ) ; c++ )
        end++;
	for ( c = 0 ; c < length/2 ; c++ ) 
	{        
		temp = *end;
      		*end = *begin;
      		*begin = temp;
 
      		begin++;
      		end--;
   	}
	return (char*)s;
}
int my_strlen(const char *s)
{
	int len;
	for (len=0; s[len]!='\0'; len++);
	return len;
}
int strnlen(const char *s, int count)
{
	int i;
	for (i=0; (i<count) && s[i]; ++i);
	return i;
}
void *my_memset(void *s, int c, int count)
{
	unsigned char *p=s;
	while(count--)
	{
		*p++=(unsigned char)c;
	}
	return p;
}
