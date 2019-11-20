#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class GradeBook {
public:
	// Mostra mensagem de boas vindas
	void displayMessage(string courseName) {
		cout << "Welcome to the grade book for" << courseName<< "!" << endl;
	}
};

int main()
{
	string nameOfCourse;
	GradeBook gradeBook;

	cout << "Please enter the course name:" << endl;
	getline( cin, nameOfCourse );
	cout << endl;

	gradeBook.displayMessage(nameOfCourse);
	return 0;
}
