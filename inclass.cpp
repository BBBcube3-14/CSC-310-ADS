#include <iostream>
using namespace std;

struct rectangle{
    int height;
    int width;
    int get_area();
};

int rectangle::get_area(){
    return this->height * this->width;
}

struct school_class{
    int student_id[100];
    char student_grade[100];
    int length = 0;
    void add_student(int id, char grade);
    void print_student();
};

void school_class::add_student(int id, char grade){
    if(length >= 100){
        return;
    }
    student_id[length+1] = id;
    student_grade[length+1] = grade;
    this->length++;
}

void school_class::print_student(){
    for(int i=0; i < this->length; i++){
        cout << this->student_id[i] << ": " << this->student_grade[i] << endl;
    }
}

int main(){
        rectangle rec;
        rec.height = 4;
        rec.width = 5;

        cout << rec.get_area() << endl;

        school_class sc;
        sc.add_student(123,'F');
        sc.add_student(231,'A');

        sc.print_student();
}