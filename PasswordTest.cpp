/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, one_char_one_unique)
{
	Password my_password;
	int actual = my_password.unique_characters("a");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, two_char_two_unique)
{
	Password my_password;
	int actual = my_password.unique_characters("ab");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, three_char_two_unique)
{
	Password my_password;
	int actual = my_password.unique_characters("aba");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, six_char_four_unique)
{
	Password my_password;
	int actual = my_password.unique_characters("abABab");
	ASSERT_EQ(4, actual);
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	int actual = my_password.unique_characters("");
	ASSERT_EQ(0, actual);
}
