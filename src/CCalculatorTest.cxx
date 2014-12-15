/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_CCalculatorTest_init = false;
#include "/var/www/html/codeit/workspace/CCalculator/src/CCalculatorTest.h"

static CCalculatorTest suite_CCalculatorTest;

static CxxTest::List Tests_CCalculatorTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CCalculatorTest( "/var/www/html/codeit/workspace/CCalculator/src/CCalculatorTest.h", 5, "CCalculatorTest", suite_CCalculatorTest, Tests_CCalculatorTest );

static class TestDescription_suite_CCalculatorTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CCalculatorTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_CCalculatorTest, suiteDescription_CCalculatorTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_CCalculatorTest.test_Unit_Test_1(); }
} testDescription_suite_CCalculatorTest_test_Unit_Test_1;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
