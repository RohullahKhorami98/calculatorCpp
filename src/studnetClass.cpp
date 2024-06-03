#include <iostream>
#include <sstream>
using namespace std;

class Student{
public:
    int ages;
    int standards;
    string first_names;
    string last_names;
    void set_age(int setage);
    void set_standard(int setstandard);
    void set_first_name(string setfirst_name);
    void set_last_name(string setlast_name);
    int get_age();
    int get_standard();
    string get_first_name();
    string get_last_name();
    string to_string();
    
    
};
void Student::set_age(int getage){
    ages=getage;
}
void Student::set_standard(int setstandard){
     standards = setstandard;
}
void Student::set_first_name(string setfirst_name){
    first_names = setfirst_name;
}
void Student::set_last_name(string setlast_name){
    last_names = setlast_name;
}
int Student::get_age(){
    return ages;
}
int Student::get_standard(){
    return standards;
}
string Student::get_first_name(){
    return first_names;
}
string Student::get_last_name(){
    return last_names;
}
string Student::to_string(){
    string strs = std::to_string(ages) + ","+first_names+","+last_names+","+std::to_string(standards);
    return strs;
}

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
