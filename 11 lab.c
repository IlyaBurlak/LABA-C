//
//  Lab_11.c
//  learning_C
//
//  Created by Илья Бурлак on 24.11.2022.
//

#include "Lab_11.h"
#include <stdio.h>

struct Circle {
    float pi;
    float radius;
    float diametr;
    float square;
    float circle_length;
};

float square(struct Circle *al){
    
    return al.radius *al.radius *al.pi;
   
    }

float circles(struct Circle *al){
    return 2*al.pi*al.radius;
}

void NewStruct(){
    struct Circle al;
    float pi , r;
    printf("Введите число pi ");
    scanf("%f" ,  &pi);
    printf("Введите радиус ");
    scanf("%f/n" ,  &r);
    al.pi = pi;
    al.radius = r;
    al.diametr = al.radius*2;
    al.circle_length = circles(al);
    al.square = square(al);
    
}

void printStruct(){
    struct Circle *a;
    printf("Радиус : %f\n" , a.radius);
    printf("Диаметр : %f\n" , a.diametr);
    printf("Длина дуги : %f\n" , a.circle_length);
    printf("Площадь : %f\n" , a.square);
    
}
int main(){
    NewStruct();
    printStruct();
    
    return 0;
}
