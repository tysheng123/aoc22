#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main(){

  string myText; 
  int myCal;
  int totalCal = 0;
  int maxCal = 0;
  int m1 = 0;
  int m2 = 0;
  int m3 = 0;
  int top3max;
  
  ifstream numFile("aosd1p2input.txt"); 
  
  while(getline(numFile, myText)){
    if(myText != ""){ 
      myCal = stoi(myText);
      totalCal += myCal;
    
    }else{
      if(totalCal > maxCal){
        maxCal = totalCal;
        if (m1 == 0){
          m1 = maxCal;
        }else if(m2 == 0){
          m2 = maxCal;
        }else{
          m3 = maxCal;
        }
      }
      
    }
    totalCal = 0;
    
  }
  cout << maxCal << endl;
  top3max = m1 + m2 + m3;
  cout << "the total calories the top three elves are carrying: "<< top3max << endl;
  
}










/*
int main() {

  string myText; 
  int myCal;
  int totalCal = 0;
  int maxCal = 0;
  int total = 0;
  vector < int > max[3];

  
  ifstream numFile("aosd1p2input.txt"); 
  
  while(getline(numFile, myText)){
    if(myText != ""){ 
      myCal = stoi(myText);
      totalCal += myCal;
      
    }else{
      for(int i = 0; i < 3; i++){
        if(totalCal != max[i]){
          if(totalCal > maxCal){
            maxCal = totalCal;
            max.push_back(maxCal);
            maxCal = 0;
          }
        }
      }  
    }
      totalCal = 0;
  }
  cout << maxCal << endl;
}


else{
      for(int i = 0; i < 3; i++){
        if(totalCal != max[i]){
          if(totalCal > maxCal){
            maxCal = totalCal;
            max.push_back(maxCal);
            maxCal = 0;
          }
        }  
      }
      totalCal = 0;
    }
*/