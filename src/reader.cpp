#include <iostream>
#include <string>
#include "utils.hpp"
#include "parser.hpp"

using namespace std;

int main(int argc, char ** argv)
{
	//assumption argv is just the file name being parsed
	if(argc != 3)
	{
		cerr << "Incorrect arguments: Correct usage ''./notesGen <InputFileName> <OutputFileName>''" << endl;
		exit(1);
	}

	NotesParser parser;

	//parse the file and write
	parser.generateTexFile(argv[1], argv[2]);
}
