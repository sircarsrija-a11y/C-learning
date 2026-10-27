#include<stdio.h>
int main() {
    int i = 0;
    do {
        i++;
        if(i==6){
        break;
    }
        printf("%d", i);
    } while(i<=10);
    return 0;
}