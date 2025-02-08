#include <iostream>
#include <fstream>
#include <filesystem>
#include <unistd.h>
#include <cstdlib>
using namespace std;
namespace fs = filesystem;

void makeFile(string fileName) {
	ofstream file(fileName);
	file.close();

}	

void delFile(string fileName) {
	if (fs::remove(fileName)) {
		cout << fileName << " was removed.\n";
	} else {
		cout << "File not found or error removing.\n";
	}
}

int main(int argc, char* argv[]) {
	// values for the files
	string filename;

	// main code
	
	if (argc == 1) {
		cout << "Usage: ke [-n (filename) ] [ -d (filename) ]\n";
	}
	// this catches the options (below code)
	int opt;
	while ((opt = getopt(argc, argv, "n:d:")) != -1) {
		switch (opt) {
			case 'n':
				makeFile(optarg);
				cout << optarg << " created sucessfully.\n";
				system("ls -l");
				break;
			case 'd':
				delFile(optarg);
				system("ls -l");
				break;
			default:
				cout << "Usage: ke [-n (filename) ] [-d (filename) ]\n";
				return 1;
			}
	}

	return 0;
}
