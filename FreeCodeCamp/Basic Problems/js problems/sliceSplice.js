/*

slice()
    The slice() method returns a shallow copy of a portion of an array into a new array object selected from start to end (end not included) where start and end represent the index of items in that array. The original array will not be modified.
    The slice() method returns selected elements in an array, as a new array.
    The slice() method selects from a given start, up to a (not inclusive) given end.
    The slice() method does not change the original array.

    const fruits = ["Banana", "Orange", "Lemon", "Apple", "Mango"];
    const citrus = fruits.slice(1, 3);  // Orange,Lemon

    const fruits = ["Banana", "Orange", "Lemon", "Apple", "Mango"];
    const myBest = fruits.slice(-3, -1);    // Lemon,Apple

splice()
    The splice() method changes the contents of an array by removing or replacing existing elements and/or adding new elements in place. To access part of an array without modifying it, see slice().
    The splice() method adds and/or removes array elements.
    The splice() method overwrites the original array.

    const fruits = ["Banana", "Orange", "Apple", "Mango"];
    // At position 2, add 2 elements
    fruits.splice(2, 0, "Lemon", "Kiwi");   // Banana,Orange,Lemon,Kiwi,Apple,Mango

    const fruits = ["Banana", "Orange", "Apple", "Mango", "Kiwi"];
    fruits.splice(2, 2);    // Banana,Orange,Kiwi
*/

function frankenSplice(arr1, arr2, n) {
    // create copy of arr2 to mutate it
    let copyArr2 = arr2.slice();
    for (let i = 0; i < arr1.length; i++) {
        // into index n of copyArr2
        // We won’t be deleting any elements so the next argument is 0.
        // insert the item 
        copyArr2.splice(n, 0, arr1[i]);
        // We increment the index n by one. This will ensure that every item from the arr1 is inserted into copyArr2 in the proper index position.
        n++;
    }
    return copyArr2;
}

// function frankenSplice(arr1, arr2, n) {
//     let copyArr2 = arr2.slice();
//     copyArr2.splice(n, 0, ...arr1);
//     return copyArr2;
// }











