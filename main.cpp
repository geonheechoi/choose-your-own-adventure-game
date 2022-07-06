#include <iostream>
using namespace std;

class Game{

private:
// we will add variable here that we only want to accessible in our Game class
 int choice;


public:
//construcor 
 Game(){
   //This will be add where the bulk of our game will run
   cout<<"You are waling in the woods one day, when you across a bear, what do you do"<< endl;
   cout<< "1.Turn around and go back to where you came from "<< endl;
   cout<<"2.Try to sneak pas the bear"<< endl;
   cout<<"3.Poke it with a stick"<< endl;

   choice=getInput(3);
   
   }
   

private: 
// Here we can add methods that are like function that we can call in our Game
  int getInput(int numChoices){

    int input=0;
    cin>>input;
    cin.get();
    
    
  }

 

};

int main() {

  new Game(); //creating a new game object
  return 0;
  
  
}