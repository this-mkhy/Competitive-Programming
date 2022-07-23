//factorial of 10 in one line code

console.log((function f(n){return ((n > 1) ? n * f(n-1) : n)})(10));
//------------------------
//factorial of 10 in more than one line code using recursion
/*
function factorial(num) {
  if (num < 0) 
        return -1;
  else if (num == 0) 
      return 1;
  else {
      return (num * factorial(num - 1));
  }
}
factorial(10);
*/

//------------------------
//factorial of 10 in more than one line code using for loop
/*
function factorial(num) {
  if (num === 0 || num === 1)
    return 1;
  for (var i = num - 1; i >= 1; i--) {
    num *= i;
  }
  return num;
}
factorial(10);
*/