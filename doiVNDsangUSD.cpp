
#include <stdio.h>
#include<math.h> 

float PI = 3.14159; 

float d (float bankinh)
{
    float dientich = PI * bankinh * bankinh;
    return dientich ;
}

float c(float bankinh)
{
    float chuvi = 2 * PI * bankinh;
    return chuvi;
}

int main()
{
    float bankinh , chuvi, dientich;
    
    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%f", &bankinh);
    
    dientich  = d(bankinh);
    chuvi = c(bankinh);
    
    printf("Dien tich cua hinh tron la: %0.2f\n", dientich);
    printf("Chu vi cua hinh tron la: %0.2f", chuvi);
    
    return 0;
}
 

