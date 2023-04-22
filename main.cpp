#include <iostream>
#include <vector>
#include <set>

class Person {
public:
    Person() {}

    Person(std::string name) {
        this->name = name;
    }

    std::string GetName() {
        return this->name;
    }

private:
    std::string name;
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string s1{"str1"};
    std::cout << s1 << std::endl;
    std::string s2 = {"str2"};
    std::cout << s2 << std::endl;
    auto *s3 = new std::string{"str3"};
    std::cout << *s3 << std::endl;


    Person person("man");
    std::cout << person.GetName() << std::endl;
    Person person1 = {"DSB"};
    std::cout << person1.GetName() << std::endl;

    std::vector<int> vec;
    vec = { 1, 2, 3, 4, 8, 9, 3, 2, 1, 0, 4, 8 };
    std::set<int> st(vec.begin(), vec.end());
    std::cout << "fuck you!!!" << std::endl;

    return 0;
}
