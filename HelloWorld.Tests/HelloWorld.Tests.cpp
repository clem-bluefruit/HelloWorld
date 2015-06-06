#include <Hello.h>
#include <World.h>
#include <HelloWorld.h>
#include <gtest\gtest.h>
#include <string>

using namespace ::testing;
using namespace ::std;

TEST(HelloWorld, Print_HelloWorld)
{
	Hello hello;
	World world;
	HelloWorld hw(hello, world);
	string expected = "HelloWorld";
	ASSERT_EQ(expected, hw.PrintString());
}

TEST(HelloWorld, Print_Hello_World)
{
	Hello hello;
	World world;
	HelloWorld hw(hello, world);
	string expected = "Hello World";
	ASSERT_EQ(expected, hw.PrintString(true));
}