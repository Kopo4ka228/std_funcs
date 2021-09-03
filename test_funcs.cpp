#include <TXLib.h>
#include "my_funcs().h"

int main()
{
    char s[] = "mipt12345";
    char* ptr = my_strdup(s);
    puts(ptr);
    free(ptr);
    return 0;
}



