####################################################################
#
# PROJECT EULER - PROBLEM 3
#
# The prime factors of 13195 are 5,7,13 and 29.What was the largest
# prime factor of the number 600851475143?
#
# EXPLANATION OF SOLUTION
# We created a function that checks whether a number is prime or not
# Then we try to find all the prime factors of the given number while
# checking whether each number we get is the largest so far.We reduce
# the number of iterations by taking some shortcuts such as omitting
# tests for even numbers and reducing the magnitude of thegiven number
# by dividing the number by each of the prime factors that we get
#
######################################################################




def isPrime(n):
    if n == 2:
        return True

    # let's eliminate even numbers other than 2
    # since none of them is prime
    # this reduces the number of iterations
    # we have to do when checking for factors
    # later on
    if n > 3:
        if n % 2 == 0:
            return False

    i = 3

    while (i * i) <= n:
        if n % i == 0:
            return False

        # we are incrementing by 2 because
        # we don't need to consider even divisors
        i += 2

    return True


number = 600851475143
largest = 0

i = 3

while (i * i) <= number:
    if number % i == 0:
        quotient = number / i

        # after locating one prime factor i,
        # we continue with number / i
        # to reduce the number of iterations
        if isPrime(i) and i > largest:
            largest = i
            number /= i

        if isPrime(quotient) and quotient > largest:
            largest = quotient
            number /= quotient

    i += 2

print largest
            

                
