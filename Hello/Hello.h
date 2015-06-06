#pragma once
#include <string>

class Hello
{
public:
	virtual const std::string GetString() const;
private:
	const std::string m_string = "Hello";
};