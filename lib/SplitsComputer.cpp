#include "SplitsComputer.h"

#include <sstream>

SplitsComputer::SplitsComputer(std::string const &milePaceString) :
	_milePaceInSeconds(0)
{
	std::stringstream paceStream(milePaceString);
	int minutes = 0;
	paceStream >> minutes;
	char trim;
	paceStream >> trim;
	int seconds = 0;
	paceStream >> seconds;
	_milePaceInSeconds = minutes * 60 + seconds;
}

int SplitsComputer::getMilePaceInSeconds() const
{
	return _milePaceInSeconds;
}

float SplitsComputer::getEightHundredMeterPaceInSeconds() const
{
	return _milePaceInSeconds * 0.5f;
}

float SplitsComputer::getFourHundredMeterPaceInSeconds() const
{
	return _milePaceInSeconds * 0.25f;
}

float SplitsComputer::getOneHundredMeterPaceInSeconds() const
{
	return _milePaceInSeconds * 0.0625f;
}

