#include "c-echo.h"
//#include "c-count.h"

int main(int argv, char** argc) {
	std::cout << "Count of output: "  << echo(argv, argc) << std::endl;
}
