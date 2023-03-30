#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to be modified
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *s)
{
    int i;

    i = 0;

    /* Capitalize first letter if it's a lowercase letter */
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] -= 32;

    /* Iterate through the string */
    while (s[i] != '\0')
    {
        /* Check for word separators */
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
            s[i] == ',' || s[i] == ';' || s[i] == '.' ||
            s[i] == '!' || s[i] == '?' || s[i] == '\"' ||
            s[i] == '(' || s[i] == ')' || s[i] == '{' ||
            s[i] == '}')
        {
            /* Capitalize next letter if it's a lowercase letter */
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1] -= 32;
        }

        /* Move to the next character */
        i++;
    }

    /* Return the modified string */
    return (s);
}
