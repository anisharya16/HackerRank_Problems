#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
    {
       public:
      int age,standard;
      string na1,na2;
       void set_age(int age)
           {
             this->age=age;
       }
     void set_standard(int standard)
           {
             this->standard=standard;
       }
     void set_first_name(string na)
           {
             na1=na;
       }
     void set_last_name(string na)
           {
             na2=na;
       }
    int get_age()
        {
        return age;
    }
     int get_standard()
        {
        return standard;
    }
    string get_last_name()
        {
        return na2;
    }
     string get_first_name()
        {
        return na1;
    }
   string to_string()
    {
        stringstream ob;
        char c = ',';
        ob << age << c << na1 << c << na2 << c << standard;
        return ob.str();
    }
    
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
