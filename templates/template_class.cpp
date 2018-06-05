#include "template_class.h"


int main()
{
	Test<string> strTest("Welcome");
	Test<int> iTest(120617);

	strTest.print();
	iTest.print();

	return 0;
}