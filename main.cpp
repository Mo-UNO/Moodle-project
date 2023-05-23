
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n_students, n_courses;
    cout << "Enter the number of students: ";
    cin >> n_students;
    cout << "Enter the number of courses: ";
    cin >> n_courses;
    CStudent students[n_students];
    // CCourse courses[n_courses];

    // Register students
    for (int i = 0; i < n_students; i++)
    {
        cout << "############### Registering Student " << i + 1 << " ###############" << endl;
        fflush(stdin);
        students[i].registerStudent();
    }

    // Register courses
    for (int i = 0; i < n_courses; i++)
    {
        cout << "############### Registering Course " << i + 1 << " ###############" << endl;
        fflush(stdin);
    }

    // Display student information
    cout << "############################### Student Information ###############################" << endl;
    for (int i = 0; i < n_students; i++)
    {
        students[i].getStudentInfo();
    }

    // Display course information
    cout << "=========================== Course Information ===========================" << endl;
    for (int i = 0; i < n_courses; i++)
    {
        cout << "Course #" << (i + 1) << endl;
    }
}