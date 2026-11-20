#include <stdio.h>
#include <windows.h>

int main(){
    int correct_password = 1965;
    int input;
    int i;

    do{
        printf("Enter the password: ");
        scanf("%d", &input);
    
    if(input != correct_password){
        printf("Incorrect password!!!.\n");
        printf("Please try again.\n");}

    }while(input != correct_password);
     
    printf("Access granted.\n");
    for (i=5; i>0; i--)
    {
        Sleep(1000); // Sleep for 1 second
        printf("checking system in....... %d\n", i);
    }
    
    printf("system init !!\n");



    return 0;
}
