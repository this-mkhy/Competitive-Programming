/*
Have the function take the num parameter being passed and return the next number in the sequence according to the following rule: 
    To generate the next number in a sequence read off the digits of the given number, counting the number of digits in groups of the same digit. 
        For example, the sequence beginning with 1 would be: 1, 11, 21, 1211, ... 
        The 11 comes from there being "one 1" before it and the 21 comes from there being "two 1's" before it. 
        So your program should return the next number in the sequence given num.

Input: 1211
Output: 111221

Input: 2466
Output: 121426
*/

// 1 => 11
// 2 => 12
// 3 => 13
// 11 => 21
// 111 => 31
// 1111 => 3121
// 1     11         21        1211
// 2466 => 121426
// 24666 => 121436

function nextNumber(num) {  
  var strArr = num.toString().split(""), res = []

  for(var i=0; i<strArr.length ;++i){
    if(strArr[i+1] !== strArr[i]){
      res.push(1, strArr[i])
    }

    if(strArr[i+1] === strArr[i] && strArr[i+2] === strArr[i]){
      res.push(3, strArr[i])
      i+=2
    }

    if(strArr[i+1] === strArr[i]){
      res.push(2, strArr[i])
      i++
    }
  } 

  return res.join(""); 

}
   
// keep this function call here 
console.log(nextNumber(readline()));