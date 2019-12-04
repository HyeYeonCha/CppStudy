#include <iostream>
#include <cstring>

using namespace std;

int main(void) {

	char str1[] = "Hello";
	char str2[] = " World";
	char str3[20];

	cout << strlen(str1) << " / " << strlen(str2) << endl;

	strcpy_s(str3, str1);
	strcat_s(str3, str2);
	
	cout << str3 << endl;

	if (strcmp(str1, str2))
	{
		cout << "다르다" << endl;
	}
	else cout << "같다" << endl;

	return 0;
}