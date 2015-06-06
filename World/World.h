#pragma once
#include <Hello.h>
#include <string>

class World : public Hello
{
public:
	const std::string GetString() const;
private:
	const std::string m_string = "World";
};