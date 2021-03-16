#include "pch.h"
#include "CppUnitTest.h"
#include <sstream>
#include <iostream>
#include "../mustangbronco/car.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace CCarTest
{
	TEST_CLASS(CCarTest)
	{
	public:
		
		TEST_METHOD(TestBronco)
		{
			Car carTest;
			stringstream ss;
			carTest.car_output(6,ss);

			Assert::IsTrue(ss.str()== "Mustang\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(369, ss);
			Assert::IsTrue(ss.str() == "Mustang\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(-3, ss);
			Assert::IsTrue(ss.str() == "Mustang\n");
		}
		TEST_METHOD(TestMustang)
		{
			Car carTest;
			stringstream ss;
			carTest.car_output(10, ss);

			Assert::IsTrue(ss.str() == "Bronco\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(520, ss);
			Assert::IsTrue(ss.str() == "Bronco\n");
		}

		TEST_METHOD(TestMustangBronco)
		{
			Car carTest;
			stringstream ss;
			carTest.car_output(15, ss);

			Assert::IsTrue(ss.str() == "MustangBronco\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(405, ss);
			Assert::IsTrue(ss.str() == "MustangBronco\n");
		}

		TEST_METHOD(TestNotDivisible) {
			Car carTest;
			stringstream ss;
			carTest.car_output(13, ss);

			Assert::IsTrue(ss.str() == "13\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(214, ss);
			Assert::IsTrue(ss.str() == "214\n");
		}
	};
}
