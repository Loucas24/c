#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../TU_parc/header.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TUparctest
{
	TEST_CLASS(TUparctest)
	{
	public:
		
		TEST_METHOD(TestcreerFile)
		{
			Assert::IsNotNull(creerFile());
		}
		TEST_METHOD(TestcreerGroupe)
		{
			Assert::IsNotNull(creerGroupe(3));
		}
	};
}
