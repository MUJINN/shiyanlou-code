#include<stdio.h>
int main(){
  float tank_volume;                          // 定义油箱的容积为浮点类型变量 tank_volume
  float oil_density;                          // 定义油的密度为浮点类型变量 oil_density
  float oil_kg;
  float area;

  tank_volume = 0.1;                            // 给变量 tank_volume 赋值
  oil_density = 850;                            // 给变量 oil_density 赋值

  oil_kg = tank_volume*oil_density;             // 求 tank_volume 和 oil_density 的积并赋值给 oil_kg
  area = oil_kg/0.85;                           // 求 oil_kg/0.85 的商并赋值给 area
  printf("Most farming is %f mu",area);
  return 0;
}