#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.3/CharLine.h"
#include "D:\project C++ 2\lab 1.3\lab 1.3\CharLine.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCharAt)
		{
			// Arrange
			CharLine line;
			line.Init(5, "Hello");

			// Assert
			Assert::AreEqual('H', line.CharAt(0));
			Assert::AreEqual('l', line.CharAt(2));
			Assert::AreEqual('o', line.CharAt(4));
		}
	};
}
