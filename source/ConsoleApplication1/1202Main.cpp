#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

void Random(void) {
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		cout << "Random Number " << i + 1 << " : " << rand() % 100 << endl;
	}

}

int main(void) {

	Random();
	
	return 0;
}