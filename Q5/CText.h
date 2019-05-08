#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class CText {
    private:
        string name;
        string course;
        int age;

    public:
        CText(std::string n, std::string c, int a) : name(n), course (c) {            
            age = a;
        }

        ~CText() {            
        }

        std::string getName() {
            return name;
        }

        std::string getCourse() {
            return course;
        }

        int getAge() {
            return age;
        }
        string getText(){
            return "TEXT";
        }
};
