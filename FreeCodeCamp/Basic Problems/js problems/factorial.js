//FCC
//Factorial
//5! = 1 * 2 * 3 * 4 * 5 = 120

//1 - Using the base 
function factorialize(num) {
    let factorial = 1
    for(let i=1; i<=num ;++i){
      //factorial = factorial * i
      factorial *= i
    }
    return factorial;
  }
  
factorialize(20);

//2 - Using recursion
//5! = 5 * 4 * 3 * 2 * 1 = 120
function factorialize(num) {
    if (num === 0) {
      return 1;
    }
    return num * factorialize(num - 1);
  }
  
factorialize(20);











