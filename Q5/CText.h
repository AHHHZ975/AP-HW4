//#include "Stack.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class CText {
    private:
        std::string name;
        std::string course;
        int age;

    public:
        CText(std::string n, std::string c, int a) : name(n), course (c) {
            //std::cout << "In STUDENT constructor" << std::endl;
            age = a;
        }

        ~CText() {
            //std::cout << "In STUDENT destructor" << std::endl;
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
