# Activity 2. Transformation between base 10 and base 8

In your teams, transform the number 75 from base 10 to base 8 and the number 1346742 from base 8 to base 10.  
In the first transformation from base 10 to base 8, one of you will be the teacher explaining the transformation algorithm, and the others will be the student solving the exercise.  
You will then switch roles from the transformation from binary to decimal.  

## Working
### Transform the number 75 from base 10 to base 8

    75 % 8 = 3
                        75 / 8 = 9.375  (truncated) 9
    9  % 8 = 1
                        9  / 8 = 1.125  (truncated) 1
    1  % 8 = 1
                        1  / 8 = 0.125  (truncated) 0

    Result is: 1 1 3

### Transform the number 1346742 from base 8 to base 10

     1       3       4       6       7       4       2

    8^6     8^5     8^4     8^3     8^2     8^1     8^0

    1346742 = (1 * 8^6) + (3 * 8^5) + (4 * 8^4) + (6 * 8^3) + (7 * 8^2) + (4 * 8^1) + (2 * 8^0) = 380386