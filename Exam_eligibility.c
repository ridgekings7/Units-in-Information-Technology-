#include <stdio.h>

int main(){

int attendance;
float marks;

printf("Enter attendance:");
scanf("%d", &attendance);

printf("Enter marks:");
scanf("%f", &marks);

if(attendance>=75 && marks>=40){
    printf("The student is eligible");

}
else {
    printf("Not eligible.");
} 


    return 0;
}