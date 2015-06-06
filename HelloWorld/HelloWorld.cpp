#include "HelloWorld.h"
#include <Hello.h>
#include <World.h>

using namespace ::std;

HelloWorld::HelloWorld(Hello &hello, World &world) :
	m_hello(hello),
	m_world(world)
{
	m_HelloWorld[0] = &m_hello;
	m_HelloWorld[1] = &m_world;
}

const string HelloWorld::PrintString() const
{
	string tmpString = "";
	for (auto string : m_HelloWorld)
	{
		tmpString += string->GetString();
	}
	return tmpString;
}

const string HelloWorld::PrintString(bool spaces) const
{
	string tmpString = "";
	int wordCount = (sizeof(m_HelloWorld) / sizeof(*m_HelloWorld));
	for (int i = 0; i < wordCount; i++)
	{
		tmpString += m_HelloWorld[i]->GetString();
		if (i < (wordCount - 1))
			tmpString += " ";
	}
	return tmpString;
}