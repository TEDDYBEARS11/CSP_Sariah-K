#sariah kamore financial calculator python
def info(cost, income, type):
    percent = cost/income *100
    print(f"your {type} is ${cost:.2f} which is {percent}% of your income.")
def pay(bills, income, fees):
    percent = bills/income *100
    print(f"your {fees} is ${income:.2f} which is {percent}% of your income.")



print("welcome to my financial calculator that showa your finances.")
#ask what their income is (variable an input)
income = float(input("what is your income?\n"))
#ask what their rent is (variable that is an input)
rent = float(input("what is your rent?\n"))
#ask what their untilites is (variable that is an input)
utilities = float(input("what are your utilities?\n"))
#ask what their groceries is (variable that is an input)
groceries = float(input("what is your groceries?\n"))
#ask what their transportation is (variable that is an input)
transportation = float(input("what is your transportation\n"))
#calculate savings as 10% of income (income*.1)
savings = income *.1
spending = income-rent-utilities-groceries-transportation-savings


pay(utilities, income, "utilities")
pay(transportation,income, "transportation")
pay(rent, income, "rent")
info(rent, income, "rent")
info(utilities, income, "utilities")
info(groceries, income, "groceries")
info(transportation, income, "transpotration")
info(savings, income, "savings")
info(spending, income, "spending")