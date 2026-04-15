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

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = unique_characters("a");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = unique_characters("ab");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = unique_characters("aba");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = unique_characters("abABab");
	ASSERT_EQ(4, actual);
}
