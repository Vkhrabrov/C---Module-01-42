/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:48:21 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/06 22:29:08 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "fstream"

int main(int argc, char *argv[]){

	if (argc != 4){
	 std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
	 return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inputFile;

	inputFile.open(argv[1]);
	if(!inputFile.is_open()){
		std::cerr << "Error: Unable to open the file" << std::endl;
		return 1;
	}

	std::string newFileName = filename + ".replace";
	std::ofstream outputFile(newFileName);
	if (!outputFile.is_open()){
		std::cerr << "Error: Unable to open the file" << std:: endl;
	}

	std::string line;
	while(std::getline(inputFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos){
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		outputFile << line << std::endl;
	}

	inputFile.close();
	outputFile.close();
	return 0;
}