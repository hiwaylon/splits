#include <string>

class SplitsComputer {
public:
	explicit SplitsComputer(std::string const &milePaceString);
	int getMilePaceInSeconds() const;
	float getEightHundredMeterPaceInSeconds() const;
	float getFourHundredMeterPaceInSeconds() const;
	float getOneHundredMeterPaceInSeconds() const;

private:
	SplitsComputer(SplitsComputer const &);
	SplitsComputer const &operator=(SplitsComputer const &);
	
private:
	int _milePaceInSeconds;
};
