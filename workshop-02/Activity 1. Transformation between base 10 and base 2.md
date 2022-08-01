# Activity 1. Transformation between base 10 and base 2.

In your teams, transform the number 75 from base 10 to base 2 and the number 110111011 from base 2 to base 10.  
In the first transformation from base 10 to base 2, one of you will be the teacher explaining the transformation algorithm, and the others will be the student solving the exercise.  
You will then switch roles from the transformation from binary to decimal.  

## Working
### Transform the number 75 from base 10 to base 2

    75 % 2 = 1
                        75 / 2 = 37.5   (truncated) 37  
    37 % 2 = 1
                        37 / 2 = 18.5   (truncated) 18
    18 % 2 = 0
                        18 / 2 = 9      (truncated) 9
    9  % 2 = 1
                        9 / 2 = 4.5     (truncated) 4
    4  % 2 = 0
                        4 / 2 = 2       (truncated) 2
    2  % 2 = 0
                        2 / 2 = 1       (truncated) 1
    1  % 2 = 1
                        1 / 2 = 0.5     (truncated) 0

    Result is: 1 0 0 1 0 1 1

### Transform the number 110111011 from base 2 to base 10

     1       1       0       1       1      1       0       1       1

    256     128     64      32      16      8       4       2       1
    
    110111011 = 256 + 128 + 32 + 16 + 8 + 2 + 1 = 443
