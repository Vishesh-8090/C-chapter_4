# include <stdio.h>

int main(){
    int i, sum=0, n=10;
    for (i = 1; i < 11 ; i++)
    {
        n=8*i;
        sum+=n; //sum= sum + n

    }
    printf("The sum of the numbers occuring in the multiplication table of 8 is %d\n ", sum);
    
    return 0;
}