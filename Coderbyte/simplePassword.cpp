/*
SimplePassword function take the str parameter being passed and determine if it passes as a valid password that follows the list of constraints:
    1. It must have a capital letter.
    2. It must contain at least one number.
    3. It must contain a punctuation mark or mathematical symbol.
    4. It cannot have the word "password" in the string.
    5. It must be longer than 7 characters and shorter than 31 characters.
If all the above constraints are met within the string, the your program should return the string true, otherwise your program should return the string false. 
For example: if str is "apple!M7" then your program should return "true".

Input: "passWord123!!!!"
Output: false

Input: "turkey90AAA="
Output: true
*/

#include <iostream>
#include <string>

using namespace std;

string SimplePassword(string str) {
  int low=7, high=31;
  bool capital=false, symbol=false, number=false;
  string temp="password";

  if(str.size() >= 31 || str.size() < 7){
    return "false";
  }

  for(int i=0; i<str.size() ;++i){
    if(str[i] >= '0' && str[i] <= '9'){
      number=true;
    } else if(isupper(str[i])){
      capital=true;
    } else if(int(str[i]) >= 33 && int(str[i]) <= 47 
        || int(str[i]) >= 58 && int(str[i]) <= 64){
      symbol=true;
    }

    if(tolower(str[i]) == 'p'){
      int idx = 0;
      bool isExist = true;

      for(int j=i; j<i+temp.size() ;++j){
        if(tolower(str[j]) != temp[idx]){
          isExist = false;
          break;
        }
        idx++;
      }

      if(isExist){
        return "false";
      }
    }
  }

  if(capital && symbol && number){
    return "true";
  }else{
    return "false";
  }
  return str;

}

int main(void) { 
  cout << SimplePassword(coderbyteInternalStdinFunction(stdin));
  return 0;
}