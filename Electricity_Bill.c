#include <stdio.h>
// Function prototype
float  calculateBill(int units);


int main (){
    int units;
    float bill;                   

    printf("Enter number of units consumed:");
    scanf("%d", &units);
//Function call
    bill = calculateBill(units );

    printf("\nunits consumed:%d\n",units);
    printf("Electricity Bill:%.2f\n",bill);

    return 0;
}
//Function Definition
float calculateBill(int units){
    float bill = 0.0;
if(units <=100){
    bill = units * 10;
}
else if(units <=200){  
    bill =(100 * 10) + ((units-100)*15);
}
else{
    bill = (100 * 10) +(100 *15)+((units - 200) * 20);
}
    return bill;
}














