#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

enum StudentName
{
    JACKJACK,
    DASH,
    VIOLET,
    NUM_STUDENT,
};

int main()
{
//   cout << sizeof(Rectangle)  << endl;

//   Rectangle rect_arr[10];
  
//   cout << sizeof(rect_arr) << endl;

//   rect_arr[0].length = 1;
//   rect_arr[1].length =2;

    int student_scores[NUM_STUDENT];

    student_scores[JACKJACK] = 100;
    student_scores[DASH] = 50;

    
    return 0;
}
