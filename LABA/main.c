//
//  main.c
//  LABA
//
//  Created by Илья Бурлак on 14.09.2022.
//

#include <stdio.h>

int main(){
    char a[200] ;
    float b ;
    printf( "Введите строку: ");
    scanf("%s" , a);             // Ввод строки
    printf("Введите Вещественное число: ");
    scanf("%f" , &b);            // Ввод вещественное число
    printf("Строка:%s \n" "Вещественное число: %f \n" , a , b); //Вывод ТЗ
    return 0;
}
