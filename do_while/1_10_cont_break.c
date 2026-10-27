#include<stdio.h>
int main() {
    int i = 0;
    do {
        i++;
        if(i==3){
            continue;
        }
        else if(i==8){
            break;
        }
        else{
        printf("%d", i);
        }
    } while(i<10);
    return 0;
}