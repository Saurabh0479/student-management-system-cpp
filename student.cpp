#include "student.h"
void addStudent(){
    student s;
    student temp;

    cout << "Enter Student ID: ";
    cin >> s.id;

    ifstream check;
    check.open("data.txt");

    bool exists = false;
    while(check >> temp.id >> temp.name >> temp.address >> temp.age >> temp.phone_number >> temp.course){
        if(temp.id == s.id){
            exists = true;
            break;
        }
    }
    check.close();
    if(exists){
        cout << "ID already exists. Please enter another ID." <<endl;
        return;
    }

    cout << "Enter Student's Name: ";
    cin >> s.name;
    cout << "Enter Student's Address: ";
    cin >> s.address;
    cout << "Enter Student's Age: ";
    cin >> s.age;
    cout << "Enter Student's Phone Number: ";
    cin >> s.phone_number;
    cout << "Enter Student's Course: ";
    cin >> s.course;

    ofstream file;
    file.open("data.txt" , ios::app);
    file << s.id << " " << s.name << " " << s.address << " " << s.age << " " << s.phone_number << " " << s.course << endl;
    file.close();
    cout << "Student added successfully." << endl;
}

void viewStudents(){
    student s;
    
    ifstream file;
    file.open("data.txt");
bool found = false;
while(file >> s.id >> s.name >> s.address >> s.age >> s.phone_number >> s.course){
    found = true;
    cout << "---Students Record---" << endl;
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Address: " << s.address << endl;
    cout << "Age: " << s.age << endl;
    cout << "Phone Number: " << s.phone_number << endl;
    cout << "Course: " << s.course << endl;
}
if(!found){
cout << "No Record Found" << endl;
}
file.close();
}

void searchStudent(){
    student s;
    int search_id;
    cout << "Enter ID to search the student: ";
    cin >> search_id;
    
    ifstream file;
    file.open("data.txt");
    bool found = false;
    while(file >> s.id >> s.name >> s.address >> s.age >> s.phone_number >> s.course){
        if(s.id == search_id){
        cout << "ID: " << s.id << endl;
        cout << "Name: " << s.name << endl;
        cout << "Address: " << s.address << endl;
        cout << "Age: " << s.age << endl;
        cout << "Phone Number: " << s.phone_number << endl;
        cout << "Course: " << s.course << endl;
        found = true;
        cout << "Student found!!" << endl;
        break;
        }  
    }
    if(!found){
        cout << "Student not found!!" << endl;
    }
    file.close();
}

void updateStudents(){
    student s;
    int update_id;
    cout << "Enter the ID of student for updation: ";
    cin >> update_id;

    ifstream file;
    file.open("data.txt");
    ofstream temp;
    temp.open("temp.txt");
    bool found = false;
    while(file >> s.id >> s.name >> s.address >> s.age >> s.phone_number >> s.course){
        if(s.id == update_id){
            
            found = true;
            cout << "Student found!!" << endl;
            cout << "Enter new Student's Name: ";
            cin >> s.name;
            cout << "Enter new Student's Address: ";
            cin >> s.address;
            cout << "Enter new Student's Age: ";
            cin >> s.age;
            cout << "Enter new Student's Phone Number: ";
            cin >> s.phone_number;
            cout << "Enter new Student's Course: ";
            cin >> s.course;
     }
     temp << s.id << " "
          << s.name << " "
          << s.address << " "
          << s.age << " "
          << s.phone_number << " "
          << s.course << " " << endl;

  }
  file.close();
  temp.close();
  if(found){
      remove("data.txt");
      rename("temp.txt" , "data.txt");
    cout << "Student updated successfully!!" << endl;
}
    else{
         cout << "Student not found!!" << endl;
         remove("temp.txt");
    }
}

void deleteStudent(){
    student s;
    int delete_id;
    cout << "Enter the ID of student to delete: ";
    cin >> delete_id;

    ifstream file;
    file.open("data.txt");
    ofstream temp;
    temp.open("temp.txt");
    bool found = false;
    while(file >> s.id >> s.name >> s.address >> s.age >> s.phone_number >> s.course){
        if(s.id == delete_id){
            found = true;
            cout << "Student found!!" << endl;     
            continue;
     }
     temp << s.id << " "
          << s.name << " "
          << s.address << " "
          << s.age << " "
          << s.phone_number << " "
          << s.course << " " << endl;

  }
  file.close();
  temp.close();

  if(found){
      remove("data.txt");
      rename("temp.txt" , "data.txt");
    cout << "Student deleted successfully!!" << endl;
}
    else{
          cout << "Student not found. Invalid ID." << endl;
          remove("temp.txt");
    }
}
