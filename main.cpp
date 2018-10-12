#include "lib.h"

#include <spdlog/spdlog.h>

int main()
{
	auto logger = spdlog::stdout_logger_mt("console");
	logger->info("version {} was started", version());
	
	std::cout << "build " << PROJECT_VERSION_PATCH << "\n";
	std::cout << "Hello, World!";
	
	return 0;
}
