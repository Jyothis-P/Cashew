#include <Cashew.h>
#include <iostream>

class Sandbox : public Cashew::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}

private:

};



Cashew::Application* Cashew::CreateApplication()
{
	return new Sandbox();
}