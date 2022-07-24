//Count all vowels : ['a', 'e', 'i', 'o', 'u']

//using for-of and includes method
function getVowelsCount (sentence) {
    let vowelsCount = 0
    const vowels = ['a', 'e', 'i', 'o', 'u']

    for (let char of sentence) {
        if (vowels.includes(char.toLowerCase())) {
            vowelsCount++
        }
    }

    return vowelsCount
}
console.log(getVowelsCount("MohAmed"));	//3
//------------------------
//using split and reduce methods
function getVowelsCount(str) {
	const vowels = ["a", "e", "i", "o", "u"];
	return str.split('').reduce((prev, ch, idx) => (vowels.includes(ch.toLowerCase())) ? prev + 1 : prev, 0);
}
//------------------------
// using for-of regx
function getVowelsCount (sentence) {
    let vowelsCount = 0
    const vowels = ['a', 'e', 'i', 'o', 'u']

    for (let char of sentence) {
        if (/[aeiou]/gi.test(char.toLowerCase())) {
            vowelsCount++
        }
    }

    return vowelsCount
}
//------------------------
//regx and match
function getVowelsCount(sentence) {
  return sentence.match(/[aeuio]/gi) ? sentence.match(/[aeuio]/gi).length : 0;
}

console.log(getVowelsCount("MohAmed"));	//3