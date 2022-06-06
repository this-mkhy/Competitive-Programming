/*
Return second lowest and second greatest
The function take the array of numbers stored in arr and return the second lowest and second greatest numbers, separated by a space. 

Input: [1, 42, 42, 180]
Output: 42 42

Input: [4, 90]
Output: 90 4
*/

function secLowestAndGreatest(arr) { 
  arr.sort(function(a,b){
    return a-b
  })

  var newArr = [arr[0]], res = []

  for(var i=1; i<arr.length ;++i){
    if(arr[i-1] !== arr[i]){
      newArr.push(arr[i])
    }

  }
  
  res.push(newArr[1], newArr[newArr.length-2])

  return res.join(',')
}
   
// keep this function call here 
console.log(secLowestAndGreatest(readline()));

//7 7 12 98 106 => 12 98
