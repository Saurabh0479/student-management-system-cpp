#include "student.h"
void addStudent(){
    student s;
    cout << "Enter Student ID: ";
    cin >> s.id;
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
    cout << "---Students Record---" << endl;

    ifstream file;
    file.open("data.txt");
    while(file >> s.id >> s.name >> s.address >> s.age >> s.phone_number >> s.course){
        cout << "ID: " << s.id << endl;
        cout << "Name: " << s.name << endl;
        cout << "Address: " << s.address << endl;
        cout << "Age: " << s.age << endl;
        cout << "Phone Number: " << s.phone_number << endl;
        cout << "Course: " << s.course << endl;
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