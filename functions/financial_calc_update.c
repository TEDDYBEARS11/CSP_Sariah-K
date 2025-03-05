// Sariah Kamore, financial calculator updated. c
#include <stdio.h>
#include <math.h>

float income, rent, utilities, groceries, transportation, spend, savings;

float user(char type[]){
  float amount; 
  printf("what is your %s amount?\n", type);
  scanf("%f", &amount);
  return amount;
}

void info(float income, float amount){
  float percent = (amount/income)*100;
  printf("you spend $%.2f on rent which is %.2f%% your income\n", amount, percent);
}
int main(void){
  printf("welcome to your financial calculator. Follow the instructions below\n");
  income = user("income");
  rent  = user ("rent");
  utilities = user("utilities");
  groceries = user("groceries");
  transportation = user("transportation");
  float savings = income/10;
  float spend = income - (rent+utilities+groceries+transportation+savings);
  float spend_percent = spend/income*100;

  info(income, rent);
  info(income, utilities);
  info(income, groceries);
  info(income, transportation);
  printf("you spend $%.2f on savings which is 10%% of your income\n", savings);
  printf("you spend $%.2f on spending which is %.2f%% of your income\n", spend, spend_percent);


  return 0;
}