#include <iostream>
#include <string>

using namespace std;


class Course {
    private:
        string _name; 
        string _examiner;
        int _semOffer;

    public:
        Course(const string name, const string examiner, const int semOffer)
            : _name(name), _examiner(examiner), _semOffer(semOffer){}
        
        string getName() {
            return _name;
        }
};



int main() {
    Course myCourse[2] = {Course("heesung", "jang", 1),
                                            Course("heesung", "jang", 1)};

    cout << myCourse[0].getName() << endl;

    return 0;
}