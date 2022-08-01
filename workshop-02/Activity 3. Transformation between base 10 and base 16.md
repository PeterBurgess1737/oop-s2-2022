# Activity 3. Transformation between base 10 and base 16

(You knew this was coming, we love hexadecimal! :) )
In your teams, transform the number 75 from base 10 to base 16 and the number 64FEA from base 16 to base 10.  
In the first transformation from base 10 to base 8, one of you will be the teacher explaining the transformation algorithm, and the others will be the student solving the exercise.  
You will then switch roles from the transformation from binary to decimal.  

## Working
### Transform the number 75 from base 10 to base 16

    75 % 16 = 11 (B)
                        75 / 16 = 4.6875    (truncated) 4
    4  % 16 = 4
                        4  / 16 = 0.25      (truncated) 0

    Result is 4B

### Transform the number 64FEA from base 16 to base 10

    6            4           F           E           A
    6            4           15          14          10

    16^4        16^3        16^2        16^1        16^0

    64FEA = (6 * 16^4) + (4 * 16^3) + (15 * 16^2) + (14 * 16^1) + (10 * 16^0) = 413674
    