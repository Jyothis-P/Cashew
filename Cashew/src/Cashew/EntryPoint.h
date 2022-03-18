#pragma once

#ifdef CS_PLATFORM_WINDOWS

extern Cashew::Application* Cashew::CreateApplication();
	
int main(int argc, char** argv) 
{
	auto app = Cashew::CreateApplication();
	app->Run();
	delete app;
}

#endif // CS_PLATFORM_WINDOWS
