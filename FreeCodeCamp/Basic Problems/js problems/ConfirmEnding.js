//confirmEnding("Congratulation", "on") should return true.
//confirmEnding("Open sesame", "same") should return true.
//confirmEnding("Open sesame", "sage") should return false.
//confirmEnding("Open sesame", "game") should return false.

function confirmEnding(str, target) {
    var stringLength = str.length;
    var targetLength = target.length;
    var lastString = str.substring(stringLength - targetLength);
    return lastString === target;
}
  
confirmEnding("Bastian", "n");


/*
function confirmEnding(str, target) {
    return str.slice(str.length - target.length) === target;
  }
  
confirmEnding("He has to give me a new name", "name");
*/


