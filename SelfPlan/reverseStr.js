// Write a function that reverses a string

// Array methods
function reverseString(str) {
    return str.split("").reverse().join("");
}

// Array reduce
function reverseString(str) {
    return str.split('').reduce((prev, curr) => curr + prev, '')
}

// Array forEach
function reverseString(str) {
    let reversedString = ''

    str.split('').forEach(char => {
        reversedString = char + reversedString
    })

    return reversedString
}

console.log(reverseString("MohAmed"));	//demAhoM