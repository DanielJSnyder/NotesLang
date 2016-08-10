#ifndef __NOTES_PARSER_HPP__
#define __NOTES_PARSER_HPP__

#include <iostream>
#include <string>

class NotesParser
{
const std::string DEFAULT_TEX_HEADER = 
	"\\documentclass [11pt] {article}\n\\begin{document}\n\n";
public:
	NotesParser();

	void generateTexFile(const char * input_fname, const char * output_fname);
private:
	void createHeader(std::ostream & os, const std::string & filename);
	void generateFooter(std::ostream & os);
};
#endif
