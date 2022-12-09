//
//  Lab_7.c
//  learning_C
//
//  Created by Илья Бурлак on 12.11.2022.
//

#include <stdio.h>

struct Treug {

    double per_t;
    float dlina_a;
    float dlina_b;
    float dlina_c;
   
    
    };
    
float Per(struct Treug tr)
{
    return tr.dlina_a + tr.dlina_b + tr.dlina_c;
   // return per;
    }
    
int main(){
    // 1
    enum month {
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
    };
    enum month a ;
    a = July;
    printf("%d\n" , a);
    
    // 2
    
    struct Treug Alfa;
    Alfa.dlina_a = 5;
    Alfa.dlina_b = 3;
    Alfa.dlina_c = 4;
    float per = Per(Alfa);

    printf("%f\n" , per);
    
    // 3
    
    union {
    int x;
    struct {
        int SD : 1;
        int CompactFlash : 1;
        int MemoyStick : 1;
        };
    } condition;

    scanf("%X", &condition.x);

    condition.SD ? printf("активна карта SD\n") : printf("не активна карта SD\n");
    condition.CompactFlash ? printf("активна карта Compact Flash\n") : printf("не активна карта Compact Flash\n");
    condition.MemoyStick ? printf("активна карта MemoyStick\n") : printf("не активна карта Compact Flash\n");

        return 0;
    }

    

