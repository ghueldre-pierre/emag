#pragma once

#include "core.h"

namespace emag {
	class EMAG_API application
	{
	public:
		application();
		virtual ~application();

		void run();
	};

	// to be defined by the client
	application* createApplication();
}

