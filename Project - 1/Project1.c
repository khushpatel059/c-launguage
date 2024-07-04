#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    float base_salary, gross_salary;
    float hra_percent, da_percent, ta_percent;

    printf("QUE-1\n");
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

    
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    printf("Que-2\n\n");
   
    printf("Enter base salary: ");
    scanf("%f", &base_salary);

    printf("Enter percentage of House Rent Allowance (HRA): ");
    scanf("%f", &hra_percent);

    printf("Enter percentage of Dearness Allowance (DA): ");
    scanf("%f", &da_percent);

    printf("Enter percentage of Travel Allowance (TA): ");
    scanf("%f", &ta_percent);

    
    float hra_amount = base_salary * (hra_percent / 100);
    float da_amount = base_salary * (da_percent / 100);
    float ta_amount = base_salary * (ta_percent / 100);

    gross_salary = base_salary + hra_amount + da_amount + ta_amount;


    printf("\nBase Salary: %.2f\n", base_salary);
    printf("HRA (+%.2f%%): %.2f\n", hra_percent, hra_amount);
    printf("DA (+%.2f%%): %.2f\n", da_percent, da_amount);
    printf("TA (+%.2f%%): %.2f\n", ta_percent, ta_amount);
    printf("\nGross Salary: %.2f\n", gross_salary);

    printf("Que-3\n\n");

    
    float angle1, angle2, angle3;

    printf("Enter the first angle of the triangle: ");
    scanf("%f", &angle1);

  
    printf("Enter the second angle of the triangle: ");
    scanf("%f", &angle2);

   
    angle3 = 180.0 - angle1 - angle2;

    
    printf("The third angle of the right triangle is: %.2f degrees\n", angle3);

    return 0;
}



