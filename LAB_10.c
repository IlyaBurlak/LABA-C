//
//  Lab_10.c
//  learning_C
//
//  Created by Илья Бурлак on 25.11.2022.
//


#include <stdio.h>
int strlength(const char *myStr);
int sum(int n);

int main()
{
    // 3
    int number;
    scanf("%d" , &number);
    
    int array[10];
    int count = 0, i;
     
    int el = number;
    while(number)
    {
        array[count++] = number % 10;
        number /= 10;
    }
 
    for ( i = 0; i < 4; ++i)
        printf("%d ", array[i]);
    printf("\n");
    
    // 4
    printf("%d\n" , sum(el));
    
}

int sum(int n)
{
    if (n % 10 == 0)
    {
        return 0;
    }
    else
    {
        return sum(n / 10) + (n % 10);
    }
}
