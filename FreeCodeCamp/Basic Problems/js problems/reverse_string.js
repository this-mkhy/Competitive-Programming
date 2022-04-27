
//FCC

//1 - Using built-In Functions
/*
function reverseString(str) {
  //convert string to array .. arr = ["h","e","l","l","o"]
  let arr = str.split("")

  //reverse array .. newArr = ["o","l","l","e","h"]
  let newArr = arr.reverse()

  //convert array to string .. newStr = "olleh"
  let newStr = newArr.join("")

  //Chaining in one line
  //let newStr= str.split("").reverse().join("");

  return newStr;
}

reverseString("hello");
*/

//2 - Using decrementing For Loop
/*
function reverseString(str) {
  let newStr= "";

  for(let i=str.length-1; i>=0 ;--i){
    //newStr += str[i] 
    newStr = newStr + str[i] 
  }

  return newStr;
}

reverseString("hello");
*/

//3 - Using recursion
//This solution is not the best one and will be really slow if the String is very long
function reverseString(str) {
    if (str === "")
      return ""
    else
      return reverseString(str.substr(1)) + str.charAt(0)
    
  }
  
  reverseString("hello");
  