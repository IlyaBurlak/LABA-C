//
//  Lab_12.c
//  learning_C
//
//  Created by Илья Бурлак on 25.11.2022.
//

#include<stdio.h>
#include <stdio.h>
 
 
int main()
 
{
    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i = 1, m, d, y, n, d1, m1, y1, leap = 0;
    int size;
    int data=0;
 
    FILE *output = fopen("File", "w+");
 
    printf("Day: ");
    scanf("%d", &d);
    printf("Month: ");
    scanf("%d", &m);
    printf("Year: ");
    scanf("%d", &y);
    printf("N: ");
    scanf("%d", &n);
 
    leap = (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
 
    while (i <= n){
        if (d + 1 > month[m]+(leap && m==2)){
            if (m + 1 > 12){
                m = 1;
                y = y + 1;
                leap = ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
            }
            else{
                m = m + 1;
                y = y;
            }
            d = 1;
        }
        else
        {
            d = d + 1;
        }
        printf("%02d.%02d.%4d\n", d, m, y);
        fprintf(output, "%02d.%02d.%4d\n", d, m, y);
        ++i;
    }
 
    fclose(output);
 
    return 0;
 
}
