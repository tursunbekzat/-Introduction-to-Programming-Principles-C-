#include <cstring>
class Student
{
public:
    char student_ID[10];
    char name[30];
    int age;
    float weight;
    float GPA;

    // Default constructor
    Student() : age(0), weight(0.0), GPA(0.0)
    {
        student_ID[0] = '\0';
        name[0] = '\0';
    }

    // Parameterized constructor
    Student(const char *id, const char *name_, int age_, float weight_, float GPA_)
        : age(age_), weight(weight_), GPA(GPA_)
    {
        strncpy(student_ID, id, sizeof(student_ID) - 1);
        student_ID[sizeof(student_ID) - 1] = '\0';
        strncpy(name, name_, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
    }
};