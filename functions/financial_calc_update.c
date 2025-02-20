// Sariah Kamore, financial calculator updated. c
#include <stdio.h>




int main(void)
{
    def info (cost, income, type):
    percent = cost/income *100
    prinf(f"your {type} is ${cost:.2f} which is {percent}% of your income.")
    printf("welcome to my financial calculator that showa your finances.")
  
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

  return 0;
}