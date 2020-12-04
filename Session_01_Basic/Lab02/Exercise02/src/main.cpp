/**
 * Created by Bao Dinh at 03/12/2020
 * Define Pointer
 **/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int main()
{
    int a[] = { 1, 2, 3, 4, 5};
    int n = 5;
    for(int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    

    printf("\n----------\n");

    int *p = (int*)malloc(5 * sizeof(int));
    for(int i = 0 ; i < n; i++)
        p[i] = i;

    for(int i = 0; i < n; i++)
        printf("%d\t", p[i]);
    printf("\n");

    p = (int*)realloc(p, 10);
    for(int i = 5; i < 10; i++)
        p[i] = i;

    for(int i = 0; i < 10; i++)
        printf("%d\t", p[i]);
    printf("\n");

    return 0;
}