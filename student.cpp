#include "student.h"
void addStudents(){
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