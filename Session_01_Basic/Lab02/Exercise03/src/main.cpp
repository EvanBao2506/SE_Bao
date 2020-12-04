/**
 * Created by Bao Dinh at 03/12/2020
 * Define Pointer
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
int main()
{
    char c = 'c';
    printf("%c -> %d \n", c, c);

    char arr[] = {'h', 'e', 'l', 'l', 'o'};
    int n = 5;
    for(int i = 0; i < n; i++)
        printf("%c", arr[i]);
    printf("\n------------\n");
    printf("%s\n", arr);

    char s[MAX];
    strcpy(s, "hello");
    printf("\n------------\n");
    printf("%s\n", s);
    printf("length of arr = %d\n", strlen(arr));
    printf("length of s = %d\n", strlen(s));

    char *str = (char*)malloc(MAX);
    strcpy(str, s);
    printf("\n------------\n");
    printf("str = %s\n", str);

    strcat(str, " Bao DINH");
    printf("\n------------\n");.
    printf("str = %s - %d \n", str, strlen(str));

    char *str_1 = (char*)malloc(10);
    strncpy(str_1, str, 10);
    printf("str_1 = %s \n", str_1);

    str_1 = (char*)realloc(str_1, strlen(str));
    strcpy(str_1, str);
    printf("str_1 = %s\n", str_1);
    return 0;
}