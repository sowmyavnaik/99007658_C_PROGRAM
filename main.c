/**
 * @file sum.h
 * @author sowmya
 * @brief Sum of Characters in a given name
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "sum.h"
int main()
{        
    int res=0;
    char name[100];
   
    printf("Enter a name: ");
    scanf("%s", name);
    res=sumhexa(name);
    printf("sum:%x",res);
    return 0;
}