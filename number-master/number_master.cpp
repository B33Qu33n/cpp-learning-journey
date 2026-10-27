#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std; 

int main (){
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(1, 7);
  int cpunumber = dist(gen);  
  string name; 
  cout << "Hello! My name is Number Master!" << endl; 
  cout << "What is your name: ";
  cin >> name;
  cout << "Nice to meet you " << name << "!\n I have a number between 1 and 7 in my head. Guess it... IF you dare! \n";
  int guess;
  cout << "Your guess: ";
  cin >> guess;
  while (guess != cpunumber){
  if (guess > 7 || guess < 1) {
    cout << "Hey! That wasn't an option!" << endl; 
    return 1; 
  } else {
    cout << "Wrong number! I win!" << endl; 
    if (guess < cpunumber){
    cout << "A little higher! Like my chances of beating you!" << endl;
    } else if (guess > cpunumber){
    cout << "Woah there buddy! Reach for the stars why don'tcha!" << endl;
    }
    cout << "\nTry again... You amuse me!" << endl; 
    cout << "Your guess: ";
    cin >> guess;   
    }
    }
    cout << "Oof! Congratulations, you have defeated me!" << endl;
    cout << "Computer Chose: " << cpunumber << endl; 
    cout << "Thanks for playing!" << endl; 
  return 0;
}
