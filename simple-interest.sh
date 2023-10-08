  #!/bin/bash
   # This script calculates simple interest given principal,
   # annual rate of interest and time period in years.
   # Do not use this in production. Sample purpose only.
   # Author: Upkar Lidder (IBM)
   # Additional Authors:
   # bharath-manjunath
   # Input:
   # p, principal amount
   # t, time period in years
   # r, annual rate of interest
   # Output:
   # simple interest = p*t*r
   echo "Enter the principal amount :"
   read principal
   echo "Enter rate of interest per year:"
   read roi
   echo "Enter time period in years:"
   read time
   si=`expr $principal \* $time \* $roi / 100`
   echo "The simple interest is: "
   echo $si
