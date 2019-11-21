#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Analysis.h"

void Analysis::processExamResults() {
	// Inicializando variáveis nas declarações
	int passes = 0;
	int failures = 0;
	int studentCounter = 0;
	int result;

	//process
	while (studentCounter <= 10) {
		cout << "Enter result (1 = pass, 2 = fail)";
		cin >> result;
		result ? passes++ : failures++;
		studentCounter++;
	}

	cout << "Passed " << passes << "\nFailed " << failures << endl;
	if (passes > 8) {
		cout << "Raise tuition " << endl;
	}
}