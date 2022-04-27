//FCC
//The algorithm to convert from Celsius to Fahrenheit is the temperature in Celsius times 9/5, plus 32

function convert_celsius_to_fahrenheit(celsius) {
  let fahrenheit = celsius * (9/5) + 32;
  return fahrenheit;
}

console.log(convert_celsius_to_fahrenheit(20))

