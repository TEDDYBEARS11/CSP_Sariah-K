#sariah kamore financial calculator updated python
print("this is a financial calculator")

def user(type):
    return float(input(f"how much is your monthly {type}? \n"))

income = user("income")
rent = user("rent")
utilities = user("utilites")
groceries = user("groceries")
transportation  = user("transportation")
savings = income*0.1
expenses = rent+utilities+groceries+transportation+savings

def info(income, amount, type):
    percent_type = float(amount/income*100)
    print(f"you spend ${amount:.2f} in {type} and that is {percent_type:.1f}% of your income")
info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, groceries, "groceries")
info(income, transportation, "transportation")
print(f"you have ${savings:.2f} and that is 10% of your income")