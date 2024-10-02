#include <iostream>
#include "student.cpp"
#include "class.cpp"
#include "subject.cpp"

using namespace std;

int main()
{
    // Create Student objects
    Student students[3];
    students[0] = Student("S001", "Alice", 20, 55.5, 3.8);
    students[1] = Student("S002", "Bob", 22, 70.2, 3.4);
    students[2] = Student("S003", "Charlie", 21, 65.0, 3.6);

    // Create Room objects
    Room rooms[2];
    rooms[0] = Room(101, 30, true, 20, true);
    rooms[1] = Room(202, 25, false, 10, false);

    // Create Subject objects
    Subject subjects[2];
    subjects[0] = Subject("Mathematics", "MATH101", 4, "Dr. Smith");
    subjects[1] = Subject("Physics", "PHYS102", 3, "Dr. Johnson");

    // Print Student details
    cout << "********** Student Details **********\n";
    cout << "ID      Name       Age  Weight  GPA\n";
    for (int i = 0; i < 3; i++)
    {
        cout << students[i].student_ID << "  " << students[i].name << "  " << students[i].age << "  " << students[i].weight << "  " << students[i].GPA << endl;
    }

    // Print Room details
    cout << "\n********** Class (Room) Details **********\n";
    cout << "Room Number  Available Seats  Has Projector  Computers  Is Lecture\n";
    for (int i = 0; i < 2; i++)
    {
        cout << rooms[i].room_number << "        " << rooms[i].available_seat << "           " << (rooms[i].has_Projector ? "Yes" : "No") << "          " << rooms[i].amount_of_computer << "        " << (rooms[i].is_lecture ? "Yes" : "No") << endl;
    }

    // Print Subject details
    cout << "\n********** Subject Details **********\n";
    cout << "Name        Code    Credit  Instructor\n";
    for (int i = 0; i < 2; i++)
    {
        cout << subjects[i].name << "  " << subjects[i].code << "  " << subjects[i].credit << "  " << subjects[i].instructor << endl;
    }

    return 0;
}