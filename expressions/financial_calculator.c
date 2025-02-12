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
scanf("%f", &savings);
savings = income*.1;
//calculate spending as income-rent-utilities-groceries-transportaion-savings (variable)
spending = income-rent-utilities-groceries-transportation-savings;
//calculate percent income of rent(rent/income*100) (variable)
percent_rent = rent/income*100; 
//calculate percent income of utilities(utilities/income*100) (variable)
percent_utilities = utilities/income*100;
//calculate percent income of groceries(groceries/income*100) (variable)
percent_groceries = groceries/income*100;
//calculate percent income of transportation(transportation/income*100) (variable)
percent_transportations = transportation/income*100;
//calculate percent income of spending(spending/income*100) (variable)
percent_spending = spending/income*100;
//Your rent is $xx.xx which is xx% of your income. (print)
printf("Your rent is $%.2f which is %.2f%% of your income.\n", rent, percent_rent);
scanf("%f", &rent);
//Your utilities is $xx.xx which is xx% of your income. (print)
printf("Your utilities is $%.2f which is %.2f%% of your income.\n", utilities, percent_utilities);
scanf("%f", &utilities);
//Your groceries is $xx.xx which is xx% of your income. (print)
printf("Your groceries is $%.2f which is %.2f%% of your income.\n", groceries, percent_groceries);
scanf("%f", &groceries);
//Your tansportation is $xx.xx which is xx% of your income. (print)
printf("Your transportation is $%.2f which is %.2f%% of your income.\n", transportation, percent_transportations);
scanf("%f", &transportation);
//Your savings is $xx.xx which is xx% of your income. (print)
printf("Your savings is $%.2f which is %.2f%% of your income.\n", savings, 10.0);
scanf("%f", &savings);
//Your spending is $xx.xx which is xx% of your income. (print)
printf("Your spending is $%.2f which is %.2f%% of your income.\n", spending, percent_spending);
scanf("%f", &spending); 
  return 0;
}