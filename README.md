#Assignment

# Student Grade Calculator

This program calculates the average score and assigns a grade for multiple students based on their test scores. The program asks the user to input student names, test scores, and then calculates the average score and grade for each student. Finally, it displays the results in a well-formatted table.

## Features

- Accepts multiple students and their test scores.
- Validates input to ensure test scores are between 0 and 100.
- Calculates the average score for each student.
- Determines the grade (A, B, C, D, or F) based on the average score.
- Displays a clear and well-formatted results table.

## How to Run

1. Copy the code into a C++ compiler or IDE (e.g., Code::Blocks, Visual Studio, or GCC).
2. Compile the program.
3. Run the executable and follow the instructions provided by the program.

## Input Format

- *Number of students*: The total number of students to process.
- *Student name*: Enter the name of the student (including spaces).
- *Number of test scores*: The number of test scores for the student.
- *Test scores*: Enter scores between 0 and 100 for each test.

## Output Format

The program will display a table with the following columns:
- *Student*: The name of the student.
- *Average*: The average score of the student.
- *Grade*: The grade corresponding to the average score.

### Sample Output


Results:
---------------------------------
Student    | Average  | Grade
---------------------------------
John Doe   | 85.50    | B
Jane Smith | 92.00    | A
---------------------------------


## Functions Used

1. **calculateAverage(int scores[], int numScores)**  
   - Calculates the average score for a given set of test scores.

2. **determineGrade(double avgScore)**  
   - Determines the grade (A, B, C, D, or F) based on the average score.

3. **displayResults(string names[], double averages[], char grades[], int numStudents)**  
   - Displays the results table with student names, average scores, and grades.

## Notes

- The program ensures valid input for scores (0–100).
- Adjust the numStudents variable to handle a specific number of students.
- Supports custom precision for average scores (set to 2 decimal places).
