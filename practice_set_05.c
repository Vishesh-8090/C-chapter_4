# include <stdio.h>

int main(){
    //  factorial (4) = 1 * 2 * 3 * 4
    int i= 0, n=4, factorial=1;
    for(i=1; i<=4; i++){
        factorial *=i;
    }
    printf("The value of factorial %d is %d", n, factorial);
    return 0;
}