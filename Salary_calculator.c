#include <stdio.h>
//function prototype

float  calculateTax(float gross_salary);

int main(){

    float gross_salary;
    float tax;
    float net_salary;

    printf("Enter gross salary:");
    scanf("%f", &gross_salary);

    tax = calculateTax(gross_salary);

    net_salary = gross_salary-tax;

    printf("\nThe gross salary is: %.2f\n", gross_salary);
    printf("The tax amount is : %.2f\n",tax);
    printf("The net salary is : %.2f", net_salary);
    
    return 0;
}
    float calculateTax(float gross_salary) {


    float tax = 0.0;

if(gross_salary <= 30000) {
    tax= gross_salary * 0.05;
}
else if(gross_salary <= 60000){
    tax=gross_salary * 0.1;
}
else {
    tax = gross_salary * 0.15;
}

    return tax;
}



    