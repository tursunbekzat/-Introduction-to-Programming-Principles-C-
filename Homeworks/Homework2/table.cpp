/*Table
     char[] property_ID ;
     char[] color;
     float price;
     int year_made;
     string material;
*/
#include <iostream>
#include <cstring>
using namespace std;

class table
{
private:
    int a;

public:
    char property_ID[10];
    char str_color[10];
    float f_price;
    int i_year_made;
    string str_material;

    // Default constructor
    table() : a(9), f_price(0.0), i_year_made(0)
    {
        property_ID[0] = '\0'; // Initialize as an empty string
        str_color[0] = '\0';   // Initialize as an empty string
        str_material = "";     // Initialize as an empty string
    }

    table(const char *id, const char *color, float price, int year, string material) : f_price(price), i_year_made(year), str_material(material)
    {
        /*
         you can not do that instead of copy it using the function strncpy
                property_ID = id;
                str_color = color;
        */
        strncpy(property_ID, id, sizeof(property_ID) - 1);
        property_ID[sizeof(property_ID) - 1] = '\0';

        strncpy(str_color, color, sizeof(str_color) - 1);
        str_color[sizeof(str_color) - 1] = '\0'; // ensure that end of with null termination
    }

    int getprivateValue()
    {
        return a;
    }
};

int main()
{
    cout << "test\n";
    table tables[4];
    table first = table("AB00123", "white", 15000.50, 2024, "metal");
    tables[0] = first;
    table second = table("AB00124", "red", 14000.50, 2024, "wood");
    tables[1] = second;
    table third = table("AB00125", "black", 12000.50, 2024, "wood");
    tables[2] = third;
    table forth = table("AB00126", "black", 12000.50, 2024, "wood");
    tables[3] = forth;
    // you also can use "cin" to dynamically input value for you app

    // print value
    cout << "Table id " << " Color " << " Price " << " Material" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << tables[i].property_ID << "  " << tables[i].str_color << "  " << tables[i].f_price << "  " << tables[i].str_material << endl;
    }

    return 0;
}