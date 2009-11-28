#include "lib/SplitsComputer.h"

#include <iostream>
#include <sstream>

int main(int argc, char ** argv)
{
	if(argc != 2) {
		std::cout << "Find time splits from a mile pace." << std::endl;
		std::cout << "\tUsage: ./findsplits <minutes:seconds>" << std::endl;
		std::cout << "\tExample: ./findsplits 6:28" << std::endl;
		return 1;
	}

	std::string milePaceString(argv[1]);
	SplitsComputer computer(milePaceString);	

	std::cout << "1600m pace " << computer.getMilePaceInSeconds() << "s" << std::endl;
	std::cout << "\t800m pace " << computer.getEightHundredMeterPaceInSeconds() << "s" << std::endl;
	std::cout << "\t400m pace " << computer.getFourHundredMeterPaceInSeconds() << "s" << std::endl;
	std::cout << "\t100m pace " << computer.getOneHundredMeterPaceInSeconds() << "s" << std::endl;

	return 0;
}
