//Hacker rank problem


function fizzBuzz(number ) {
    for(let count=1; count<=number ;++count){
        if(count % 3 === 0 && count % 5 === 0){
            console.log("FizzBuzz")
        }else if(count % 3 === 0){
            console.log("Fizz")
        }else if(count % 5 === 0){
            console.log("Buzz")
        }else{
            console.log(count)
        }
    }

}

fizzBuzz(10);

/*
let result = fizzBuzz(10);

console.log(result)
 */











