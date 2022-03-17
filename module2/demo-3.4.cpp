#include <iostream>
#include <string>

using namespace std;

class Course {
    private:
        string _name;
        string _examiner;
        int _semOffer;

    public:
        Course(const string name, const string examiner, 
                     const int semOffer)
            : _name(name), _examiner(examiner), _semOffer(semOffer){}
        
        string getName() const;
        string getExaminer() const;
        int getSemOffer() const;
        void print() const;
};



int main() {
    Course classA("heesung", "zion", 1);

    classA.print();

    return 0;
}


string Course::getName() const { return _name;}
string Course::getExaminer() const { return _examiner;}
int Course::getSemOffer() const { return _semOffer;}
void Course::print() const {
    cout << "Name:      " << getName() << endl;
    cout << "Examiner:  " << getExaminer() << endl;
    cout << "SemOffer:  " << getSemOffer() << endl;
}
