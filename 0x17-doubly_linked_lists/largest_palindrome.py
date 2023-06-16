"""
 This script was used to answer question 10 
A palindromic number reads the same both ways.
                 The largest palindrome made from the
                   product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

Save the result in the file 102-result
Your file should contain the exact
             result, no new line, no extra space
"""
def fl3():
    currentp = (0, 0)
    product = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            num = str(i * j)
            if (num == num[::-1]):
                if i * j > product:
                    product = i * j
                    currentp = (i, j)
                    print(currentp)
    return currentp

ispal = fl3()

print("calculating largest palindrome from.....")
print(f"{ispal} product: {ispal[0] * ispal[1]}")
