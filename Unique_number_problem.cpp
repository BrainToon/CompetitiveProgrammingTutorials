// WELCOME TO BRAINTOON YOUTUBE CHANNEL
// IN THIS VIDEO WE WILL TALK ABOUT OUR FIRST PROBLEM IN COMPETITIVE PROGRAMMING QUESTION SERIES
// SERIES WILL CONTAIN SOME RANDOM QUESTIONS AND WILL CONTAIN SELECTED GOOD QUESTIONS THAT CAN HEP YOU A LOT 
// THESE QUESTIONS HAVE BEEN TAKEN AFTER PROPER SEARCH FROM FAMOUS COMPETITIVE WEBSITES 
// LIKE CODEFORCES CODECHEF SPOJ ETC 
// SO TODAY WE WILL TALK ABOUT THE UNIQUE NUMBER PROBLEM 
// PROBLEM IS TO FIND A UNIQUE NUMBER IN AN ARRAY OF DUPLICATE NUMBERS
// PROBLEM STATEMENT:
// WE ARE GIVEN AN ARRAY OF DUPLICATE NUMBERS WHIC ARE PUT TOGETHER AND ARRAY HAS SIZE N. THE ARRAY 
// CONTAINS ONE UINIQUE NUMBER IN IT 
// OUR TASK IS TO FIND THAT UNIQUE NUMBER AMONG THE DUPLICATES IN THE ARRAY 
// ALSO NOTE THAT THIS TASK WE HAVE TO DO IN O(logN) TIME COMPLEXITY 
// EXAMPLE INPUT:
//5
//0 1 1 2 2
//OUTPUT:
//0 
// THUS SINCE THE ARRAY IS OF 5 NUMBERS and the elements of the array are 0 1 1 2 2 and both
// 1 AND 2 HAVE DUPLICATES AND ONLY 0 IS UNIQUE SO OUTPUT IS 0 
// SO FIRST LINE OF INPUT CONTAINS THE SIZE OF ARRAY N 
// NEXT LINE CONTAINS THE INPUT THE ELEMENTS OF THE ARRAY 
// OUTPUT LINE CONTAINS THE OUTPUT OF THE UNIQUE NUMBER IN THE ARRAY 
// THIS WE HAVE TO DO IN LOGN TIME COMPLEXITY 
// SO LETS SOLVE IT 


//SOLUTION:
// WE HAVE OUR HEADER FILE
#include <bits/stdc++.h>
using namespace std;
// now we know that LOG N  TIME COMPLEXITY OR THE LOGARITHMIC ALGORITHM OFTEN HALVES THE INPUT SIZE AT EACH STEP 
// THIS IS BECAUSE LOG N TO THE BASE 2 EQUALS THE NUMBER OF TIMES N MUST BE DIVIDED BY 2 TO GET 1 
// SO WE WILL DESIGN SUCH A ALGORITHM THAT HALVES THE INPUT SIZE AT EACH STEP THEN ONLY WE WILL
// HAVE LOGARITHMIC RUN TIME 
// SO WE WILL CREATE SUCH ALGORITHM 

int result(int array[], int n) {
        // we define three variables here
        // lower_limit, higher_limit, and middle 
        // through this we will divide the array into parts 
        // we will divide array into half half parts everytime and thus check the duplicacy and uniqueness of numbers
        // thus we will divide the array size n by 2 everytime and implement logarithmic approach 
        // thus these variables will help us 
        int lower_limit = 0;
        int higher_limit = n/2 ; // thus we divide n by 2 everytime and thus half the araay into parts 
        int middle;
        // implementing a while condition block to process the result 
        while(lower_limit<higher_limit) {
                middle = (lower_limit+higher_limit)/2;
                // this further denotes the half point of the already halved array 
                // now lower_limit denotes starting ppoint of halved array 
                // higher_limit denotes the end point of halved array part 
                // and now we will check in this array 
                // also middle variable denotes the mid point of the half array 
                // so we implement a if conditon to process result
                if(array[2*middle]==array[2*middle+1]) {
                        lower_limit = middle + 1 ;
                        // so this will check inside our sub array 
                        // if an elemnt is duplicate then it will leave that two elements 
                        // and lower limit will now check in more subhalved array as now lower_limit has 
                        // now become equal to mmiddle plus 1, that means the part between middle plus 1 and higher_limit
                        // will be checked now that is n is divided by 2 again 
                        // so like this all parts will be checked 
                                }
                                // also if duplicacy is not found in that sub array we shift to check and confirm 
                                // that too in previous subarray
                                // thus we decrement the higher_limit and assign it the value to middle
                                else {
                                        higher_limit = middle;
                                        
                                        // thus if duplicacy is not found in one subaarray we confirm that in previous
                                        // sub array too  
                        // this will continue till higher_limit is greater than lower_limit and it should be obviously 
                        // greater
                        // thus like this we check the duplicacy and uniqueness of the number by halving the array 
                        // continuosly and thus it becomes logaritmic in nature 
                        // so whole array will be checked very fast in log N TIME 
                                } 
                
        }
                                return array[2*lower_limit]; // we return the output which will be equal to 2*lower_limit
                                // this is becuase element at 2*lower_limit will contain the unique element 
                                // as we are discarding the elements back, so 2*lower limit element will give unique number
                                // lets check it
        
                
}


int main() {
        // input of n 
        int n;
        cin >> n;
        // we declare an array to get the n numbers
        int array[n];
        // input of array numbers 
        for(int i=0; i<n; i++) {
                cin>>array[i];
        }
        // we will now generate a function result that we will find uinque number for us 
        // we will apply logarithmic algorithm in that function. so lets create it.
        cout<<result(array,n);// call for the function for output, we pass array in the function
     // so we got the right output 0   
        
        // so we again got the right output
        // thus like this we can solve the problem in log n TIME
        // we return array[2*lower_limit] because we are comparing elemnts in form of 2*middle and so on;
        // thus 2*lower limit gives us the right answer 
        // so if you like the video please hit the like button and subscribe our channel for more upcoming videos
        // thank you :D
                return 0;
        }