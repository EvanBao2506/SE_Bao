/**
 * Created by Bao Dinh at 03/12/2020
 * Define Pointer
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1;
    printf("n = %d \n", n);
    printf("&n = %d \n", &n);
    printf("\n------------------\n");

    int* p = (int*)malloc(sizeof(int));
    *p = 2;
    printf("p = %d \n", p);
    printf("&n = %d \n", &p);
    printf("*p = %d \n", *p);
    printf("&(*p) = %d \n", &(*p));

    return 0;
}