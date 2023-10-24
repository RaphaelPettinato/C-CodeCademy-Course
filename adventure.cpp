#include <iostream>
#include <string>

using namespace std;

int main(){

  // The replay variable controls if the player wants to play it again. 
  int replay = 1;

  /*
    The variables that take care of players decisions: 1) text_choices has the 
    duty to show for the player which decisions he/she made.
    2) the choices that changes the future of the game.
  */ 
  int first_choice, second_choice, third_choice = 0;
  string text_choices[3];

  // The main thing. A lot of if's.

   for(int i = 0; i < replay;){

    cout << "Hi there! Today we're going to do a little game with you!\n";
    cout << "Choose between this two things.\n";
    cout << "The red pill[0]...The blue pill[1]\n";
    cin >> first_choice;

    if(first_choice == 0){
      text_choices[0] = "The red pill";
      cout << "With this pill, you can fly!\n";
      cout << "Would you like to taste the blue one?\n";
      cout << "Yes[0]............No[1]";
      cin >> second_choice;
      if(second_choice == 0){
        text_choices[1] = "Yes";
        cout << "YOU ARE DEAD\n";
        cout << "Would you like to play again?\n";
        cout << "Yes[0]............No[1]\n";
        cin >> third_choice;
        if(third_choice == 0){
          text_choices[2] = "Yes";
          cout << "Your answers in the " << (i + 1) << " game was: \n";
          for(int i = 0; i < 3; i++){
            cout << text_choices[i] << "\n";
          }
          replay++;
          i++;
        } else {
          text_choices[2] = "No";
          cout << "You answers in the game was: \n";
          for(int i = 0; i < 3; i++){
            cout << text_choices[i] << "\n";
          }
          return 0;
        }
      } else if (second_choice == 1) {
        text_choices[1] = "No";
        cout << "Nicelly done, you survived!\n";
        cout << "Would you like to play again?\n";
        cout << "Yes[0]............No[1]\n";
        cin >> third_choice;
      } else {
        cout << "Please, correct number next time.";
        return 0;
      }
    } else if (first_choice == 1) {
      text_choices[0] = "The blue pill";
      cout << "With this pill, you can be a human!\n";
      cout << "Would you like to taste the red one?\n";
      cout << "Yes[0]................No[1]";
      cin >> second_choice;
      if(second_choice == 0){
        text_choices[1] = "Yes";
        cout << "YOU ARE DEAD!\n";
        cout << "Would you like to play again?\n";
        cout << "Yes[0]..............No[1]";
        cin >> second_choice;
        if(third_choice == 0){
          text_choices[2] = "Yes";
          cout << "Your answers in the " << (i + 1) << " game was: \n";
          for(int i = 0; i < 3; i++){
            cout << text_choices[i] << "\n";
          }
          replay++;
          i++;
        } else if (third_choice == 1){
          text_choices[2] = "No";
          cout << "You answers in the game was: \n";
          for(int i = 0; i < 3; i++){
            cout << text_choices[i] << "\n";
          }
          return 0;
        } else {
          cout << "Please, next time input a correct number";
          return 0;
        }
      }
    } else {
      cout << "Please, next time insert a correct digit!";
      return 0;
    }
   }

  return 0;
}