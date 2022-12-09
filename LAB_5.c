
 1.c
 learning_C

 Created by Илья Бурлак on 01.10.2022.



#include <stdio.h>
#include <math.h>

int main(){
   int arr[9] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};
   printf("Array- \n");
   printf("%d %d %d", arr[0], arr[1] , arr[2]);
   printf("\n%d %d %d", arr[3], arr[4],  arr[5]);
   printf("\n%d %d %d", arr[6], arr[7],  arr[8]);
   printf("\n");



   int mat1[2][2] = {{1, 2}, {3, 4}};
   int mat2[2][2] = {{1, 0}, {0, 1}};
   int mat3[2][2];
   mat3[0][0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
   mat3[0][1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
   mat3[1][0] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
   mat3[1][1] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];
   for (int i = 0; i < 2; i++){
       for (int j = 0; j < 2; j++){
           printf("%d%c", mat3[i][j], ' ');
       }
       printf("\n");
   }
   return 0;
}
