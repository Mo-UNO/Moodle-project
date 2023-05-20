#include <cstring>
#include <iostream>
#include "../include/student.h"

CStudent::CStudent()
    : m_studentId{0},
      m_studentGrades{0},
      m_studentScore{0}
{
    m_studentName[0] = NULL;
    m_studentEmailUsername[0] = NULL;
    m_studentEmailPassword[0] = NULL;
    m_studentMajor[0] = NULL;
}

// -------- getters -------- //
int CStudent::getStudentId() const
{
    return m_studentId;
}
float CStudent::getStudentScore() const
{
    return m_studentScore;
}
const float *CStudent::getStudentGrades() const
{
    return m_studentGrades;
}
const char *CStudent::getStudentName() const
{
    return m_studentName;
}
const char *CStudent::getStudentMajor() const
{
    return m_studentMajor;
}
const char *CStudent::getStudentEmail() const
{
    return m_studentEmailUsername;
}
const char *CStudent::getStudentPassword() const
{
    return m_studentEmailPassword;
}

// -------- setters -------- //
void CStudent::setStudentId(const int newId)
{
    m_studentId = newId;
}

void CStudent::setStudentScore(const float newScore)
{
    if (newScore <= 4.0 && newScore >= 0.0)
    {
        m_studentScore = newScore;
    }
}

void CStudent::setStudentGrades(const float *newGrades)
{
    for (int i = 0; i < 5; i++)
    {
        m_studentGrades[i] = newGrades[i];
    }
}

void CStudent::setStudentName(const char *newName)
{
    strcpy(m_studentName, newName);
}

void CStudent::setStudentMajor(const char *newMajor)
{
    strcpy(m_studentMajor, newMajor);
}

void CStudent::setStudentEmail(const char *newEmail)
{
    strcpy(m_studentEmailUsername, newEmail);
}

void CStudent::setStudentPassword(const char *newPassword)
{

    strcpy(m_studentEmailPassword, newPassword);
}

void CStudent::registerStudent()
{
    std::cout << "Enter the student name: ";
    gets(m_studentName);
    std::cin.sync();

    std::cout << "Enter ID: ";
    std::cin >> m_studentId;
    std::cin.sync();

    std::cout << "Enter major (max. length 10): ";
    gets(m_studentMajor);
    std::cin.sync();

    std::cout << "Enter email/username (max. length 10): ";
    gets(m_studentEmailUsername);
    std::cin.sync();

    std::cout << "Enter password (max. length 10): ";
    gets(m_studentEmailPassword);
    std::cin.sync();

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> m_studentGrades[i];
        std::cin.sync();
    }
}

void CStudent::getStudentInfo()
{
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

    std::cout << "Score: ";
    if (m_studentScore == 0.0)
        std::cout << "NOT CALCULATED";
    else
        std::cout << m_studentScore;
    std::cout << "\n";
    std::cout << "======================================================\n";
}

void CStudent::calculateGpa()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += m_studentGrades[i];
    }

    m_studentScore = sum / 100.0;
}
