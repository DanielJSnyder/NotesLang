#ifndef __SIMP_LATEX_PARSER_HPP__
#define __SIMP_LATEX_PARSER_HPP__

#include <string>
#include <iostream>
#include <fstream>

const char DEFAULT_TEX_HEADER [] = 
	"\\documentclass [11pt] {article}\n\\begin{document}\n\n";

namespace core 
{
void generateTexFile(const char * input_filename, const std::string & output_filename);
void createTexHeader(std::ofstream & output_file, const std::string & filename);
}
#endif
