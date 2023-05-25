
#include <iostream>
#include "include/student.h"

using namespace std;

int main()
{
    int n_students, n_pgstudents, n_courses;
    cout << "Enter the number of students: ";
    cin >> n_students;
    cout << "Enter the number of postgradute students: ";
    cin >> n_pgstudents;
    cout << "Enter the number of courses: ";
    cin >> n_courses;

    CStudent students[n_students];
    CPG_Student pg_students[n_pgstudents];
    CCourse courses[n_courses];

    // Register students
    for (int i = 0; i < n_students; i++)
    {
        cout << "############### Registering Student " << i + 1 << " ###############" << endl;
        fflush(stdin);
        students[i].registerStudent();
        students[i].calculateGpa();
    }

    // Register postgraduate students
    for (int i = 0; i < n_pgstudents; i++)
    {
        cout << "############### Registering Post Graduate Student " << i + 1 << " ###############" << endl;
        fflush(stdin);
        pg_students[i].registerStudent();
        pg_students[i].calculateGpa();
    }

    // Register courses
    for (int i = 0; i < n_courses; i++)
    {
        cout << "############### Registering Course " << i + 1 << " ###############" << endl;
        fflush(stdin);
        courses[i].addCourse();
    }

    // Display student information
    cout << "############################### Student Information ###############################" << endl;
    for (int i = 0; i < n_students; i++)
    {
        students[i].getStudentInfo();
    }

    // Display post graduate student information
    cout << "############################### Post Graduate Student Information ###############################" << endl;
    for (int i = 0; i < n_pgstudents; i++)
    {
        pg_students[i].getStudentInfo();
    }

    // Display course information
    cout << "############################### Course Information ###############################" << endl;
    for (int i = 0; i < n_courses; i++)
    {
        courses[i].getCourseInfo();
    }
}