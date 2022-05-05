/**
 * @file sum.c
 * @author sowmya
 * @brief Sum of Characters in a given name
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "sum.h"

int sumhexa(char name[])
{
    union Data d; 
    int sum=0;
    int i;
    
while(name[i]!='\0')
   {
       for(i=0;i<strlen(name);i++)
       {
            d.n=name[i];
            sum+=name[i];
            printf("%x\n",d.n);
       }
   }
    return sum;
}

