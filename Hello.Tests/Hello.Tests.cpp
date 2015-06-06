#include <gtest\gtest.h>
#include <Hello.h>

using namespace ::testing;
using namespace ::std;

TEST(Hello, Print_Hello)
{
	Hello Hello;
	string expected = "Hello";
	ASSERT_EQ(expected, Hello.GetString());
}
