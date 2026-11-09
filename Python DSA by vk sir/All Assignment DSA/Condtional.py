    ### ASSIGNMENTS :CONDITIONAL STATEMENTS

# 1. Write a program to find maximum between two numbers.

# x,y=map(int,input("enter the Numbers First:").split())
# if x>y:
#     print("x is max :",x)
# elif x<y:
#     print("y is max:",y)
# else:
#     print("The value of x:",x,"and The value of y:",y ,"THEN : X=Y") 

# 2. Write a program to find maximum between three numbers.

# x,y,z=map(int,input("enter the Numbers:").split())
# if x>y and x>z:
#     print("x is max :",x)
# elif y>x and y>z:
#     print("y is max:",y)
# elif z>x and z>y:
#     print("z is max:",z)
# else:
#     print("The value of x:",x,", The value of y:",y,"and The value of z:",z ,"THEN : X=Y=Z")


#3.Write a program to check whether a number is negative,positive or zero.

# x=int(input("enter the Numbers First:"))
# if x==0:
#     print("x is zero values :",x)
# elif x>0:
#     print("x is positive:",x)
# else:
#     print("The value of x is negative :",x)


# 4. Write a program to check whether a number is divisible by 5 and 11 or not.

# x=int(input("enter the Numbers First:"))
# if x%5==0:
#     print("x is divisible by 5 :",x//5)
# elif x%11==0:
#     print("x is divisible by 11:",x//11)
# else:
#     print("The value of x is not divisible of 5 and 11 :",x//5 and x//11)

# 5.Write a program to check whether a number is even or odd.

# x=int(input("enter the Numbers First:"))
# if x%2==0:
#     print("The value of x is Even:",x/2)
# else:
#     print("The value of x is Odd :", x/2)


# 6. Write a program to check whether a year is leap year or not.

# year=int(input("Enter year:"))

# if year%400==0:
#     print("Leap Year",year)
# elif year%100 == 0:
#     print("Not a Leap Year",year)
# elif year%4 == 0:
#     print("Leap Year",year)
# else:
#     print("Not a Leap Year",year)

# year = int(input("Enter year: "))
# if year % 400 == 0 or year % 4 == 0 and year%100!=0:
#     print("Leap year")
# else:
#     print("Not a leap year")

# 7. Write a program to check whether a character is alphabet or not.
# char =input("Enter ASCII value: ")
# if char in range(65,91) or char in range(97,123):
#     print("Alphabet:",char) 
# else:
#     print("Not Alphabet:",char)

##M-2
# char = input("Enter a character: ")
# if len(char)==1 and char.isalpha():
#     print("Alphabet")
# else:
#     print("Not Alphabet")


# 8. Write a program to input any alphabet and check whether it is vowel or consonant.
# vowel=['a','e','i','o','u']
# char = input("Enter alphabet: ")
# if char in "aeiouAEIOU":
#     print("Vowel")
# else:
#     print("Consonant")


#9. Write a program to input any character and check whether it is alphabet, digit or special character.
# char=input("Enter character: ")
# if ('A'<=char<='Z') or ('a'<=char<='z'):
#     print("Alphabet")
# elif '0'<=char<='9':
#     print("Digit")
# else:
#     print("Special character")


##M-2
# ch = input("Enter any character: ")
# if len(ch) == 1 and ch.isalpha():
#     print("Alphabet")
# elif len(ch) == 1 and ch.isdigit():
#     print("Digit")
# else:
#     print("Special Character")


# 10. Write a program to check whether a character is uppercase or lowercase alphabet .

# char =input("Enter ASCII value: ")
# if char in range(65, 91):
#     print("Uppercase alphabet")
# elif char in range(97, 123):
#     print("Lowercase alphabet")
# else:
#     print("Not an alphabet")

##M-2
# ch = input("Enter a character: ")
# if len(ch) == 1 and ch.isupper() and ch.isalpha():
#     print("Uppercase Alphabet")
# elif len(ch) == 1 and ch.islower() and ch.isalpha():
#     print("Lowercase Alphabet")
# else:
#     print("Not an Alphabet")


# 11. Write a program to input week number and print week day .

# week_day = int(input("Enter week DAY: "))
# if week_day == 1:
#     print("Monday")
# elif week_day == 2:
#     print("Tuesday")
# elif week_day == 3:
#     print("Wednesday")
# elif week_day == 4:
#     print("Thursday")
# elif week_day == 5:
#     print("Friday")
# elif week_day == 6:
#     print("Saturday")
# elif week_day == 7:
#     print("Sunday")
# else:
#     print("Invalid week number")


# 12. Write a program to input month number and print number of days in that month.
# month = int(input("Enter month number: "))
# if month in [1,3,5,7,8,10,12]: 
#     print("31 days")
# elif month in [4, 6, 9, 11]:
#     print("30 days")
# elif month == 2:
#     print("28 or 29 days")
# else:
#     print("Invalid month")

# Write a program to count total number of notes in given amount .
# amount = int(input("Enter amount: "))

# n2000 = amount // 2000
# amount = amount % 2000
# n500 = amount // 500
# amount = amount % 500
# n200 = amount // 200
# amount = amount % 200
# n100 = amount // 100
# amount = amount % 100
# n50 = amount // 50
# amount = amount % 50
# n20 = amount // 20
# amount = amount % 20
# n10 = amount // 10
# total = n2000 + n500 + n200 + n100 + n50 + n20 + n10
# print("Total number of notes:", total)



## 14. Write a program to input angles of a triangle and check whether triangle is valid or not.
# a = int(input("Enter first angle: "))
# b = int(input("Enter second angle: "))
# c = int(input("Enter third angle: "))
# if a > 0 and b > 0 and c > 0 and a + b + c == 180:
#     print("Valid triangle")
# else:
#     print("Invalid triangle")

# 15. Write a program to input all sides of a triangle and check whether triangle is valid or not.

# a = int(input("Enter first side: "))
# b = int(input("Enter second side: "))
# c = int(input("Enter third side: "))

# if a + b > c and b + c > a and c + a > b:
#     print("Valid triangle")
# else:
#     print("Invalid triangle")


# 16. Write a program to check whether the triangle is equilateral,isosceles or scalene triangle.

# a = int(input("Enter first side: "))
# b = int(input("Enter second side: "))
# c = int(input("Enter third side: "))
# if a == b and b == c:
#     print("Equilateral triangle")
# elif a == b or b == c or a == c:
#     print("Isosceles triangle")
# else:
#     print("Scalene triangle")

# 17. Write a program to calculate profit or loss.Profit: Profit = SP - CP (when SP > CP)Loss: Loss = CP - SP (when CP > SP)

# cp = float(input("Enter cost price: "))
# sp = float(input("Enter selling price: "))
# if sp > cp:
#     profit = sp - cp
#     print("Profit:", profit)
# elif cp > sp:
#     loss = cp - sp
#     print("Loss:", loss)
# else:
#     print("No profit, no loss")


# Write a program to input marks of five subjects Physics,Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
# Percentage &gt;= 90% : Grade A
# Percentage &gt;= 80% : Grade B
# Percentage &gt;= 70% : Grade C
# Percentage &gt;= 60% : Grade D
# Percentage &gt;= 40% : Grade E
# Percentage &lt; 40% : Grade F

# marks=int(input("Enter the Marks of each Subject:"))
# if marks>=90 and marks<=100:
#     percentage=(marks*100)/100
#     if percentage in range(90,101):
#         print("Grade A :",percentage)
#     print("physics")
# elif marks>=80 and marks<90:
#     percentage=(marks*100)/100
#     if percentage in range(80,91):
#         print("Grade B :",percentage)
#     print("Chemestry")
# elif marks>=70 and marks<80:
#     percentage=(marks*100)/100
#     if percentage in range(70,81):
#         print("Grade C :",percentage)
#     print("Biology")
# elif marks>=60 and marks<70:
#     percentage=(marks*100)/100
#     if percentage in range(60,71):
#         print("Grade D :",percentage)
#     print("Mathematics")
# elif marks>=40 and marks<60:
#     percentage=(marks*100)/100
#     if percentage in range(40,61):
#         print("Grade E :",percentage)
#     print("Computer")
# elif marks<40:
#     percentage=(marks*100)/100
#     if percentage <40:
#         print("Grade F :",percentage)
#     print("Low marks/fail ")
# else:
#     print("invalid marks")


# physics = int(input("Enter Physics marks: "))
# chemistry = int(input("Enter Chemistry marks: "))
# biology = int(input("Enter Biology marks: "))
# mathematics = int(input("Enter Mathematics marks: "))
# computer = int(input("Enter Computer marks: "))

# All_Subjects = physics + chemistry + biology + mathematics + computer
# percentage = (All_Subjects/ 500) * 100

# if percentage >= 90 and percentage<=100:
#     grade = "A"
# elif percentage >= 80 and percentage<90:
#     grade = "B"
# elif percentage >= 70 and percentage<80:
#     grade = "C"
# elif percentage >= 60 and percentage<70:
#     grade = "D"
# elif percentage >= 40 and percentage<60:
#     grade = "E"
# elif percentage<40:
#     grade = "F"
# else:
#     grade="invalid"
# print(f"Total marks:{All_Subjects}, Percentage:{percentage}% and Grade:{grade}")
# print("Total Marks:", All_Subjects)
# print("Percentage:", percentage, "%")
# print("Grade:", grade)


# basic_salary = float(input("Enter basic salary: "))

# if basic_salary <= 10000:
#     hra = basic_salary*20 / 100
#     da = basic_salary * 80 / 100

# elif basic_salary <= 20000:
#     hra = basic_salary * 25 / 100
#     da = basic_salary * 90 / 100

# else:
#     hra = basic_salary * 30 / 100
#     da = basic_salary * 95 / 100

# gross_salary = basic_salary + hra + da

# print("HRA:", hra)
# print("DA:", da)
# print("Gross Salary:", gross_salary)




# units = float(input("Enter electricity units: "))

# if units <= 50:
#     bill = units * 0.50

# elif units <= 150:
#     bill = (50 * 0.50) + ((units - 50) * 0.75)

# elif units <= 250:
#     bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20)

# else:
#     bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50)

# surcharge = bill * 20 / 100

# total_bill = bill + surcharge

# print("Electricity Bill:", bill)
# print("Surcharge:", surcharge)
# print("Total Electricity Bill:", total_bill)