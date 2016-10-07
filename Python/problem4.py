##############################################################################
#  PROJECT EULER PROBLEM 4                                                   #
#                                                                            #
#  A palindromic number reads the same both ways.The largest palindrome made #
#  from the product of two 2-digit numbers is 9009 = 91 x 99.Find the        #
#  largest palindrome made from the product of two 3-digit numbers.          #
#                                                                            #
#  SOLUTION                                                                  #
#  We write two loops to multiply 3 digit numbers with themselves and in each#
#  iteration,we check whether the result is a palindrome and whether it is   #
#  bigger than the largest palindrome gotten so far                          #



def isPalindrome(number):
    copy = number
    digit = 0
    val = 0

    while copy > 0:
        digit = copy % 10
        val = val * 10 + digit
        copy /= 10

    if val == number:
        return True

    return False


for i in range(100,1000):
    largest = 0
    
    for j in range(i,1000):
        if isPalindrome(i * j):
            if (i * j) > largest:
                largest = i * j

print largest
