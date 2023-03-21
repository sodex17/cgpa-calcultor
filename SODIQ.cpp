//The line below is an include statement for the standard input/output library.

#include <iostream>
#include <cctype>
#include <iomanip>

// The line below "using namespace std" statement makes
//it unnecessary to prefix the standard library functions with "std::".

using namespace std;


// This line begins the main function of
// the program, which is the entry point for all C++ programs.
void intro();
int main() {
intro();
    // These lines below declare variables for the number of courses, 
    // the grade for each course, the credit for each course, 
    // the total credit, the total grade, and the CGPA.

    int num_courses;
    double grade, credit, total_credit = 0, total_grade = 0, cgpa;
    

    //This line below prints a message to the console asking the user to enter the 
    //number of courses they have taken, and then reads in the input from the user.

    cout << "Enter the number of courses: ";
    cin >> num_courses;

    
    //This is a for loop that runs once for each course the user has taken. 
    //Inside the loop, the program asks the user to enter the grade and credit for the current course,
    // reads in the input from the user, and updates the total credit and total grade accordingly.

    for (int i = 0; i < num_courses; i++) {
        cout << "Enter the grade for course " << i+1 << ": ";
        cin >> grade;
        cout << "Enter the credit for course " << i+1 << ": ";
        cin >> credit;
        total_credit += credit;
        total_grade += grade * credit;
    }

    // Finally, the program calculates the CGPA by dividing the total grade by the total credit,
    // and then prints the result to the console.
    
    cgpa = total_grade / total_credit;
    
    cout << "Your CGPA is " << cgpa;
    
    return 0;
}

        // Introduction section 
void intro(){
    cout << "\n\n\n\t     CGPA CALCULATOR";
    cout << "\n\n\n\n\t     MADE BY: FATAI SODIQ OKIKIOLUWA ";
    cout << "\n\n\n\n\t     MATRIC NO: H/CTE/22/0687";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
