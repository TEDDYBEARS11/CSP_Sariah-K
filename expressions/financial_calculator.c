// Sariah Kamore, financial calculator. c
#include <stdio.h>
float income;
float rent;
float utilities;
float groceries;
float transportation;
float savings;
float spending;
float percent_rent;
float percent_utilities;
float percent_groceries;
float percent_transportations;
float percent_spending;
//ask what their income is(variable an input)
int main(void)
{
    
  
//ask what their income is (variable an input)
printf("what is your income\n");
scanf("%f", &income);
//ask what their rent is (variable that is an input)
printf("what is your rent\n");
scanf("%f", &rent);
//ask what their untilites is (variable that is an input)
printf("what are your utilities\n");
scanf("%f", &utilities);
//ask what their groceries is (variable that is an input)
printf("what are your groceries\n");
scanf("%f", &groceries);
//ask what their transportation is (variable that is an input)
printf("what is your transportation\n");
scanf("%f", &transportation);
//calculate savings as 10% of income (income*.1)
savings = income*.1;
//calculate spending as income-rent-utilities-groceries-transportaion-savings (variable)
spending = income-rent-utilities-groceries-transportation-savings;
printf("Your spending is $%.2f\n", spending);
//calculate percent income of rent(rent/income*100) (variable)
percent_rent = rent/income*100; 
printf("Your rent is %.2f%% of your income.\n", percent_rent);
//calculate percent income of utilities(utilities/income*100) (variable)
percent_utilities = utilities/income*100;
printf("Your utilities is %.2f%% of your income.\n", percent_utilities);
//calculate percent income of groceries(groceries/income*100) (variable)
percent_groceries = groceries/income*100;
printf("Your groceries is %.2f%% of your income.\n", percent_groceries);
//calculate percent income of transportation(transportation/income*100) (variable)
percent_transportations = transportation/income*100;
printf("Your transportation is %.2f%% of your income.\n", percent_transportations);
//Your savings is $xx.xx which is xx% of your income. (print)
printf("Your savings is $%.2f which is %.2f%% of your income.\n", savings, 10.0);
scanf("%f", &savings);
//your savinings is income- rent- utilities- groceries- transportation- spending (variable)
printf("Your savings is $%.2f\n", savings);
scanf("%f", &savings);
  return 0;
}