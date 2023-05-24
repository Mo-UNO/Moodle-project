#ifndef STUDENT_H
#define STUDENT_H

class CStudent
{
public:
    CStudent();

    // -------- getters -------- //
    int getStudentId() const;
    float getStudentScore() const;
    const float *getStudentGrades() const;
    const char *getStudentName() const;
    const char *getStudentMajor() const;
    const char *getStudentEmail() const;
    const char *getStudentPassword() const;

    // -------- setters -------- //
    void setStudentId(const int);
    void setStudentScore(const float);
    void setStudentGrades(const float *);
    void setStudentName(const char *);
    void setStudentMajor(const char *);
    void setStudentEmail(const char *);
    void setStudentPassword(const char *);

    // -------- helpers -------- //
    void registerStudent();
    void getStudentInfo();
    void calculateGpa();

private:
    int m_studentId;
    float m_studentScore;
    float m_studentGrades[5];
    char m_studentName[50];
    char m_studentMajor[10];
    char m_studentEmailUsername[10];
    char m_studentEmailPassword[10];
};

class CPG_Student : public CStudent
{
public:
    CPG_Student();
    // -------- getters -------- //
    const char *studentJobTitle() const;
    // -------- setters -------- //
    void setStudentJobTitle(const char *);
    // -------- helpers -------- //
    void registerStudent();
    void getStudentInfo();

private:
    char m_pgStudentJobTitle[20];
};
class CCourse
{
public:
    //getter
    const char* getCourseName()const;
    const char* getCourseCode()const;
    const float getCourseCost()const;
    //setter
    void setCourseName(const char*);
    void setCourseCode(const char*);
    void setCourseCost(const float);
    void addCourse();
    void getCourseInfo();
   private:
    char m_courseName[20];
    char m_courseCode[5];
    float m_courseCost;

} ;
#endif // STUDENT_H
