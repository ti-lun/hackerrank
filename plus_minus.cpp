#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	float pl=0, mn=0, zr=0;

	for (int i=0; i<n; i++)
	{
		int val;
		std::cin >> val;
		if (val==0)
			zr++;
		else if (val>0)
			pl++;
		else
			mn++;
	}
	zr = zr/(float)n;
	pl = pl/(float)n;
	mn = mn/(float)n;
	printf("%0.06f\n%0.06f\n%0.06f\n", pl, mn, zr);
}
