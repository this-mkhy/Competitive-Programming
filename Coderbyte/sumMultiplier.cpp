// Sum Multiplier
// return the string true if any two numbers can be multiplied so that the answer is greater than double the sum of all the elements in the array. 
//If not, return the string false. 
// if arr is [2, 5, 6, -6, 16, 2, 3, 6, 5, 3] then the sum of all these elements is 42 and doubling it is 84. 
// There are two elements in the array, 16 * 6 = 96 and 96 is greater than 84, so your program should return the string true.
// Examples
// Input: {2, 2, 2, 2, 4, 1}
// Output: false
// Input: {1, 1, 2, 10, 3, 1, 12}
// Output: true

#include <iostream>
#include <string>

using namespace std;

string SumMultiplier(int arr[], int arrLength) {
  int sumMul = 0;
  for(int i=0; i<arrLength ; ++i){
    sumMul += arr[i];
  }

  sumMul *= 2;

  for(int i=0; i<arrLength-1 ;++i){
    for(int j=i+1; j<arrLength ;++j){
      if(arr[i]*arr[j] > sumMul){
        return "true";
      }
    }
  }
  return "false";

}

int main(void) { 
  int A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  cout << SumMultiplier(A, arrLength);
  return 0;
    
}
