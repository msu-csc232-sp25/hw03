/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task2_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 2 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"
#include "hw03.h"

namespace csc232
{
    class Task2TestFixture : public CSC232BaseTestFixture
    {
    public:
        Task2TestFixture( ) = default;

        ~Task2TestFixture( ) override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK2
    TEST_F(Task2TestFixture, Bootstrap) {
        std::cerr << "Task 2 is not ready for evaluation; please toggle the TEST_TASK2 macro to TRUE\n";
        SUCCEED(); // Just to keep spirits up out of the box ;-)
    }

#else
    // TODO: Add unit tests as needed for task 2
    // <legal_word> = empty string | A <legal_word> B
    TEST_F( Task2TestFixture, ItValidatesAnEmptyStringIsInAnBn )
    {
        EXPECT_TRUE( csc232::is_an_bn(""));
    }

    TEST_F( Task2TestFixture, ItValidatesABIsInAnBn )
    {
        EXPECT_TRUE( csc232::is_an_bn("AB"));
    }

    TEST_F( Task2TestFixture, ItValidatesAABBIsInAnBn )
    {
        EXPECT_TRUE( csc232::is_an_bn("AABB"));
    }

    TEST_F( Task2TestFixture, ItValidatesAAABBBIsInAnBn )
    {
        EXPECT_TRUE( csc232::is_an_bn("AAABBB"));
    }

    TEST_F( Task2TestFixture, ItInvalidatesAABIsInAnBn )
    {
        EXPECT_FALSE( csc232::is_an_bn("AAB"));
    }

    TEST_F( Task2TestFixture, ItInvalidatesABBIsInAnBn )
    {
        EXPECT_FALSE( csc232::is_an_bn("ABB"));
    }

#endif

} // end namespace csc232
