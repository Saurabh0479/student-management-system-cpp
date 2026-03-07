#include <bits/stdc++.h>
#include "student.h"
using namespace std;
int main(){
  int choice;
  do{
  cout << "-----WELCOME TO STUDENT MANAGEMENT SYSTEM-----" << endl;
  cout << "1. Add Student" << endl;
  cout << "2. View Students" << endl;
  cout << "3. Search Student" << endl;  
  cout << "4. Update Student" << endl;  
  cout << "5. Delete Student" << endl;  
  cout << "6. EXIT" << endl;

  cout << "Enter your choice: ";
  cin >> choice;

  if(choice == 1){
    addStudent();
  }
  else if(choice == 2){
    viewStudents();
  }
  else if(choice == 3){
    searchStudent();
  } 
  else if(choice == 4){
    updateStudents();
  }
  else if(choice == 5){
    deleteStudent();
  }
    else if(choice == 6){
    cout << "Exit Program" << endl;
  }
  else{
    cout << "Invalid Choice" << endl;
  }
}
while(choice != 6);
return 0;
}
