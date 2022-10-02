/*
[1, 2, 3, 5], [1, 2, 3, 4, 5] should return [4].
    1 1 2 2 3 3 4 5 5
[1, "calf", 3, "piglet"], [7, "filly"] should return [1, "calf", 3, "piglet", 7, "filly"].
[1, "calf", 3, "piglet"], [7, "filly"] should return an array with six items.
*/


function diffArray(arr1, arr2) {
    var newArr = []; 
 
    //concatenate the two arrays and sort the items in growing order
    var mergedArr = arr1.concat(arr2).sort(); 
 
    //loop through the ordered array and push to the empty newArr only the items that have not a twin in the ordered arr (only items that are not equal to the previous nor to the next item)
    for(var i=0; i<mergedArr.length; i++) {
        if(mergedArr[i] !== mergedArr[i+1] && mergedArr[i] !== mergedArr[i-1]){
        newArr.push(mergedArr[i]);
        }
    }
 
    return newArr;
 }

/*
function diffArray(arr1, arr2) {
    var newArr = [];   
    var newConcat = arr1.concat(arr2);

    for (var i = 0; i < newConcat.length; i++) {
      if (arr1.indexOf(newConcat[i]) === -1 || arr2.indexOf(newConcat[i]) === -1) {
       newArr.push(newConcat[i]);
      }
    }
    return newArr;
  }
  
diffArray([1, 2, 3, 5], [1, 2, 3, 4, 5]);
*/



