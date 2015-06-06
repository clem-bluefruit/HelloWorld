#include <Hello.h>
#include <World.h>
#include <gtest\gtest.h>
#include <string>

using namespace ::testing;
using namespace ::std;

TEST(World, Print_World)
{
	World World;
	string expected = "World";
	ASSERT_EQ(expected, World.GetString());
}