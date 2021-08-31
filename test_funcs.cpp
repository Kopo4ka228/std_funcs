#include <TXLib.h>
#include "my_funcs().h"

int main()
{
    FILE* fp = fopen("example.txt", "r");
    char s[50] = "123";
    my_fgets(s, 50, fp);
    puts(s);
    return 0;
}



