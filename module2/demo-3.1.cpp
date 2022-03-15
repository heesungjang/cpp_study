#include <iostream>
#include <string>


using namespace std;

struct Course {
    string name;
    string examiner;
    int semOffer;

    Course(const string name, const string examiner, int semOffer)
        : name(name), examiner(examiner), semOffer(semOffer){}
};

class CourseClass {
    private:
        string name;
        string examiner;
        int semOffer;
    
    public:
        CourseClass(const string name, const string examiner, 
                              const int semOffer)
            : name(name), examiner(examiner), semOffer(semOffer) {}
        
        string getName() const;
        void setName(const string &);

        int getSemOffer() const;
        void setSemOffer(const int &);

        void setExaminer(const string &);
        void getExaminer(string &) const;
};



int main() {
    string staffname;

    Course cplusplus("heesung", "zion", 1);

    cout << "Using course struct" << endl;
    cout << "Course:    " << endl;
    cout << "   Name:       " << cplusplus.name  << endl;
    cout << "   Examiner:   " << cplusplus.examiner << endl;
    cout << "   SemOffer:   " << cplusplus.semOffer << endl;

    
    CourseClass cClass("heesung", "zion", 2);
    cClass.getExaminer(staffname);
    cClass.setName("New name!!");
    cout << "Course:    " << endl;
    cout << " Name:     " << cClass.getName() << endl;
    cout << " Examiner: " << staffname << endl;
    cout << " SemOffer: " << cClass.getSemOffer() << endl;


    
    
    

    return 0;
}

string CourseClass::getName() const {
    return name;
}

void CourseClass::setName(const string & studentName){
    name = studentName;
    return;
}

int CourseClass::getSemOffer() const {
    return semOffer;
}

void CourseClass::setSemOffer(const int &newSemOffer) {
    semOffer = newSemOffer;
}



void CourseClass::setExaminer(const string &examinerName) {
    examiner = examinerName;
}

void CourseClass::getExaminer(string &examinerName) const {
    examinerName = examiner;
    return;
}





