def digSum(n): 
    s = 0; 
    r = 0; 
    while(n): 
        r = n % 10; 
        s = s + r; 
        n = int(n / 10); 
    return s; 
def findX(n): 
   
    for i in range(n + 1): 
        if (i + digS(i) == n): 
            return i; 
      
 
    return -1; 

n = 43; 
print("x = ", findX(n)); 
