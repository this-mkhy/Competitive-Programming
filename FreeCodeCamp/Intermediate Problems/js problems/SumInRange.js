/*
sumAll([1, 4]) should return 10.
sumAll([4, 1]) should return 10.
sumAll([5, 10]) should return 45.
sumAll([10, 5]) should return 45.
*/

function sumAll(arr) {
    let sum = 0;
    let mx = Math.max(arr[0], arr[1])
    let mn = Math.min(arr[0], arr[1])
  
    for(let i=mn; i<=mx ;++i){
      sum+=i;
    }
    return sum;
}
  
sumAll([1, 4]);

/*
function sumAll(arr) {
    let sum = 0;
    for (let i = Math.min(...arr); i <= Math.max(...arr); i++) {
      sum += i;
    }
    return sum;
  }
  
  sumAll([1, 4]);
*/

  
/*
function sumAll(arr) {
    let sum = 0;
    arr.sort((a,b) => a-b)
  
    for(let i=arr[0]; i<=arr[1] ;++i){
      sum+=i;
    }
    return sum;
}
 
sumAll([1, 4]);
*/

