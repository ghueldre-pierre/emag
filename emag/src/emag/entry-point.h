#pragma once

#include "application.h"

#ifdef EMAG_PLATFORM_WINDOWS

extern emag::application* emag::createApplication();

int main(int argc, char** argv) {
	emag::application* clientApplication = emag::createApplication();
	clientApplication->run();
	delete clientApplication;
	return 0;
}

#endif