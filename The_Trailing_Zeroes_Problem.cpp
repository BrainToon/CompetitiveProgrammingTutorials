                //SO WE HAVE TO CALCULATE THE NUMBER OF TRAILLING ZEROES IN FACTORIAL OF A NUMBER NUMBER

// NOW TRAILING ZEROES ARE SIMPLY THE NUMBER OF ZEROES AT THE END OF A NUMBER
// SO IT IS SIMPLE
// FOR EXAMPLE 12340000 HAS 4 TRAILING ZEROES
// SIMILARLY WE HAVE TO FIND THE NUMBER OF TRAILING ZEROES IN FACTORIAL OF A NUMBER n 
// NOW WE KNOW ZEROES ARE MADE OF MULTIPLICATION OF 5 AND 2 
//THUS FOR A NUMBER TO BE DIVISIBLE BY 10, IT SHOULD HAVE 5*2 
// SO TO GET THE NUMBER OF TRAILING ZEROES, WE SHOULD CALCULATE THE NUMBER OF 5*2 IN THE NUMBER 
// FOR EXAMPLE 12000 IS EQUAL TO = 2^5 * 3 * 5^3 
// NOW IT HAS 3 PAIRS OF 2*5. THUS IT HAS THREE TRAILING ZEROES 
// THUS MOSTLY IT IS SEEN WE HAVE LESSER NUMBER 5s THAN 2s IN A NUMBER
// SO TO FIND THE TRAILING ZEROES IN NUMBER SIMPLY FIND THE NUMBER OF 5s IN PRODUCT OF A NUMBER 
// BECAUSE GENERALLY POWER OF 5 IS LIMITING FACTOR 
// THUS TO FIND THE POWER OF 5, WE CAN USE THE BELOW SIMPLE FORMULA 
// SUPPOSE NUMBER IS n 
// THEN NUMBER OF TRAILING ZEROES ARE 
// n/5 + n/25 + n/125 + ........... and so on 
// THIS FORMULA WILL GIVE US EXACTLY THE NUMBER OF TRAILING ZEROES IN A NUMBER 
// FOR EXAMPLE WE HAVE 23! 
// THUS 23/5 = 4, AND IN REALITY ALSO 23! HAS 4 TRAILING ZEROES 
// WE WILL HAVE TO CONTINUE THIS PROCESS TILL THE RESULTING FRACTION IS GREATER THAN ONE 
// AS NOW 23/25 IS LESS THAN ONE, SO WE STOP AND 23! HAS 4 TRALING ZEROES 
// SO SIMPLY USE THIS FORMULA LETS SEE THE CODE 

#include<bits/stdc++.h> // header file
using namespace std;
 int main() 
 {
         long long n; // the input number for factorial n!
         cin>> n; // taking input 
         long long trailing_zeroes = 0 ; // this will calculate total trailing zeroes in n!
         // initially it will be obviously zero 
         // generating a for loop to implement the formula written in line 17 
         for (long long i=5; n/i >= 1 /* fraction should be greater than or equal to one*/; i=i*5 )
         {
                 // at each step i multiplies by 5 to become 25 , 125 and so on
                 trailing_zeroes = trailing_zeroes + n/i ;
                 // so tis line implements the formula in line 17. it first calculates the fraction and
                 // then add thatnumber total number of trailing_zeroes 
                 // this will be implemented for each step 
                 // and thus till fraction will be greater than equal to one
                 // for loop will continue and at the end we will get total number of trailing_zeroes
                 
         }
         
         cout << trailing_zeroes; // output of total trailing_zeroes in n!
         return 0;
         // so we got correct output for n = 20 ; that is 4.
         // we changed to long long for safety of avoiding tle and wrong answer results
 }


 