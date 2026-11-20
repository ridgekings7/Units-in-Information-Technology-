#include <stdio.h> 

float calculatebill(float units);

int main(){
    float units;
    float bill;

    printf("Enter the number of units: ");
    scanf("%f", &units);

    bill = calculatebill(units);

    printf("The total bill is:%.2fKshs", bill);

    return 0;

}
float calculatebill(float units){
    float bill = 0.0;
    if(units<= 30){
        units *20;
    }
    else if(units<=60){
        (30 * 20) + ((units-30)*25);
    }else{
        (30*20) +(30*25)+((units-60)*30);
    }

    return bill;


}








