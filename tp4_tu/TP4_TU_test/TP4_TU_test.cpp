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
			Assert::AreEqual(estPair(4), 1);
		}
		TEST_METHOD(TestEstPair2)
		{
			Assert::AreEqual(estPair(7), 0);
		}
		TEST_METHOD(TestEstPair3)
		{
			Assert::AreEqual(estPair(0), 1);
		}
		TEST_METHOD(TestEstPair4)
		{
			Assert::AreEqual(estPair(-2), 1);
		}
		TEST_METHOD(TestEstPair5)
		{
			Assert::AreEqual(estPair(-3), 0);
		}


		TEST_METHOD(TestEstMax)
		{
			Assert::AreEqual(max2(5, 3), 5);
		}
		TEST_METHOD(TestEstMax2)
		{
			Assert::AreEqual(max2(3, 5), 5);
		}
		TEST_METHOD(TestEstMax3)
		{
			Assert::AreEqual(max2(-1, -8), -1);
		}
		TEST_METHOD(TestEstMax4)
		{
			Assert::AreEqual(max2(4, 4), 4);
		}


		TEST_METHOD(TestFactoriel)
		{
			Assert::AreEqual(factorielle(0), 1);
		}
		TEST_METHOD(TestFactoriel2)
		{
			Assert::AreEqual(factorielle(1), 1);
		}
		TEST_METHOD(TestFactoriel3)
		{
			Assert::AreEqual(factorielle(4), 24);
		}
		TEST_METHOD(TestFactoriel4)
		{
			Assert::AreEqual(factorielle(5), 120);
		}







		TEST_METHOD(TestdivExacte)
		{
			Assert::AreEqual(divisionExacte(20,2), 1);
		}

		TEST_METHOD(TestsommeTab)
		{
			int tab[6] = { 1, 2, 3, 4, 5, 6 };
			Assert::AreEqual(sommeTableau(tab, 6), 21);
		}

		TEST_METHOD(TestMaj)
		{
			Assert::AreEqual(contientMajuscule("Majusc"), 1);
		}

		TEST_METHOD(TestdivExacte2)
		{
			Assert::AreEqual(divisionExacte(15, 2), 0);
		}

		TEST_METHOD(TestMaj2)
		{
			Assert::AreEqual(contientMajuscule("majusc"), 0);
		}
	};
}
