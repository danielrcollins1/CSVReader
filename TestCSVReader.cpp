/*
	Name: TestCSVReader
	Copyright: 2022
	Author: Daniel R. Collins
	Date: 27-11-22 16:13
	Description: Test simple CSV reader class.
*/
#include "CSVReader.h"
#include <iostream>
#include <fstream>
using std::cout;
using std::endl;

// Main test driver
int main(int argc, char** argv) {

	// Test reading TestData1.csv
	std::cout << "Reading data from file.\n";
	vector<vector<string>> table;
	table = CSVReader::readFile("TestData.csv");

	// Print the data
	for (int i = 0; i < table.size(); i++) {
		for (int j = 0; j < table[i].size(); j++) {
			if (j > 0) {
				cout << "|";
			}
			cout << table[i][j];
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}