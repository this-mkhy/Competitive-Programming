//truncateString("A-tisket a-tasket A green and yellow basket", 8) should return the string A-tisket...

/*
function truncateString(str, num) {
    let newStr = []
    
    if(str.length === num){
      return str
    }else{
      if(str.length > num){
        for(let i=0; i<num ;++i){
          newStr.push(str[i])
        }
        return newStr.join("").concat("...");
      }else if( str.length > num && num > 3) 
        num = num - 3
    }
  }
  truncateString("A-tisket a-tasket A green and yellow basket", 8);

*/

  function truncateString(str, num) { 

    if (str.length > num) {
      return str.slice(0, num) + "...";
    } else {
      return str;
    }
  }
