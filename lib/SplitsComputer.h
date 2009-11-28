#include <string>

class SplitsComputer {
public:
	explicit SplitsComputer(std::string const &milePaceString);
	int getMilePaceInSeconds() const;
	float getEightHundredMeterPaceInSeconds() const;
	float getFourHundredMeterPaceInSeconds() const;
	
private:
	int _milePaceInSeconds;
};
