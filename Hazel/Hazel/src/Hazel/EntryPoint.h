#pragma once

#include "Hazel/Core.h"
#include "Hazel/Application.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc , char** argv)
{
    Hazel::Log::init();
    HZ_CORE_WARN("Init Log!");
    HZ_INFO("Hello!");
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
}
#endif