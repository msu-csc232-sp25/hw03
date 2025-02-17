/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task4_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 4 test fixture.
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
    class Task4TestFixture : public CSC232BaseTestFixture
    {
    public:
        Task4TestFixture( ) = default;

        ~Task4TestFixture( ) override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK4
    TEST_F(Task4TestFixture, Bootstrap) {
        std::cerr << "Task 4 is not ready for evaluation; please toggle the TEST_TASK4 macro to TRUE\n";
        SUCCEED();
    }

#else
    // TODO: Add unit tests as needed for task 4
    TEST_F( Task4TestFixture, ItFindsIndexOfSimplestPrefixExpression )
    {
        for ( auto ch{ 'a' }; ch <= 'z'; ++ch )
        {
            std::string text;
            text += ch;
            EXPECT_EQ( csc232::end_pre( text, 0 ), 0 );
        }
    }

    TEST_F( Task4TestFixture, ItFindsIndexOfSimpleBinaryPrefixExpression )
    {
        std::vector<std::string> operators{"+", "-", "*", "/"};
        for (const auto& op : operators)
        {
            std::string expr;
            expr += op + "ab";
            EXPECT_EQ( csc232::end_pre( expr, 0 ), expr.size( ) - 1 );
        }
    }

    TEST_F( Task4TestFixture, ItFindsIndexOfComplexPrefixExpression)
    {
        std::string expr{"+*ab-cd"};
        EXPECT_EQ( csc232::end_pre( expr, 0 ), expr.size( ) - 1 );
    }

    TEST_F( Task4TestFixture, ItComplainsWhenItCannotFindEndOfPrefixExpression)
    {
        std::string expr{"+b"};
        EXPECT_EQ( csc232::end_pre( expr, 0 ), -1 );
    }
#endif

} // end namespace csc232
