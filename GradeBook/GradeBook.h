#include <string>
using std::string;

class GradeBook {
public:
	GradeBook(string);
	void setCourseName(string);
	string getCourseName();
	void displayMessage();
	void determineClassAverage();
	void inputGrades();
	void displayGradeReport();
	int maximum(int, int, int);
private:
	string courseName;
	int studentMaximum;
	int aCount;
	int bCount;
	int cCount;
	int dCount;
	int fCount;
};