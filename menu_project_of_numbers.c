#include<stdio.h>

int main(){
    printf("enter min range (2 up to 1000000): ");
    int finish_number;
    int start_number;
    while (1)
    {
       scanf("%d", & start_number);
       if (start_number<2 || start_number>1000000)
       {
        printf("Erorr!!! input  number with respect to limits");
       }
       else
        break;
    }
    int max_difference=1000000 + start_number;
    printf("enter max range [%d up to %d: ]\n", start_number, max_difference);
    while (1)
    {
        scanf("%d", &finish_number);
        if (start_number>finish_number || finish_number>max_difference) {
        printf("Erorr!!! input number with respect to limits ");
        }
        else
       {
        break;
       }

    }
    printf("%d\n", start_number);
    printf("%d\n", finish_number);
    return 0;
}