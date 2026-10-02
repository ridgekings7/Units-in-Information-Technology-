#include <stdio.h>

//function prototype;
float calculatebill(int units){
     float bill;
     
     if (units <=100){
     bill = units*10;
     
}
     else if (units <=200){
     bill = (100*10) + ((units-100)*15);
     
}
     else {
     bill = (100*10) + (100*15) + ((units-200)*20);
     
}     
     
     return bill;
}     

int main (){
    int units;
    float bill;
    printf("number of units of used: ");
    scanf("%d", &units);
    bill = calculatebill(units);
    printf("units consumed:%d\n",units);
    printf("total electricity bill:%.2f\n",bill);
    
    return 0;
    
}
 
  