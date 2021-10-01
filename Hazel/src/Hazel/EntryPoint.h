#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!"); 
	int a = 5;
	HZ_INFO("Client says hello Var={0} times!", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif