//largestOfFour([[4, 5, 1, 3], [13, 27, 18, 26], [32, 35, 37, 39], [1000, 1001, 857, 1]])
//should return [5,27,39,1001]

//First solution
function largestOfFour(arr) {
    let res = []
  
    for(let i=0; i<arr.length ;++i){
      let largest = arr[i][0]
      for(let j=0; j<arr[i].length ;++j){
        if(arr[i][j]>largest){
          largest = arr[i][j]
        }
      }
      res[i] = largest
    }
   
    return res;
  }
  
largestOfFour([[4, 5, 1, 3], [13, 27, 18, 26], [32, 35, 37, 39], [1000, 1001, 857, 1]])
//should return [5,27,39,1001]

/*
//Second solution
function largestOfFour(arr) {
    return arr.map(function(group) {
        return group.reduce(function(prev, curr) {
            return curr > prev ? curr : prev;
        });
    });
}

largestOfFour([[4, 5, 1, 3], [13, 27, 18, 26], [32, 35, 37, 39], [1000, 1001, 857, 1]])
*/

/*
//Third solution
function largestOfFour(arr) {
    return arr.map(Function.apply.bind(Math.max, null));
}
*/ 

/*
//Forth solution
function largestOfFour(arr) {  
    var maxNumbers = [];
    
    for (var i = 0; i < arr.length; i++) {
      maxNumbers.push(Math.max.apply(null, arr[i]));
    }
    
    return maxNumbers;
}
*/