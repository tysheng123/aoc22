#include <iostream>
#include <fstream>
using namespace std;

/*
opponent: A - rock
          B - paper
          C - scissors
  player: X - rock      1
          Y - paper     2
          Z - scissors  3
lose 0 pt
draw 3 pt
win 6 pt
*/


bool is_win(char o, char p){
  if(p == 'X' and o == 'B' or p == 'Y' and o == 'A' or p == 'Z' and o == 'B'){
    return true;
  }
}
  

  
bool is_draw(char o, char p){
  if(o == p){
    return true;
  }
}

int main() {

  string strat;
  string opp, player;
  int score;
  
  ifstream stratFile("d1p1input.txt");
  
    while(getline(stratFile, strat));
  
    opp = strat[0];
    player = strat[2];
  
    if(is_win(opp, player)){
      score += 6;
    }
    if(is_draw(opp, player)){
      score += 3;
    }

  cout << score << endl;
}
  

/*
bool is_lose(char o, char p){
  if(o == 'X' and p == 'B' or o == 'Y' and p == 'A' or o == 'Z' and p == 'B'){
    return true;
  }
}

*/