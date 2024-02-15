#include <stdio.h>
#include <stdlib.h>
#define ALLOC_MEMORY 5
int main()
{
    int loop = 0;
    int *ptr = malloc(ALLOC_MEMORY * sizeof(int));
    if (ptr == NULL)
    {
        perror("fail to allocate memory");
        return -1;
    }
    for (loop = 0; loop < ALLOC_MEMORY; ++loop)
    {
        *(ptr + loop) = loop;
    }
    printf("%d", *ptr++);
    printf("%d", (*ptr)++);
    printf("%d", *ptr);
    printf("%d", *++ptr);
    printf("%d", ++*ptr);
    free(ptr);
    return 0;
}