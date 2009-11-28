#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/Test.h>
#include <cppunit/TestFixture.h>

class TestSplitsComputer : public CppUnit::TestFixture {
public:
	static CppUnit::Test * suite();
	
public:
	void testConstruction();
	void testEightHundredMeterSplit();
	void testFourHundredMeterSplit();
	void testOneHundredMeterSplit();
};
