// # include <stdio.h>

// int main(){
//     /* Prime numbers = A prime number (or a prime) is a natural number greater than 1 that
//     is not a product of two smaller natural numbers.*/
//     // Disclaimer: This is not the best method to solve this problem
//     int n = 45, prime=1;
//     for(int i = 2; i<n; i++){
//         if(n%i==0){
//                 prime = 0;
//                 break;
//         }
//     }
//     if(prime == 0){
//             printf("This is not a prime number");

//     }
//     else{
//         printf("This is a prime number");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 3, i = 2, prime = 0;
    while (i < n)
    {
        if (n % i == 0){
        prime = 1;
        break;

        }
        i++;
    }
    
   

    if (prime == 0)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is npt a prime number");
    }

    return 0;
}