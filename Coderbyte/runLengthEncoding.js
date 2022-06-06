/*
Return a compressed string using the run length encoding algorithm
This algorithm works by taking the occurrence of each repeating character and outputting that number along with a single character of the repeating sequence. 

Input: "aabbcde"
Output: 2a2b1c1d1e

Input: "wwwbbbw"
Output: 3w3b1w
*/

function compressedString(str) { 
  var count = 0, result = '', curr = str[0]

  for (var i=0; i<str.length ;++i){
    if(str[i] == curr){
      count++
    } else{
      count = 1
      result += count+curr
      curr = str[i]
    }
  }

  result += count+curr

  return result; 

}
   
// keep this function call here 
console.log(compressedString(readline()));