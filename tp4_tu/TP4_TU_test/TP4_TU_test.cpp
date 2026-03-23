#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../TP4_TU/TP4_TU.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TP4TUtest
{
	TEST_CLASS(TP4TUtest)
	{
	public:
		
		TEST_METHOD(TestEstPair)
		{
			Assert::AreEqual(estPair(6), 1);
		}

		TEST_METHOD(TestEstMax)
		{
			Assert::AreEqual(max2(11, 6), 11);
		}

		TEST_METHOD(TestFactoriel)
		{
			Assert::AreEqual(factorielle(5), 120);
		}

		TEST_METHOD(TestdivExacte)
		{
			Assert::AreEqual(divisionExacte(20,2), 1);
		}

		TEST_METHOD(TestEstMax2)
		{
			Assert::AreEqual(max2(6, 11), 11);
		}

		TEST_METHOD(TestEstPair2)
		{
			Assert::AreEqual(estPair(6), 0);
		}

		TEST_METHOD(TestFactoriel2)
		{
			Assert::AreEqual(factorielle(4), 20);
		}

		TEST_METHOD(TestdivExacte2)
		{
			Assert::AreEqual(divisionExacte(15, 2), 0);
		}
	};
}
