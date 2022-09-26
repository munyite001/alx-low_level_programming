#include "main.h"

/**
*_strstr - Locatesasubstring.
*@haystack: Thestringtobesearched.
*@needle: Thesubstringtobelocated.
*
*Return: Ifthesubstringislocated-apointertothebeginning
* of the located substring.
*If the sub string is not located-NULL.
*/

char *_strstr(char *haystack, char *needle)
{
	int index;
	
	if (*needle == 0)
        {
		return(haystack);
        }
        
        while ( *haystack)
        {
                index = 0;

                if (haystack[index] == needle[index])
                {
                        do
                        {
                                if (needle[index + 1] == '\0')
                                {
                                        return (haystack);
                                }
                        index++;

                        }
                        while (haystack[index] == needle[index]);
                }

                haystack++;
        }

	return ('\0');
}

