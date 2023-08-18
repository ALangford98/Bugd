#include <Bugd.h>

class Testing : public Bugd::Application
{
public:
	Testing()
	{

	}
	~Testing()
	{

	}
};

Bugd::Application* Bugd::CreateApplication()
{
	return new Testing();
}