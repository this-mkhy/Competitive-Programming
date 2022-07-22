//Ascending Sorting without built in methods => 1 6 6 20 30

let arr =[20,6,1,6,30];

for (let i=0 ; i<arr.length ;++i) {
  for (let j=i+1; j<arr.length ;++j) {
    if (arr[i]>arr[j]) {
      let ref;
      ref=arr[i];
      arr[i]=arr[j];
      arr[j]=ref;
    }
  }
}
console.log(arr);

//Descending Sorting without built in methods => 30 20 6 6 1
/*
let arr =[20,6,1,6,30];

for (let i=0 ; i<arr.length ;++i) {
  for (let j=i+1; j<arr.length ;++j) {
    if (arr[i]<arr[j]) {
      let ref;
      ref=arr[i];
      arr[i]=arr[j];
      arr[j]=ref;
    }
  }
}

console.log(arr);
*/