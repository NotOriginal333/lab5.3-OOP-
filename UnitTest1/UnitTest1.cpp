#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.3/A.h"
#include "../lab5.3/A.cpp"
#include "../lab5.3/B.h"
#include "../lab5.3/B.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			A a;
			std::stringstream buffer;
			std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

			a.print();

			std::string output = buffer.str();
			Assert::AreEqual(std::string("A\n"), output);

			std::cout.rdbuf(old);
		}
	};
}
