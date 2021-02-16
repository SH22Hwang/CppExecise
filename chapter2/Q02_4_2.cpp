#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void) {
	//rand 함수 어떻게 씀???
	srand(time(NULL));
	
	for (int i = 0; i < 5; i++) {
		printf("Random number #%d: %d\n", i, rand() % 100);
	}

	return 0;
}