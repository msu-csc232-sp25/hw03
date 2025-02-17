/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task5_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 5 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include <vector>
#include "csc232_test_utils.h"
#include "hw03.h"

namespace csc232
{
    class Task5TestFixture : public CSC232BaseTestFixture
    {
    public:
        Task5TestFixture( ) = default;

        ~Task5TestFixture( ) override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK5
    TEST_F(Task5TestFixture, Bootstrap) {
        std::cerr << "Task 5 is not ready for evaluation; please toggle the TEST_TASK5 macro to TRUE\n";
        SUCCEED();
    }

#else
    // TODO: Add unit tests as needed for task 5
    TEST_F( Task5TestFixture, ItValidatesSimplePrefixExpression )
    {
        for ( auto ch{ 'a' }; ch <= 'z'; ++ch )
        {
            std::string text;
            text += ch;
            EXPECT_TRUE( csc232::is_prefix( text ) );
        }
    }

    TEST_F( Task5TestFixture, ItValidatesSimpleBinaryPrefixExpression )
    {
        std::vector< std::string > operators{ "+", "-", "*", "/" };
        for ( const auto & op: operators )
        {
            std::string expr;
            expr += op + "ab";
            EXPECT_TRUE( csc232::is_prefix( expr ) );
        }
    }

    TEST_F( Task5TestFixture, ItValidatesComplicatedPrefixExpression )
    {
        EXPECT_TRUE( csc232::is_prefix( "--a/b+c*def" ) );
    }

    TEST_F( Task5TestFixture, ItInvalidatesInfixExpression )
    {
        EXPECT_FALSE( csc232::is_prefix( "a+b" ) );
    }

#endif

} // end namespace csc232
