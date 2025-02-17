/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task3_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 3 test fixture.
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
    class Task3TestFixture : public CSC232BaseTestFixture
    {
    public:
        Task3TestFixture( ) = default;

        ~Task3TestFixture( ) override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK3
    TEST_F(Task3TestFixture, Bootstrap) {
        std::cerr << "Task 3 is not ready for evaluation; please toggle the TEST_TASK3 macro to TRUE\n";
        SUCCEED();
    }

#else
    // <word> = R | <D> | <D><word><S>
    // <D>    = Q | P
    // <S>    = 1
    TEST_F(Task3TestFixture, ItValidatesRInExerciseLanguage)
    {
        EXPECT_TRUE(csc232::is_in_exercise("R"));
    }

    TEST_F(Task3TestFixture, ItValidatesQInExerciseLanguage)
    {
        EXPECT_TRUE(csc232::is_in_exercise("Q"));
    }

    TEST_F(Task3TestFixture, ItValidatesPInExerciseLanguage)
    {
        EXPECT_TRUE(csc232::is_in_exercise("P"));
    }

    TEST_F(Task3TestFixture, ItValidatesQR1InExerciseLanguage)
    {
        EXPECT_TRUE(csc232::is_in_exercise("QR1"));
    }

    TEST_F(Task3TestFixture, ItValidatesPR1InExerciseLanguage)
    {
        EXPECT_TRUE(csc232::is_in_exercise("PR1"));
    }

    TEST_F(Task3TestFixture, ItValidatesPQR11InExerciseLanguage)
    {
        EXPECT_TRUE(csc232::is_in_exercise("PQR11"));
    }

    TEST_F(Task3TestFixture, ItValidatesQPR11InExerciseLanguage)
    {
        EXPECT_TRUE(csc232::is_in_exercise("QPR11"));
    }

    TEST_F(Task3TestFixture, ItInvalidatesQPR1InExerciseLanguage)
    {
        EXPECT_FALSE(csc232::is_in_exercise("QPR1"));
    }

    TEST_F(Task3TestFixture, ItInvalidatesPQR1InExerciseLanguage)
    {
        EXPECT_FALSE(csc232::is_in_exercise("PQR1"));
    }
#endif

} // end namespace csc232
