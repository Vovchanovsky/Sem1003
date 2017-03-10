#include "Header.h"

int main()
{
	Journal* d;
	d = new Journal;
	d->Interface();
	Pupil* b;
	b = new Pupil[5];
	for (int i = 1; i <= 5; ++i)
	{
		b[i - 1] = Pupil("Twss", 22, "aPI");
	}
	cin.get();
	return 0;
}