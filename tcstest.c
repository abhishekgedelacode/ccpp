#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void myfunc(char **param)
{
    ++param;
}
int main()
{
    char *string = (char *)malloc(64);
    strcpy(string, "hello_World");
    myfunc(&string);
    myfunc(&string);
    printf("%s\n", string);
    // ignore memory leak for sake of quiz
    return 0;
}