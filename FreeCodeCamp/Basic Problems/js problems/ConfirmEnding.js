//confirmEnding("Congratulation", "on") should return true.
//confirmEnding("Open sesame", "same") should return true.
//confirmEnding("Open sesame", "sage") should return false.
//confirmEnding("Open sesame", "game") should return false.

// let text = "Hello world!";
// let result = text.substring(1, 4); // ell
// console.log(text.substring(0));    // Hello world!
// console.log(text.substring(1));    // ello world!
// console.log(text.substring(2));    // llo world!
// console.log(text.substring(6));    // world!

function confirmEnding(str, target) {
    var stringLength = str.length;    // 7
    var targetLength = target.length; // 1
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


