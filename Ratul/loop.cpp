#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5;


    // for (int i = 0 ; i <= 10; i++)
    // {
    //     printf("HELLOOOO I'M IN LOOP!! \n ");
    // }



    // while (1)
    // {
    //     printf("HELLOOOO I'M IN LOOP!! \n ");
    //     n--;
    //     if(n==0){
    //         break;
    //     }
    // }
    
    
    do
    {
        printf("HELLOOOO I'M IN LOOP!! \n ");
    } while (n--);
    


    return 0;
}
