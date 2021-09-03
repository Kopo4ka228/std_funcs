
#include <stdio.h>

//-----------------------------------------------------------------------------

char my_puts (char arr[]);
char* my_strchr (char arr[], char ch);
int my_strlen (char* pt);
char* my_strcpy (char* source, char* dest);
char* my_strncpy (char* source, char* dest, int length);
char* my_strcat (char* dest, char* source);
char* my_strncat (char* dest, char* source, int length);
char* my_fgets (char* str, int length, FILE* stream);
char* my_strdup (char* source);

//strdup   getline

//-----------------------------------------------------------------------------

char my_puts (char arr[])  //TODO
    {
    if (arr[0] != '\0')
        {
        int i = 0;

        while (arr[i] != '\0')
            {
            putchar (arr[i]);
            i++;
            }

        return '\n';
        }

    else
        return EOF;
    }

//-----------------------------------------------------------------------------

char* my_strchr (char arr[], char ch)
    {
    for (int i = 0; arr[i] != '\0'; i++)
        if (arr[i] == ch)
            return &arr[i];

    return nullptr;
    }

//-----------------------------------------------------------------------------

int my_strlen (char* pt)
    {
    int i = 0;

    while (*pt != '\0')
        {
        i++;
        pt++;
        }

    return i;
    }

//-----------------------------------------------------------------------------

char* my_strcpy (char* source, char* dest)
    {
    char* start = dest;

    while (*source != '\0')
        {
        *dest = *source++;
        source++;
        dest++;
        }

    *dest = '\0';
    return start;
    }

//-----------------------------------------------------------------------------

char* my_strncpy (char* source, char* dest, int length)//UnitTest для 0,1,2 length
    {
    int i = 1;
    char* start = dest;

    while (*source != '\0')
        {
        if (i > length) break;

        *dest = *source;
        source++;
        dest++;
        i++;
        }

    *dest = '\0';
    return start;
    }

//-----------------------------------------------------------------------------

char* my_strcat (char* dest, char* source)
    {
    char* start = dest;

    while (*dest != '\0')
        {
        dest++;
        }

    while (*source != '\0')
        {
        *dest = *source;
        source++;
        dest++;
        }

    *dest = '\0';
    return start;
    }

//-----------------------------------------------------------------------------

char* my_strncat (char* dest, char* source, int length)
    {
    char* start = dest;

    while (*dest != '\0')
        {
        dest++;
        }


    int count = 0;

    while (*source != '\0')
        {
        *dest = *source;
        source++;
        dest++;
        count++;

        if (length == count)
            {
            *dest = '\0';
            return start;
            }
        }

    *dest = '\0';
    return start;
    }

//-----------------------------------------------------------------------------

char* my_fgets (char* str, int length, FILE* stream)
    {
    int count = 0;
    char* start = str;
    char ch = getc (stream);

    while (ch != '\n')
        {
        *str = ch;
        str++;
        count++;
        ch = getc (stream);

        if ( (length - 1) >= count)
            {
                break;
            }
        }

    *str = '\0';
    return start;
    }

//-----------------------------------------------------------------------------

char* my_strdup (char* source)
    {
    assert (source != nullptr);

    int len = my_strlen (source);
    char* new_string_from_senya = (char*) calloc (len + 1, sizeof (char));

    if

    if (new_string_from_senya == nullptr)
            {
            return nullptr;
            }

    my_strcpy (source, new_string_from_senya);

    return new_string_from_senya;

    }


