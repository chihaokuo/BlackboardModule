#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BlackboardModuleUnitTest
{		
	TEST_CLASS(UnitTest_BlackBoard)
	{
	public:
#ifdef __cplusplus

		TEST_METHOD(TestDataInt)
		{
			// TODO: Your test code here

			MyData mydata(0);

			// test int
			int myint = 5;

			mydata.SetData(myint);
			myint = 3;
			Assert::IsTrue(mydata.GetDataInt(myint));
			Assert::AreEqual(myint, 5);
		}

		TEST_METHOD(TestDataBool)
		{
			// TODO: Your test code here

			MyData mydata(0);

			// test bool
			bool mybool = true;

			mydata.SetData(mybool);
			mybool = false;
			Assert::IsTrue(mydata.GetDataBool(mybool));
			Assert::IsTrue(mybool);

		}

		TEST_METHOD(TestDataFloat)
		{
			// TODO: Your test code here

			MyData mydata(0);

			// test float
			float myfloat = 0.5f;

			mydata.SetData(myfloat);
			myfloat = 5.5f;
			Assert::IsTrue(mydata.GetDataFloat(myfloat));
			Assert::IsTrue(std::abs(myfloat - 0.5f) < 0.00001f);

		}

		TEST_METHOD(TestDataCustom)
		{
			// TODO: Your test code here

			MyData mydata(0);

			// test user-defined type
			Vector2 *vec2 = new Vector2();
			vec2->x = vec2->y = 7.0f;

			mydata.SetData<Vector2>(*vec2);
			vec2->x = 3.5f;
			vec2->y = 1.999f;
			vec2 = mydata.GetData<Vector2>();
			Assert::IsTrue(vec2 ? true : false);

			Assert::IsTrue(std::abs(vec2->x - 7.0f) < 0.00001f);
			Assert::IsTrue(std::abs(vec2->y - 7.0f) < 0.00001f);
		}

		TEST_METHOD(TestBlackBoard)
		{
			// TODO: Your test code here

			MyBlackBoard mybb;
			MyData olddata(100);
			mybb.SetData("TestData", olddata);

			int myvalue = 500;
			MyData *mydata = mybb.GetData("TestData");
			Assert::IsTrue(mydata->GetDataInt(myvalue));
			Assert::AreEqual(myvalue, 100);
		}

		//TEST_METHOD(TestMethod1)
		//{
		//	// TODO: Your test code here
		//}
#endif
	};
}