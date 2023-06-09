#include "../include/student.h"
#include <cstring>
#include <iostream>

/* ========================== CStudent Class ========================== */
CStudent::CStudent() : m_studentId{0}, m_studentGrades{0}, m_studentScore{0} {
  m_studentName[0] = '\0';
  m_studentEmailUsername[0] = '\0';
  m_studentEmailPassword[0] = '\0';
  m_studentMajor[0] = '\0';
}

// -------- getters -------- //
int CStudent::getStudentId() const { return m_studentId; }
float CStudent::getStudentScore() const { return m_studentScore; }
const float *CStudent::getStudentGrades() const { return m_studentGrades; }
const char *CStudent::getStudentName() const { return m_studentName; }
const char *CStudent::getStudentMajor() const { return m_studentMajor; }
const char *CStudent::getStudentEmail() const { return m_studentEmailUsername; }
const char *CStudent::getStudentPassword() const {
  return m_studentEmailPassword;
}

// -------- setters -------- //
void CStudent::setStudentId(const int newId) { m_studentId = newId; }

void CStudent::setStudentScore(const float newScore) {
  if (newScore <= 5.0 && newScore >= 0.0) {
    m_studentScore = newScore;
  }
}

void CStudent::setStudentGrades(const float *newGrades) {
  for (int i = 0; i < 5; i++) {
    m_studentGrades[i] = newGrades[i];
  }
}

void CStudent::setStudentName(const char *newName) {
  strcpy(m_studentName, newName);
}

void CStudent::setStudentMajor(const char *newMajor) {
  strcpy(m_studentMajor, newMajor);
}

void CStudent::setStudentEmail(const char *newEmail) {
  strcpy(m_studentEmailUsername, newEmail);
}

void CStudent::setStudentPassword(const char *newPassword) {

  strcpy(m_studentEmailPassword, newPassword);
}

// -------- helpers -------- //
void CStudent::registerStudent() {
  std::cout << "Enter the student name: ";
  std::cin.getline(m_studentName, 50);
  fflush(stdin);

  std::cout << "Enter ID: ";
  std::cin >> m_studentId;
  fflush(stdin);

  std::cout << "Enter major (max. length 10): ";
  std::cin.getline(m_studentMajor, 10);
  fflush(stdin);
  std::cout << "Enter email/username (max. length 10): ";
  std::cin.getline(m_studentEmailUsername, 10);
  fflush(stdin);

  std::cout << "Enter password (max. length 10): ";
  std::cin.getline(m_studentEmailPassword, 10);
  fflush(stdin);

  for (int i = 0; i < 5; i++) {
    std::cout << "Enter grade #" << i + 1 << ": ";
    std::cin >> m_studentGrades[i];
    fflush(stdin);
  }
}

void CStudent::getStudentInfo() {
  std::cout << "=================== STUDENT REPORT ===================\n";
  std::cout << "Name: " << m_studentName << "\n";
  std::cout << "ID: " << m_studentId << "\n";
  std::cout << "Major: " << m_studentMajor << "\n";
  std::cout << "Email/Username: " << m_studentEmailUsername << "\n";
  std::cout << "Password: " << m_studentEmailPassword << "\n";
  std::cout << "Grades: ";
  for (int i = 0; i < 5; i++)
    std::cout << m_studentGrades[i] << " ";
  std::cout << "\n";
  std::cout << "Score: " << m_studentScore << "\n";
}

void CStudent::calculateGpa() {
  float sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += m_studentGrades[i];
  }

  m_studentScore = sum / 100.0;
}

/* ========================== CPG_Student Class ========================== */
CPG_Student::CPG_Student() { m_pgStudentJobTitle[0] = '\0'; }

// -------- getters -------- //
const char *CPG_Student::studentJobTitle() const { return m_pgStudentJobTitle; }

// -------- setters -------- //
void CPG_Student::setStudentJobTitle(const char *newJobTitle) {
  strcpy(m_pgStudentJobTitle, newJobTitle);
}

// -------- helpers -------- //
void CPG_Student::registerStudent() {
  CStudent::registerStudent();
  std::cout << "Enter the student's job title: ";
  std::cin.getline(m_pgStudentJobTitle, 20);
  fflush(stdin);
}
void CPG_Student::getStudentInfo() {
  CStudent::getStudentInfo();
  std::cout << "Job title: " << m_pgStudentJobTitle << "\n";
}

/* ========================== CCourse Class ========================== */
CCourse::CCourse() {}

// getters
const char *CCourse::getCourseName() const { return m_courseName; }

const char *CCourse::getCourseCode() const { return m_courseCode; }
const float CCourse::getCourseCost() const { return m_courseCost; }

// setters
void CCourse::setCourseName(const char *newCourseName) {
  strcpy(m_courseName, newCourseName);
}
void CCourse::setCourseCode(const char *newCourseCode) {
  strcpy(m_courseCode, newCourseCode);
}
void CCourse::setCourseCost(const float newCourseCost) {
  m_courseCost = newCourseCost;
}

void CCourse::addCourse() {
  std::cout << "Enter Course Name: ";
  std::cin.getline(m_courseName, 20);
  fflush(stdin);
  std::cout << "Enter Course Code: ";
  std::cin >> m_courseCode;
  fflush(stdin);
  std::cout << "Enter Course Cost: ";
  std::cin >> m_courseCost;
}

void CCourse::getCourseInfo() {
  std::cout << "=================== COURSE INFO ===================\n";
  std::cout << "Course Name: " << m_courseName << std::endl;
  std::cout << "Course Code: " << m_courseCode << std::endl;
  std::cout << "Course Cost: " << m_courseCost << std::endl;
}
