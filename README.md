# Problem Solving with C++

Various programs created using c++ alongside the textbook series "Problem Solving with C++" 

This repository is strictly for personal practice with C++

## Note on Naming:

Each individual program is named in a #-# format and it's compiled file in a #-#-output format, where the first number is the chapter, and second number is the project number.
 

## Chapter 1:
- 1-1: Takes in two numbers from the user, and then outputs the sum and product of these two numbers.
- 1-2: Write a program that prints out "CS!" in large block letters inside a border of *s, followed by two blank lines and then the message "Computer science is cool stuff"
- 1-3: Write a program that allows the user to enter a number of quarters, dimes and nickels and then outputs the monetary value of the coins in cents. For example, if the user enters in 2 quarters, 3 dimes and 1 nickel the program should output the coins are worth 85 cents.
- 1-4: User enters a time in seconds, and then outputs how far an object would drop if it is in freefall for that length of time. Assume object starts from rest, there is no friction or resistance and a constant acceleration of 32 feet/second due to gravity. 
    distance = (acceleration * timeˆ2) / 2
- 1-5: Takes in a letter from the keyboard then outputs a block letter C made up of that letter.

## Chapter 2:
- 2-1: A government research lab has concluded that an artificial sweetener
commonly used in diet soda pop will cause death in laboratory mice. A
friend of yours is desperate to lose weight but cannot give up soda pop.
Your friend wants to know how much diet soda pop it is possible to drink
without dying as a result. Write a program to supply the answer. The input
to the program is the amount of artificial sweetener needed to kill a mouse
(use 5 grams), the mass of the mouse (use 35 grams), and the weight of
the dieter (use 45400 grams for a 100 pound person). Assume that the
lethal dose for a mouse is proportional to the lethal dose for the human.
A single can of soda pop has a mass of 350 grams. To ensure the safety of
your friend, be sure the program requests the weight at which the dieter
will stop dieting, rather than the dieter’s current weight. Assume that diet soda contains 1/10th of 1% artificial sweetener. Use a variable declaration
with the modifier const to give a name to this fraction. You may want to
express the percent as the double value 0.001. Your program should allow
the calculation to be repeated as often as the user wishes.

- 2-2: Workers at a particular company have won a 7.6% pay increase retroactive
for 6 months. Write a program that takes an employee’s previous annual
salary as input, and outputs the amount of retroactive pay due the employee,
the new annual salary, and the new monthly salary. Use a variable
declaration with the modifier const to express the pay increase. Your program
should allow the calculation to be repeated as often as the user wishes.

- 2-3: Modify your program from Programming Project 2 so that it calculates the
retroactive salary for a worker for any number of months, instead of just
6 months. The number of months is entered by the user.

- 2-4: Negotiating a consumer loan is not always straightforward. One form of
loan is the discount installment loan, which works as follows. Suppose a
loan has a face value of $1,000, the interest rate is 15%, and the duration
is 18 months. The interest is computed by multiplying the face value of
$1,000 by 0.15, to yield $150. That figure is then multiplied by the loan
period of 1.5 years to yield $225 as the total interest owed. That amount is
immediately deducted from the face value, leaving the consumer with only
$775. Repayment is made in equal monthly installments based on the face
value. So the monthly loan payment will be $1,000 divided by 18, which
is $55.56. This method of calculation may not be too bad if the consumer
needs $775 dollars, but the calculation is a bit more complicated if the
consumer needs $1,000. Write a program that will take three inputs: the
amount the consumer needs to receive, the interest rate, and the duration
of the loan in months. The program should then calculate the face value
required in order for the consumer to receive the amount needed. It should
also calculate the monthly payment. Your program should allow the calculations
to be repeated as often as the user wishes.

- 2-5: Write a program that determines whether a meeting room is in violation
of fire law regulations regarding the maximum room capacity. The program
will read in the maximum room capacity and the number of people
attending the meeting. If the number of people is less than or equal to the
maximum room capacity, the program announces that it is legal to hold
the meeting and tells how many additional people may legally attend. If
the number of people exceeds the maximum room capacity, the program
announces that the meeting cannot be held as planned due to fire regulations
and tells how many people must be excluded in order to meet the
fire regulations.