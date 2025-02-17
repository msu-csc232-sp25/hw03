/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task1_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 1 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"
#include "hw03.h"

namespace csc232 {
    // Task 1 - isPalindrome
    class Task1TestFixture : public CSC232BaseTestFixture {
    public:
        Task1TestFixture() = default;

        ~Task1TestFixture() override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK1
    TEST_F(Task1TestFixture, Bootstrap) {
        std::cerr << "Task 1 is not ready for evaluation; please toggle the TEST_TASK1 macro to TRUE\n";
        SUCCEED(); // Just to keep spirits up out of the box ;-)
    }

#else
    // Task 1 - isPalindrome
    TEST_F(Task1TestFixture, ItValidatesEmptyStringAsPalindrome)
    {
        EXPECT_TRUE(csc232::is_palindrome(""));
    }

    TEST_F(Task1TestFixture, ItValidatesSingleLegalCharAsPalindrome)
    {
        for (auto ch{'a'}; ch <= 'z'; ++ch)
        {
            std::string text;
            text += ch;
            EXPECT_TRUE(csc232::is_palindrome(text));
        }
        for (auto ch{'A'}; ch <= 'Z'; ++ch)
        {
            std::string text;
            text += ch;
            EXPECT_TRUE(csc232::is_palindrome(text));
        }
    }

    TEST_F(Task1TestFixture, ItValidatesPalindromesOfSizeTwo)
    {
        for (auto ch{'a'}; ch <= 'z'; ++ch)
        {
            std::string text;
            text += ch;
            text += ch;
            EXPECT_TRUE(csc232::is_palindrome(text));
        }
        for (auto ch{'A'}; ch <= 'Z'; ++ch)
        {
            std::string text;
            text += ch;
            text += ch;
            EXPECT_TRUE(csc232::is_palindrome(text));
        }
    }

    TEST_F(Task1TestFixture, ItValidatesPalindromesOfSizeThree)
    {
        EXPECT_TRUE(csc232::is_palindrome("aba"));
    }

    TEST_F(Task1TestFixture, ItValidatesPalindromesOfSizeFour)
    {
        EXPECT_TRUE(csc232::is_palindrome("abba"));
    }

    TEST_F(Task1TestFixture, ItValidatesPalindromesOfSizeFive)
    {
        EXPECT_TRUE(csc232::is_palindrome("abCba"));
    }

    TEST_F(Task1TestFixture, ItInvalidatesNonPalindrome)
    {
        EXPECT_FALSE(csc232::is_palindrome("abab"));
    }
#endif

} // end namespace csc232
