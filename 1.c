#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int *add=(int *)calloc(5,sizeof(int));
    if(add==NULL)
    {
        printf("operation failed");
    }

    for(i=0;i<5;i++)
    {
        add[i]=i+1;
        printf("%d\n",add[i]);
    }
}    