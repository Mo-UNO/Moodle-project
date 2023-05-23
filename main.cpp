
#include <iostream>
#include <vector>
using namespace std;

class CSStudent {
public:
    string name;
    int id;

    void getStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class CCCourse {
public:
    string course_name;
    

    void getCourseInfo() {
        cout << "Course Name: " << course_name << endl;
        
    }
};

int main() {
    int n_students, n_courses;
    cout << "Enter the number of students: ";
    cin >> n_students;
    cout << "Enter the number of courses: ";
    cin >> n_courses;

    vector<CSStudent> students;
    vector<CCCourse> courses;

    // Register students
    for (int i = 1; i <= n_students; i++) {
        cout << "Registering Student " << i << endl;
        CSStudent student;
        cout << "Enter student name: ";
        cin >> student.name;
        cout << "Enter student ID: ";
        cin >> student.id;
        students.push_back(student);
        cout << endl;
    }

    // Register courses
    for (int i = 1; i <= n_courses; i++) {
        cout << "Registering Course " << i << endl;
        CCCourse course;
        cout << "Enter course name: ";
        cin >> course.course_name;
        
        
        courses.push_back(course);
        cout << endl;
    }

    // Display student information
    cout << "Student Information:" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << "Student " << (i + 1) << endl;
        students[i].getStudentInfo();
        cout << endl;
    }

    // Display course information
    cout << "Course Information:" << endl;
    for (int i = 0; i < courses.size(); i++) {
        cout << "Course " << (i + 1) << endl;
        courses[i].getCourseInfo();
        cout << endl;
    }

    return 0;
}
