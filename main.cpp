#include <bits/stdc++.h>
#include "student.h"
using namespace std;
int main(){
  int choice;
  do{
  cout << "-----WELCOME TO STUDENT MANAGEMENT SYSTEM-----" << endl;
  cout << "1. Add Students" << endl;
  cout << "2. View Students" << endl;
  cout << "3. EXIT" << endl;

  cout << "Enter your choice: ";
  cin >> choice;

  if(choice == 1){
    addStudents();
  }
  else if(choice == 2){
    viewStudents();
  }
  else if(choice == 3){
    cout << "Exit Program" << endl;
  }
  else{
    cout << "Invalid Choice" << endl;
  }
}
while(choice != 3);
return 0;
}
