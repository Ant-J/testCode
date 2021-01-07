#include<iostream>
#include<unistd.h>
using namespace std;

int main(int argc, char* argv[])
{
	cout<<"argc"<<argc<<endl;
	for(int i= 1; i< argc; i++)
	{
		cout<<"argv"<<i+1<<" "<<argv[i]<<endl;
	}

	int ch;
	while( (ch = getopt(argc, argv, "abc:")) != -1)
	{
		cout<< "ch is "<<(char)ch<<endl;
		cout<<"optind is "<<optind<<endl;
		if((char)ch == 'c')
		cout<<"optarg is "<<optarg<<endl;
	}
}
