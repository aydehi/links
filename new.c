//
// Created by Nabil Ahmed on 11/11/23.
//
#include<stdio.h>

void task5(), task6(), task7(), task8();

int main(void){
    //task5();
    //task6();
    //task7();
    task8();

    return 0;
}

void task5(){

    float principal, interest;
    int interestRate, days;

    printf("Enter the principal ammount and days separated by space: ");
    scanf("%f%d", &principal, &days);

    if(principal > 0 && principal <= 10000){
        interestRate = 20;
    }else if(principal > 10000 && principal <= 50000){
        interestRate = 17;
    } else if(principal > 50000){
        interestRate = 15;
    }

    interest = principal * interestRate * days / 365;

    printf("Interest: %f", interest);
}

void task6(){

    int input;

    printf("Enter number to see day of the week: ");
    scanf("%d", &input);

    switch (input) {
        case (1):
            printf("Sunday");
            break;
        case (2):
            printf("Monday");
            break;
        case (3):
            printf("Tuesday");
            break;
        case (4):
            printf("Wednesday");
            break;
        case (5):
            printf("Thursday");
            break;
        case (6):
            printf("Friday");
            break;
        case (7):
            printf("Saturday");
            break;
        default:
            printf("invalid day");
    }
}

void task7(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year if perfectly divisible by 400
    if (year % 400 == 0) {
        printf("%d is a leap year.", year);
    }
        // not a leap year if divisible by 100
        // but not divisible by 400
    else if (year % 100 == 0) {
        printf("%d is not a leap year.", year);
    }
        // leap year if not divisible by 100
        // but divisible by 4
    else if (year % 4 == 0) {
        printf("%d is a leap year.", year);
    }
        // all other years are not leap years
    else {
        printf("%d is not a leap year.", year);
    }
}

void task8(){

    float weight;
    char ch;

    printf("Enter weight:\n ");
    scanf("%f",&weight);
    printf("Enter zone:\n ");
    scanf("%c", &ch);

    if(0<weight<2 && ch == 'a'){
        printf("Your shipping cost is $5.00");
    }else if(0<weight<2 && ch == 'b'){
        printf("Your shipping cost is $7.00");
    } else if(0<weight<2 && ch == 'c'){
        printf("Your shipping cost is $8.00");
    } else if(weight>2 && ch == 'a'){
        printf("Your shipping cost is $10.00");
    } else if(weight>2 && ch == 'b'){
        printf("Your shipping cost is $14.00");
    } else if(weight>2 && ch == 'c'){
        printf("Your shipping cost is $20.00");
    }

}

