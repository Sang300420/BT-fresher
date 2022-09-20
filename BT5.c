#include <stdio.h>
#define KM1 5000
#define KM2 4000
#define KM3 3000
 
int main()
{
    float cost, km;
    do{
          printf("nhap so km: ");
          scanf("f", &km);
      }while(km < 0);
      if(km = 1 && km <= 30){
          cost = KM2 * (km - 1) + KM1;
      }
      else
          cost = KM3 * (km - 30) + (KM2 * 29) + KM1;
      printf("so tien phai tra: %f $", cost);
    
      return 0;
}