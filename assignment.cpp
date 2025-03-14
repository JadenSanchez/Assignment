#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function to calculate the average score
double calculateAverage(int scores[], int numScores) {
    int sum = 0;  // Initialize sum to store total scores
    for (int i = 0; i < numScores; i++) {
        sum += scores[i];  // Add each score to the total
    }
    // Return the average as a double
    return static_cast<double>(sum) / numScores;
}

// Function to determine the grade based on the average score
char determineGrade(double avgScore) {
    // Use conditional statements to assign letter grades
    if (avgScore >= 90 && avgScore <=100) {
        return 'A';
    } else if (avgScore >= 80 && avgScore <=89) {
        return 'B';
    } else if (avgScore >= 70 && avgScore <=79) {
        return 'C';
    } else if (avgScore >= 60 && avgScore <=69) {
        return 'D';
    } else {
        return 'F';  // Return 'F' for scores below 60
    }
}

// Function to display student results
void displayResults(string names[], double averages[], char grades[], int numStudents) {
    // Print table header
    cout << "\nResults:" << endl;
    cout << "---------------------------------" << endl;
    cout << left << setw(10) << "Student" << " | " 
         << setw(8) << "Average" << " | " 
         << "Grade" << endl;
    cout << "---------------------------------" << endl;

    // Loop through all students and print their details
    for (int i = 0; i < numStudents; i++) {
        cout << left << setw(10) << names[i] << " | " 
             << setw(8) << fixed << setprecision(2) << averages[i] << " | " 
             << grades[i] << endl;
    }
    cout << "---------------------------------" << endl;  // Print table footer
}

int main() {
    int numStudents;  // Variable to store the number of students

    // Ask user for the number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Arrays to store student data
    string names[numStudents];  // Names of students
    double averages[numStudents];  // Average scores for students
    char grades[numStudents];  // Grades corresponding to averages

    // Loop to process each student's data
    for (int i = 0; i < numStudents; i++) {
        int numScores;  

        // Input the student's name
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin.ignore();  // Clear input buffer to handle newlines properly
        getline(cin, names[i]);  // Read full name including spaces

        // Input the number of test scores
        cout << "Enter number of test scores: ";
        cin >> numScores;

        int scores[numScores];  // Array to store scores for the current student

        // Loop to input and validate each test score
        for (int i = 0; i < numScores; i++) {
            while (true) {  // Validation loop
                cout << "Enter score " << i + 1 << ": ";
                cin >> scores[i];
                if (scores[i] >= 0 && scores[i] <= 100) {
                    break;  // Exit loop if score is valid
                } else {
                    cout << "Invalid score. Please enter a value between 0 and 100." << endl;
                }
            }
        }

        // Calculate average score and assign a grade
        averages[i] = calculateAverage(scores, numScores);  // Compute average for current student
        grades[i] = determineGrade(averages[i]);  // Determine corresponding grade
    }

    // Display the results for all students
    displayResults(names, averages, grades, numStudents);

    return 0;
}
