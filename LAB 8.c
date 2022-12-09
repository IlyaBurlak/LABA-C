//
//  Lab_8.c
//  learning_C
//
//  Created by Илья Бурлак on 12.11.2022.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strlength(const char *myStr);
char *func(char *a, char *b);

int main(){
    char string1[10], string2[10];
    scanf("%s",&string1);
    scanf("%s",&string2);

    // 3
    int count_1 = 0;
    if (strlen(string1) == strlen(string2))
    {
        unsigned long extractedExpr = strlen(string1);
        for (int i = 0 ; i<= extractedExpr ; i++)
            if (string1[i] == string2[i])
                count_1 += 1;
            else{
                printf("Строки не равны\n");
                break;
            }
        if (count_1 == strlen(string1)){
            printf("Строки равны\n");
        }
    }
    else
    {
        printf("Строки не равны\n");
    }
    
    

    // 7

    printf("%d\n" , strlength(string1));
   
    
    // 9
    
    char *l = func(string1,string2);
    printf("%s\n" , l);

    // 11
    char *p;
    int count = 0;
        for ( p = string1; *p; ++p )
            if (strchr(string2, *p) ){
                count ++;
            }
            printf("%d\n", count);
    return 0;
}


int strlength(const char *myStr){
    int strlength = 0;
        while (myStr[strlength] != '\0'){
            putchar(myStr[strlength]);
            strlength++;
        }

    return strlength;
}

char *func(char *a, char *b) {
    char *res; int i = 0;
    res = malloc(strlen(a) + strlen(b) + 1);
    while (*a != '\0') {
        res[i] = *a;
        a++;
        i++;
    }

    while (*b != '\0') {
        res[i] = *b;
        b++;
        i++;
    }

    res[i] = '\0';
    return res;

}
