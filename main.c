/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
typedef struct abc
{
    int i;
    int *p;
}ABC;

int main()
{
     ABC prb;
     ABC *ref;
    
    ref = (ABC *)malloc(sizeof(ABC));
    ref->p = (int *)malloc(sizeof(int));
    
     (*ref).i = 21;
     *ref->p = 22;
    
    printf("Hello World %d",*ref->p);

    return 0;
}

/*
struct foo
{
  int x;
  float y;
};
int main()
{
struct foo var;
struct foo* pvar;
pvar = malloc(sizeof(struct foo));

var.x = 5;
(&var)->y = 14.3;
pvar->y = 22.4;
(*pvar).x = 6;

printf("Hello World ");


return 0;
}
*/


