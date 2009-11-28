#include "TestSplitsComputer.h"
#include "../lib/SplitsComputer.h"

CPPUNIT_TEST_SUITE_REGISTRATION(TestSplitsComputer);

CppUnit::Test * TestSplitsComputer::suite()
{
	CppUnit::TestSuite * tests = new CppUnit::TestSuite("TestSplitsComputer");
	tests->addTest(new CppUnit::TestCaller<TestSplitsComputer>("TestSplitsComputer::testConstruction", &TestSplitsComputer::testConstruction));
	tests->addTest(new CppUnit::TestCaller<TestSplitsComputer>("TestSplitsComputer::testEightHundredMeterSplit", &TestSplitsComputer::testEightHundredMeterSplit));
	tests->addTest(new CppUnit::TestCaller<TestSplitsComputer>("TestSplitsComputer::testFourHundredMeterSplit", &TestSplitsComputer::testFourHundredMeterSplit));
	tests->addTest(new CppUnit::TestCaller<TestSplitsComputer>("TestSplitsComputer::testOneHundredMeterSplit", &TestSplitsComputer::testOneHundredMeterSplit));

	return tests;
}

void TestSplitsComputer::testConstruction()
{
	SplitsComputer splitsComputer("6:03");
	CPPUNIT_ASSERT_MESSAGE("SplitsComputer should convert the original mile pace string to seconds", splitsComputer.getMilePaceInSeconds() == 363);
}

void TestSplitsComputer::testEightHundredMeterSplit()
{
	SplitsComputer splitsComputer("7:44");
	CPPUNIT_ASSERT_MESSAGE("SplitsComputer should return correct 800m split", splitsComputer.getEightHundredMeterPaceInSeconds() == 232);
}

void TestSplitsComputer::testFourHundredMeterSplit()
{
	SplitsComputer splitsComputer("5:56");
	CPPUNIT_ASSERT_MESSAGE("SplitsComputer should return correct 400m split", splitsComputer.getFourHundredMeterPaceInSeconds() == 89);
}

void TestSplitsComputer::testOneHundredMeterSplit()
{
	SplitsComputer splitsComputer("4:35");
	CPPUNIT_ASSERT_MESSAGE("SplitsComputer should return correct 100m split", splitsComputer.getOneHundredMeterPaceInSeconds() == 17.1875f);
}

