#include <bits/stdc++.h>

using namespace std;

int main()
{
	int j, p, v, e, d;
	cin >> j >> p >> v >> e >> d;

	if (j == -1)
	{
		// o único caso impossível é j = -1 e d = -1

		if (p == -1) p = 3*v+e;
		else if (v == -1) v = (p-e)/3;
		else if (e == -1) e = p-3*v;

		j = v+e+d;
	}
	else if (p == -1)
	{
		// como os casos com j = -1 já foram vistos,
		// sobram 3 casos (ou apenas p = -1)

		if (v == -1) v = j-e-d;
		else if (e == -1) e = j-v-d;
		else if (d == -1) d = j-v-e;

		p = 3*v+e;
	}
	else if (v == -1)
	{
		// os casos com j = -1 ou p = -1, já foram vistos,
		// sobram 2 casos, (ou apenas v = -1)

		if (e == -1)
		{
			// da 2a equação, E = P-3V -> J = V + P - 3V + D -> 2V = P+D-J
			// -> V = (P+D-J)/2

			v = (p+d-j)/2;
			e = p-3*v;
		}
		else
		{
			v = (p-e)/3;
			d = j-v-e;
		}
	}
	else if (e == -1)
	{
		// sobra apenas o caso com e = -1 e d = -1 (ou apenas e = -1)

		e = p-3*v;

		if (d == -1) d = j-v-e;
	}
	else if (d == -1) d = j-v-e;

	cout << j << " " << p << " " << v << " " << e << " " << d << "\n";
    return 0;
}