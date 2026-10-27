#include<stdio.h>
int main() {
    float salary, qualification, gender, yrs;
    printf("Enter gender (m=0/f=1), qualification (G=0, PG=1) and years of experience: ");
    scanf("%f %f %f", &gender, &qualification, &yrs);
    if (gender==0 && qualification==1.0 && yrs>=10) {
        salary = 15000;
    }
    else if (gender==0 && qualification==1.0 && yrs<10 || gender==0 && qualification==0 && yrs>=10 || gender==1 && qualification==1.0 && yrs>=10) {
        salary = 10000;
    }
    else if (gender==0 && qualification==0 && yrs<10) {
        salary = 7000;
    }
    else if (gender==1 && qualification==1.0 && yrs>=10) {
        salary = 12000;
    }
    else if (gender==1 && qualification==0 && yrs>=10) {
        salary = 9000;
    }
    else if (gender==1 && qualification==0 && yrs<10) {
        salary = 6000;
    }
    else {
        printf("Error: Invalid input.\n");
        return 1;
    }
    printf("Salary: %.2f\n", salary);
    return 0;
}