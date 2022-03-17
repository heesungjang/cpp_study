#include <iostream>
#include <string>


using namespace std;

class Course {
    private:
        string _name;
        string _examiner;
        int _semOffer;

    public:
        Course(const string name)
            : _name(name)
        {}

        Course(const string name, const string examiner)
            : _name(name), _examiner(examiner)
        {}

        Course(const string name, const string examiner, const int semOffer)
            :   _name(name), _examiner(examiner), _semOffer(semOffer)
        {}

        string getName() const {
            return _name;
        }

        string getExaminer() const {
            return _examiner;
        }

        bool compare(const Course) const;
};



int main() {
    Course classA("heesung", "zion", 1);
    Course classB("heesung", "zion", 2);


    cout << classA.getName() << endl;
    cout << classA.getExaminer() << endl;

    cout << boolalpha;

    cout << classB.getName() << endl;
    cout << classB.getExaminer() << endl;
    cout << classA.compare(classB) << endl;


    return 0;
}

bool Course::compare(const Course compareTo) const {
    // 이러한 경우  private member에 접근이 가능하다.
    if(_name == compareTo._name && _examiner == compareTo._examiner && compareTo._semOffer){
        return true;
    } else {
        return false;
    }
}