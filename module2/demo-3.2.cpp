#include <iostream>
#include <string>

using namespace std;


class Course {
    private:
        string _name;
        string _examiner;
        int _semOffer;
    
    public:
        Course(const string name, const string examiner
                    , const int semOffer)
            : _name(name), _examiner(examiner), _semOffer(semOffer)
        {}

        string getName() const;
        string getExaminer() const;
        int getSemOffer() const;
};




int main() {

    Course aClass("heesung", "zion", 2);
    Course bClass("zion", "heesung", 1);
    bClass = aClass;

    cout <<  bClass.getName() << endl;
    cout << bClass.getExaminer() << endl;
    cout << bClass.getSemOffer() << endl;

    return 0;
}


string Course::getName() const {
    return _name;
}

string Course::getExaminer() const {
    return _examiner;
}

int Course::getSemOffer() const {
    return _semOffer;
}