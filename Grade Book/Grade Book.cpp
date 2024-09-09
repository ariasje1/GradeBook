// Author: Jesus Arias
// GitHub username: ariasje1
// Date: 09/09/2024
// Description:Calculates each student's average score, assigns a corresponding letter grade, and provides an option to repeat the process.

#include <iostream>
#include <string>
#include <iomanip>  // Include for setting precision
using namespace std;

// Function to determine letter grade based on average score
/**
 * @brief Determines the letter grade based on the average score.
 *
 * @param avg_score The average score of a student.
 * @return char The letter grade corresponding to the average score.
 */
static char letter_grade(double avg_score);

int main()
{
    // Constants for the number of students and grades
    const int num_students = 5, num_grades = 4;  // 5 students, 4 grades

    // Arrays to store student names, letter grades, and test scores
    string students_name[num_students];  // Array to store student names
    char student_letter_grades[num_students];  // Array to store letter grades
    double students_test_scores[num_students][num_grades];  // Array to store test scores

    // Program introduction to the user
    cout << "Welcome to the Grade Book Program!" << endl;
    cout << "You will enter the names and four test scores for each of the five students." << endl;
    cout << "The program will calculate the average and assign a letter grade for each student." << endl;

    char repeat;  // Variable to control the loop for repeating the program

    do {
        // Loop through each student to get their name and test scores
        for (int num = 0; num < num_students; num++)
        {
            double total_score = 0;  // Variable to hold the total score for the student
            double avg_score;  // Variable to hold the average score for the student

            // Get the student's name
            cout << "\nEnter student's name: ";
            cin.ignore();  // Ignore the newline left in the buffer
            getline(cin, students_name[num]);  // Use getline to handle names with spaces

            // Input test scores for each student and validate them
            for (int i = 0; i < num_grades; i++)
            {
                cout << "Enter " << students_name[num] << "'s test score for Exam #" << (i + 1) << ": ";
                do
                {
                    cin >> students_test_scores[num][i];  // Read test score
                    // Check if the score is valid (between 0 and 100)
                    if (students_test_scores[num][i] < 0 || students_test_scores[num][i] > 100)
                    {
                        cout << "Please input a grade between 0-100: ";  // Prompt for a valid input
                    }
                } while (students_test_scores[num][i] > 100 || students_test_scores[num][i] < 0);  // Repeat until valid input
                total_score += students_test_scores[num][i];  // Add the valid score to total
            }

            // Calculate the average score and determine the letter grade
            avg_score = total_score / num_grades;  // Calculate average
            student_letter_grades[num] = letter_grade(avg_score);  // Determine letter grade

            // Output the results
            cout << fixed << setprecision(2);  // Set precision for average score output
            cout << students_name[num] << "'s class average is " << avg_score;
            cout << " with a letter grade of " << student_letter_grades[num] << "." << endl;
        }

        // Ask user if they want to repeat the program
        cout << "\nWould you like to run the program again? (Y/N): ";
        cin >> repeat;  // Read user choice

    } while (repeat == 'Y' || repeat == 'y');  // Continue if user inputs 'Y' or 'y'

    // Program exit message
    cout << "Thank you for using the Grade Book Program!" << endl;

    return 0;  // End of the program
}

/**
 * @brief Determines the letter grade based on the average score.
 *
 * This function takes the average score of a student and returns
 * the corresponding letter grade according to the standard grading scale.
 *
 * @param avg_score The average score of a student.
 * @return char The letter grade ('A', 'B', 'C', 'D', 'F').
 */
static char letter_grade(double avg_score)
{
    if (90 <= avg_score && avg_score <= 100)
    {
        return 'A';  // Grade A for scores 90-100
    }
    else if (80 <= avg_score && avg_score <= 89)
    {
        return 'B';  // Grade B for scores 80-89
    }
    else if (70 <= avg_score && avg_score <= 79)
    {
        return 'C';  // Grade C for scores 70-79
    }
    else if (60 <= avg_score && avg_score <= 69)
    {
        return 'D';  // Grade D for scores 60-69
    }
    else
    {
        return 'F';  // Grade F for scores below 60
    }
}

