/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    hw03.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Function declarations for HW03.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef CSC232_HW03_
#define CSC232_HW03_

#include <cctype>
#include <string>

namespace csc232
{

    /**
     * @brief Assess, recursively, whether the given text is a palindrome.
     * @details A grammar for this simple language is given by:
     * @verbatim
     * <pal> = empty string | <ch> | a <pal> a | b <pal> b | ... | Z <pal> Z
     * <ch>  = a | b | ... | z | A | B | ... | Z
     * @endverbatim
     * @param text the text under language recognition
     * @return true if the given text is a palindrome, false otherwise.
     * @see [Palindromes](https://msu.vitalsource.com/reader/books/9780138122782/epubcfi/6/144%5B%3Bvnd.vst.idref%3DP7001018341000000000000000001CBA%5D!/4/2%5BP7001018341000000000000000001CBA%5D/24%5BP7001018341000000000000000001D00%5D/6%5BP7001018341000000000000000001D03%5D/2/2%5BP7001018341000000000000000001D04%5D/3:9%5Brom%2Ces%5D)
     */
    bool is_palindrome( const std::string & text );

    /**
     * @brief Assess, recursively, whether the given text is a legal word in the grammar given for A^nB^n.
     * @details A grammar for this simple language is given by:
     * @verbatim
     * <legal_word> = empty string | A <legal_word> B
     * @endverbatim
     * @param text the text under language recognition
     * @return true if the given text is in the language AnBn, false otherwise.
     * @see [A language of the form AnBn](https://msu.vitalsource.com/reader/books/9780138122782/epubcfi/6/144%5B%3Bvnd.vst.idref%3DP7001018341000000000000000001CBA%5D!/4/2%5BP7001018341000000000000000001CBA%5D/24%5BP7001018341000000000000000001D00%5D/8%5BP7001018341000000000000000001D3A%5D/2/2%5BP7001018341000000000000000001D3B%5D/2)
     */
    bool is_an_bn( const std::string & text );

    /**
     * @brief Assess, recursively, whether the given text is a legal word in the grammar given for Exercise 12.
     * @details A grammar in this exercise is repeated below:
     * @verbatim
     * <word> = R | <D> | <D><word><S>
     * <D>    = Q | P
     * <S>    = 1
     * @endverbatim
     * @param text the text under language verification
     * @return true if the given text is in the language specified, false otherwise.
     * @see [Chapter 6, Exercise 12](https://msu.vitalsource.com/reader/books/9780138122782/epubcfi/6/154%5B%3Bvnd.vst.idref%3DP700101834100000000000000000200D%5D!/4/2%5BP700101834100000000000000000200D%5D/4%5BP7001018341000000000000000002010%5D/22%5BP700101834100000000000000000206F%5D/2%5BP7001018341000000000000000002070%5D/6%5BP7001018341000000000000000002074%5D/2%5BP7001018341000000000000000002075%5D/2%5BP7001018341000000000000000002076%5D/1:58%5Buag%2Ce.%5D)
     */
    bool is_in_exercise( const std::string & text );

    /**
     * @brief Finds the end of a prefix expression, if one exists.
     * @pre The substring of strExp from the index first through the end of the string contains no blank characters.
     * @param strExp a string containing no blank characters
     * @param first the beginning of a prefix expression
     * @return the index of the last character in the prefix expression that begins at index first, or -1 if no such prefix expression exists.
     * @see @see [6.3.2 Prefix Expressions](https://msu.vitalsource.com/reader/books/9780138122782/epubcfi/6/146%5B%3Bvnd.vst.idref%3DP7001018341000000000000000001D58%5D!/4/2%5BP7001018341000000000000000001D58%5D/18%5BP7001018341000000000000000001DDF%5D/2/2%5BP7001018341000000000000000001DE0%5D/3:16%5Bsio%2Cns%5D)
     */
    int end_pre( const std::string & strExp, int first );

    /**
     * @brief Sees whether an expression is a prefix expression.
     * @pre the given string strExp contains a string no blank characters.
     * @param strExp the string under assessment
     * @return true if the given string is a valid prefix expression, false otherwise.
     * @see [6.3.2 Prefix Expressions](https://msu.vitalsource.com/reader/books/9780138122782/epubcfi/6/146%5B%3Bvnd.vst.idref%3DP7001018341000000000000000001D58%5D!/4/2%5BP7001018341000000000000000001D58%5D/18%5BP7001018341000000000000000001DDF%5D/2/2%5BP7001018341000000000000000001DE0%5D/3:16%5Bsio%2Cns%5D)
     */
    bool is_prefix( const std::string & strExp );
}

#endif //CSC232_HW03_
