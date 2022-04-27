//repeatStringNumTimes("abc", 3) should return the string abcabcabc
//repeatStringNumTimes("*", 8) should return the string ********
//repeatStringNumTimes("abc", -2) should return an empty string ("").

function repeatStringNumTimes(str, num) {
    var strArr=[];
  
    for(let i=0; i<num ;i++){
      strArr.push(str);
    }
  
    return strArr.join("");
    //return strArr.toString();
  }
  
repeatStringNumTimes("abc", 3);

/*
function repeatStringNumTimes(str, num) {
    let repStr = ""
  
    for(let i=0; i<num ;++i){
        repStr = repStr + str 
       //repStr += str 
    }
      
    return repStr
  }
  
repeatStringNumTimes("abc", 3);
*/

//Recursion
/*
function repeatStringNumTimes(str, num) {
    if (num < 1) {
      return "";
    }
    else {
        return str + repeatStringNumTimes(str, num - 1);
      } 
}
repeatStringNumTimes("abc", 3);
  */


//Another Recursive Solution
/*
function repeatStringNumTimes(str, num) {
    return num > 0 ? str + repeatStringNumTimes(str, num - 1) : '';
}
*/

/*
function repeatStringNumTimes(str, num) {
return (num<1) ? "": str.concat(repeatStringNumTimes(str,num-1));}
*/

/*
let repeatStringNumTimes = (str, num) => {
    return num > 0 
    ? str + repeatStringNumTimes(str, num - 1) 
    : '';
}
*/
