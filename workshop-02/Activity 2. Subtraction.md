# Activity 2. Subtraction
Subtract 11 from the number 111011101011. Transform your result back to decimal.  
Subtract 1110101 from the number 111011101011. Transform your result back to decimal.  

## Working
### Subtract 11 from the number 111011101011

      0 1110 1110 1011
    - 0 0000 0000 0011
    
    twos compliment
    - 0 0000 0000 0011
    = 1 1111 1111 1101
    
    so instead do 

      1 1111 1111 1110        (carry bits)

      0 1110 1110 1011
    + 1 1111 1111 1101

    = 0 1110 1110 1000

### Subtract 1110101 from the number 111011101011
      0 1110 1110 1011
    - 0 0000 0111 0101
    
    twos compliment
    - 0 0000 0111 0101
    = 1 1111 1000 1011
    
    so instead do 

      1 1111 0001 0110        (carry bits)

      0 1110 1110 1011
    + 1 1111 1000 1011
    = 0 1110 0111 0110