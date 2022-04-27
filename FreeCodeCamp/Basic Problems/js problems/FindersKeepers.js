//returns the first element in the array that passed if func(x) is true
//findElement([1, 3, 5, 8, 9, 10], function(num) { return num % 2 === 0; }) should return 8.
//findElement([1, 3, 5, 9], function(num) { return num % 2 === 0; }) should return undefined.

/*
function findElement(arr, func) {
    let num = 0;
    for(let i=0; i<arr.length ;++i){
      num = arr[i]
      if(func(num))
        return num
    }
    return undefined;
  }
  
findElement([1, 2, 3, 4], num => num % 2 === 0);
*/

function findElement(arr, func) {
    return arr.find(func);
}









