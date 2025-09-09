#A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is
#9009 = 91 x 99
#Find the largest palindrome made from the product of two 3-digit numbers.

#n = n1 x n2 = abccba or defed
digit3 = list(range(100,1000))
pali = 0
for i in range(100,1000):
    for j in range(100,1000):
        k= i*j
        if str(k) == (str(k))[::-1]:
            if pali < k:
                pali = k

print(pali)




        
