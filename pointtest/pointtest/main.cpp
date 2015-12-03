#include <iostream>
#include <string>
using namespace std;

int testfunc(char*);

int main()
{
	char a[20]="point test!";
	char* b=a;
	testfunc(b);
	cout<<"b = "<<b;
	return 0;
}

int testfunc(char* b)
{
	char tmp[20]="point is ok";
	int len =strlen(tmp);
	for(int i=0;i<len;i++)
	{
		b[i]=tmp[i];
	}
	b[len]='\0';
	return 0;
}