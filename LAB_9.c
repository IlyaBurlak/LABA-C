//
//  Lab_9.c
//  learning_C
//
//  Created by Илья Бурлак on 22.11.2022.
//
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int strlength(const char *myStr);
bool isPrime(int n);

int main(){
    
    // 1
    int n;
    scanf("%d" , &n);
    char *str[] = {"ноль", "один", "два", "три", "четыре" , "пять", "шесть", "семь", "восемь", "девять"};
    printf("%d\n" , strlength(str[n]));

    // 2
    int x;
    scanf("%d" , &x);
    for (int i = 2 ; i<=x ; i++){
        if (isPrime(i)){
            printf("%d " , i);
        }
    }
    
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


// функция проверяет - простое ли число n
bool isPrime(int n)
{
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
        return true;
    }
    else
        return false;
}
