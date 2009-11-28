#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/ui/text/TestRunner.h>

int main()
{
  CppUnit::TextUi::TestRunner runner;
  CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
  runner.addTest(registry.makeTest());
 	CppUnit::BriefTestProgressListener progress;
 	runner.eventManager().addListener(&progress);
  bool const wasSuccessful = runner.run();
  return wasSuccessful;

}
