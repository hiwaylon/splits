#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/BriefTestProgressListener.h>

int main()
{
	CppUnit::TestFactoryRegistry & registry(CppUnit::TestFactoryRegistry::getRegistry());
	CppUnit::BriefTestProgressListener progress;
	CppUnit::TextUi::TestRunner runner;
	runner.addTest(registry.makeTest());
	runner.eventManager().addListener(&progress);
	runner.setOutputter(new CppUnit::CompilerOutputter(&runner.result(), std::cerr));
	bool const success = runner.run();
}