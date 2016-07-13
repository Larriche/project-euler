#################################################################
#
# PROJECT EULER - PROBLEM 1
#
# If we list all natural numbers below 10 that are multiples of 3
# or 5, we get 3,5,6 and 9.The sum of these multiples is 23.
# Find the sum of all multiples of 3 or 5 below 1000.
#
# EXPLANATION OF SOLUTION:
#
# This is simple.We just test to see whether each of the numbers
# in the given range are divisible by 3 or 5 and add them to the
# total sum if they are
#
#
##################################################################


sumOfNums = 0

for i in range(1,1000):
    if (i % 3) == 0 or (i % 5) == 0:
        sumOfNums += i

print sumOfNums
