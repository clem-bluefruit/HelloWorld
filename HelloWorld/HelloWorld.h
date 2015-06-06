#include <Hello.h>
#include <World.h>
#include <string>

class HelloWorld : public Hello
{
public:
	HelloWorld(Hello &hello, World &world);
	const std::string PrintString() const;
	const std::string PrintString(bool spaces) const;
private:
	Hello &m_hello;
	World &m_world;
	Hello* m_HelloWorld[2];
};