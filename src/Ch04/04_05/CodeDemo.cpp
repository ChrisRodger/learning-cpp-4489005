// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <iomanip>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    // student id, student name
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    // course id, course name, credits                                
    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    // student id, course id, grade                                
    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here

    /*
    Grade  | Points
    ----------------
    A      | 4.0
    B      | 3.0
    C      | 2.0
    D      | 1.0
    F      | 0.0
    */

    float total_points = 0.0f;
    int total_credits = 0;
    float temp_grade_to_points = 0.0f;
    int temp_credits = 0;

    for(auto grade : grades) {
        if(grade.get_student_id() == id) {
            switch(grade.get_grade()) {
                case 'A':
                    temp_grade_to_points = 4.0;
                    break;
                case 'B':
                    temp_grade_to_points = 3.0;
                    break;
                case 'C':
                    temp_grade_to_points = 2.0;
                    break;
                case 'D':
                    temp_grade_to_points = 1.0;
                    break;
                case 'F':
                    temp_grade_to_points = 0.0;
                    break;
                default:
                    temp_grade_to_points = 0.0;
                    break;
            }
            std::cout << "Grade " << grade.get_grade() << " is worth " << temp_grade_to_points << " points" << std::endl;
            for (auto course : courses) {
                if(course.get_id() == grade.get_course_id()) {
                    std::cout << course.get_name() << " is worth " << course.get_credits() << " credits" << std::endl;
                    temp_credits = course.get_credits();
                }
            }
            total_points += (temp_grade_to_points * temp_credits);
            std::cout << "Total points: " << total_points << std::endl;
            total_credits += temp_credits;
            std::cout << "Total credits: " << total_credits << std::endl;

        }
        GPA = total_points / (float)total_credits;
    }

    


    /*
    for the student id
        
    */

    // total points = credits * grades, summed for each course

    std::string student_str;
    student_str = students[id-1].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << std::fixed << std::setprecision(2) << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
