// booWho(true) should return true
// booWho(false) should return true
// booWho([1, 2, 3]) should return false

function booWho(bool) {
    if ( bool === true || bool === false){
      return true;
    }
    else{
      return false; 
    }
}
  
booWho(null);

/*
function booWho(bool) {
    return (bool === true || bool === false) ? (true) : (false);
}
  
booWho(null);
*/

/*
function booWho(bool) {
    if(bool === false){
      return true;
    }
    return bool === true;
}
  
booWho(null);
*/









