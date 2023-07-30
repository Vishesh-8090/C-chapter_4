# include <stdio.h>

int main(){
    int i = 5;
    printf("This value after i++ is %d\n", i++);
    i++; // ---> First print then inncrement
    ++i; // ---> first increment then print
    printf("This value of i++ is %d\n", i);

    i+=10; // --> Increments i by 10
    printf("This value of i++ is %d\n", i);
    return 0;
}