#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip> // manipuladores de fluxo parametrizados
using std::setprecision;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	fCount = 0;
}

void GradeBook::setCourseName(string name) {
	if (name.length() <= 25) {
		courseName = name;
	}
	else {
		courseName = name.substr(0, 25);
		cout << "Name\"" << name << "\" exceeds maximum length (25)."
			<< "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {
	cout << "Welcome to the grade book for \n" << getCourseName()
		<< "!" << endl;
}

void GradeBook::determineClassAverage() {
	int total; // soma das notas inseridas pelo usuário
	int gradeCounter; // número total de notas inseridas
	int grade; // valor da nota
	double average; // Número com ponto de fração decimal para a média

	total = 0; // Inicializa o total
	gradeCounter = 0; // Inicializa o contador de loops

	// Fase de processamento
	cout << "Enter grade of -1 to quit: ";
	cin >> grade; // insere a nota ou valor de sentinela

	// Faz um loop até ler o valor de sentinela inserido pelo usuário
	while (grade != -1) { // enquanto a nota é -1
		total = total + grade;
		gradeCounter = gradeCounter++;

		// solicita entrada e lê a próxima nota fornecida pelo usuário
		cout << "Enter grade of -1 to quit: ";
		cin >> grade; // insere a nota ou valor de sentinela
	}
	// fase de término
	if (gradeCounter != 0) { // se usuário inseriu pelo menos uma nota...
		// Calcula a média de todas as notas inseridas
		average = static_cast<double>(total) / gradeCounter;

		// exibe o total e a média (com dois dígitos de precisão
		cout << "\nTotal of all " << gradeCounter << " grades entered is "
			<< total << endl;
		cout << "Class average is " << setprecision(2) << fixed << average << endl;
	} 
	else { // Nenhuma nota foi inserida, assim gera a saída da mensagem apropriada
		cout << "No grades were entered" << endl;
	}

}

void GradeBook::inputGrades() {
	int grade;
	cout << "Enter the letter grades." << endl
		<< "Enter the EOF character to end input." << endl;

	while ((grade = cin.get()) != EOF) {
		switch (grade)
		{
		case 'A':
		case 'a':
			aCount++;
			break;
		case 'B':
		case 'b':
			bCount++;
			break;
		case 'C':
		case 'c':
			aCount++;
			break;
		case 'D':
		case 'd':
			dCount++;
			break;
		case 'F':
		case 'f':
			fCount++;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			cout << "Incorrect letter grade entered."
				<< "Enter new grade." << endl;
			break;
		}
	}
}

void GradeBook::displayGradeReport() {
	cout << "\n\nNumber of students who received each letter grade:"
		<< "\nA:" << aCount
		<< "\nB:" << bCount
		<< "\nC:" << cCount
		<< "\nD:" << dCount
		<< "\nF:" << fCount
		<< endl;

}

