#include <pthread.h>
#include <stdio.h>

int threads;

class thread
{
	public:
		int pub;
		thread() { pub=0; no = threads++; }
		void countplus()
		{
			pub++; 
			printf("Thread %d  count %d\n", no, pub);
		}
	protected:
		int no;
};

int main( int argc, char *argv[])
{

	thread nummer_1, nummer_2;
	nummer_1.countplus();
	nummer_2.countplus();
	return 0;
}
