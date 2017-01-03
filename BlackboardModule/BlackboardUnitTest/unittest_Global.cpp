#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BlackboardModuleUnitTest
{		
	TEST_CLASS(UnitTest_Global)
	{
	public:
		
		TEST_METHOD(TestNearZero)
		{
			// TODO: Your test code here

			Assert::IsTrue(NearZero(0.0f));
			Assert::IsFalse(NearZero(-3.5f));
			Assert::IsTrue(NearZero(0.000000001f - 0.000000001f));
			Assert::IsTrue(NearZero(-0.000000001f + 0.000000001f));
			Assert::IsFalse(NearZero(0.1f));
			Assert::IsFalse(NearZero(-0.00001f));
		}

		TEST_METHOD(TestNear)
		{
			// TODO: Your test code here

			Assert::IsTrue(Near(0.0f, 0.0f));
			Assert::IsFalse(Near(-3.5f, -3.445f));
			Assert::IsTrue(Near(0.000000001f, 0.000000001f));
			Assert::IsTrue(Near(-0.000000001f, -0.000000001f));
			Assert::IsFalse(Near(0.1f, 0.0f));
			Assert::IsFalse(Near(-0.00001f, 0.00001f));
		}

	};
}