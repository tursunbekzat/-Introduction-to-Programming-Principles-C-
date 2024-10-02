#include <cstring>
class Subject
{
public:
    char name[30];
    char code[10];
    int credit;
    char instructor[30];

    // Default constructor
    Subject() : credit(0)
    {
        name[0] = '\0';
        code[0] = '\0';
        instructor[0] = '\0';
    }

    // Parameterized constructor
    Subject(const char *name_, const char *code_, int credit_, const char *instructor_)
        : credit(credit_)
    {
        strncpy(name, name_, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
        strncpy(code, code_, sizeof(code) - 1);
        code[sizeof(code) - 1] = '\0';
        strncpy(instructor, instructor_, sizeof(instructor) - 1);
        instructor[sizeof(instructor) - 1] = '\0';
    }
};