#include <bits/stdc++.h>

using namespace std;

void generateStory(monster m[], int n)
{
	for (int i = 0; i < 10 * n + rand() % 10; i++)
	{
		int m1 = rand() % n;
		int m2 = (m1 + rand() % (n - 2) + 1) % n;
		m[m1].attack(m[m2]);
	}
}