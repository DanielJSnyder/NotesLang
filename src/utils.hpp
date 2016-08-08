#ifndef __UTILS_HPP__
#define __UTILS_HPP__

#include <string>
#include <algorithm>

namespace utils
{

std::string createOutputFileName(const char * infile)
{
	std::string input_filename(infile);
	//find the file delimiter location
	auto dot_location = std::find(input_filename.begin(), input_filename.end(), '.');
	
	//set the output type to be a .tex document
	std::string output_filetype(".tex");
	return std::string(input_filename.begin(), dot_location) + output_filetype;
}

}
#endif
