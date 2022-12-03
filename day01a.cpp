#include <iostream>
#include <fstream>
using namespace std;

int main() {

  string myText; 
  int myCal;
  int totalCal = 0;
  int maxCal = 0;
  
  ifstream numFile("aos22day1.txt"); 
  
  while(getline(numFile, myText)){
    if(myText != ""){ 
      myCal = stoi(myText);
      totalCal += myCal;
      
    }else{
      if(totalCal > maxCal){
        maxCal = totalCal;
      }
      totalCal = 0;
    }
  }
  cout << maxCal << endl;
}































