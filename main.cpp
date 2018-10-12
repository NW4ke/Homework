#include "lib.h"

#include <spdlog/spdlog.h>

int main()
{
	auto logger = spdlog::stdout_logger_mt("console");
	logger->info("version {} was started", version());
	
	cout << "build " << lib::version << "\n";
	cout << "Hello, World!";

	return 0;
}
