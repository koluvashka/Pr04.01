#include "pch.h"
#include "CppUnitTest.h"

#include "..\Project1\FileName.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(FractionOperationsTests) 
    {
    public:
      

 
        TEST_METHOD(TestAdd_ValidFractions_ReturnsCorrectSum)
        {
           
            Fraction f1 = { 1, 2 }; 
            Fraction f2 = { 1, 4 }; 

        
            Fraction result = MathFractionOperations::add(f1, f2);

      
            Assert::AreEqual(3, result.n);
            Assert::AreEqual(4, result.d);
        }

        TEST_METHOD(TestToDecimal_ValidFraction_ReturnsDouble)
        {
            
            Fraction f = { 1, 2 }; // 1/2

            
            double result = MathFractionOperations::toDecimal(f);

           
            Assert::AreEqual(0.5, result, 0.0001);
        }

        

       
        TEST_METHOD(TestSimplify_ZeroDenominator_ThrowsException)
        {
            
            Assert::ExpectException<std::invalid_argument>(callSimplifyWithZero);
        }

        
        TEST_METHOD(TestToDecimal_ZeroDenominator_ThrowsException)
        {
          
            Assert::ExpectException<std::invalid_argument>(callToDecimalWithZero);
        }

    private:
        
        static void callSimplifyWithZero()
        {
            Fraction f = { 1, 0 }; 
            MathFractionOperations::simplify(f);
        }

       
        static void callToDecimalWithZero()
        {
            Fraction f = { 5, 0 }; 
            MathFractionOperations::toDecimal(f);
        }
    };
}