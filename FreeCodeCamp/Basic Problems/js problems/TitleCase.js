//titleCase("I'm a little tea pot") should return the string I'm A Little Tea Pot
//titleCase("sHoRt AnD sToUt") should return the string Short And Stout

// replact work with string
// let text = "Visit Microsoft!";
// let result = text.replace("Microsoft", "W3Schools");
// console.log(result); // Visit W3Schools!

/*
function titleCase(str) {
    let lower = str.toLowerCase().split(" ");   //[i'm, a, little, tea, pot]
    var capA = [];
    for(var i=0; i < lower.length ; i++){
      var val = lower[i];
      capA.push(val.replace(val[0], val[0].toUpperCase())) ;    
    }
    return capA.join(" ");
}
  
titleCase("I'm a little tea pot");
*/

function titleCase(str) {
  let lower = str.toLowerCase().split(" ");   //[i'm, a, little, tea, pot]
  var capA = [];
  for(var i=0; i < lower.length ; i++){
    var val = lower[i].toString();
    let capitalized = val.charAt(0).toUpperCase() + val.slice(1);
    capA.push(capitalized) ;    
  }
  return capA.join(" ");
}

titleCase("I'm a little tea pot");

// Chaining 
/*
function titleCase(str) {
  return str
    .toLowerCase()
    .split(" ")
    .map(val => val.replace(val.charAt(0), val.charAt(0).toUpperCase()))
    .join(" ");
}

titleCase("I'm a little tea pot");
*/







