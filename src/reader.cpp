#include <iostream>
#include <string>
#include "utils.hpp"
#include "parser.hpp"

using namespace std;

int main(int argc, char ** argv)
{
	//assumption argv is just the file name being parsed
	if(argc != 2)
	{
		cerr << "Incorrect arguments" << endl;
		exit(1);
	}

	//ifstream notes_filestream(argv[1]);
	
	//create the output file
	string output_filename = utils::createOutputFileName(argv[1]);
	cout << output_filename << endl;

	//parse the file
	core::generateTexFile(argv[1], output_filename);
}
