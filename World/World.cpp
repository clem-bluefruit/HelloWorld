#include <Hello.h>
#include "World.h"
#include <string>

using namespace ::std;

const string World::GetString() const
{
	return m_string;
}