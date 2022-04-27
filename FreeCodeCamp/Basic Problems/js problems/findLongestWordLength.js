//FCC

//1-using the simple way
function findLongestWordLength(str) {
  let mx = 0
  let arr = str.split(' ') //["The", "quick", "brown", "fox", "jumped", "over", "the", "lazy", "dog""]
  for(let i=0; i<arr.length ;++i){
    if(arr[i].length > mx){
      mx = arr[i].length
    }
  }
  return mx;
}

findLongestWordLength("The quick brown fox jumped over the lazy dog");

//2-using max and map methods
/*
function findLongestWordLength(str) {
  //["The", "quick", "brown", "fox", "jumped", "over", "the", "lazy", "dog""]
  //[3, 5, 5, 3, 6, 4, 3, 4, 3]
  return Math.max(...str.split(" ").map(word => word.length));
}
*/

//3-using recursion
/*
function findLongestWordLength(str) {
  const arr = str.split(" ");

  // arr only has 1 element left that is the longest element .. ["The"] => 3
  if (arr.length == 1) {
    return arr[0].length;
  }

  // if arr has multiple elements, remove the first element and recursively call the function
  return Math.max(
    arr[0].length,
    findLongestWordLength(arr.slice(1).join(" "))
  );
}

findLongestWordLength("The quick brown fox jumped over the lazy dog");
*/
