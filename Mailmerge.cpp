#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_name, last_name, study_program;
    string academic_year;

    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << "Please enter your last name: ";
    cin >> last_name;
    cin.ignore();
    cout << "Please enter your study program: ";
    getline(cin, study_program);
    cout << "Please enter your academic year (e.g., 2027/2028): ";
    cin >> academic_year;

    cout <<"To: " << first_name << " " << last_name <<"\n\n";
    cout << "Dear " << first_name << ",\n\n";
    cout << "Date: " << __DATE__ << "\n\n";

    cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University \n"
         << "Admissions Board has approved your application for admission to the " << academic_year << " academic year.\n\n"
         << "You have been offered a place for the following course: \n"
         << "PROGRAM: " << study_program << "\n\n"
         << "As a student of Makerere University, you will be part of a historic\ninstitution dedicated to academic excellence and innovation.Please ensure\nthat you report to the Academic Registrar's office with your original\nacademic documents for verification during the orientation week.\n\n"
         << "We look forward to welcoming you to the Makerere University.\n\n"
         << "Yours sincerely,\n"
         << "John Doe \nRegistra\n" ;
     return 0;
}