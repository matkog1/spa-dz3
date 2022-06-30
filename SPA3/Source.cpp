#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;



int main() {

	pair<pair<int, int>, pair<int, int>> tocke;
	

		cout << "Redak tocke A[1-20]: ";
		cin >> tocke.first.first;
		cout << "Stupac tocke A[1-40]: ";
		cin >> tocke.first.second;

		cout << "Redak tocke B[1-20]: ";
		cin >> tocke.second.first;
		cout << "Stupac tocke B[1-40]: ";
		cin >> tocke.second.second;
		
		cout << endl;

	

	pair<int, int> x = tocke.first;
	
	do
	{
	system("cls");
		
		if (x.first > tocke.second.first)
		{
			x.first--;
		}
		else if (x.first < tocke.second.first)
		{
			x.first++;
		}
		else
		{
			if (x.second > tocke.second.second)
			{
				x.second--;
			}
			else if (x.second <= tocke.second.second)
			{
				x.second++;
			}
		}

		for (int i = 1; i <= 20; i++)
		{
			for (int j = 1; j <= 40; j++)
			{
				if (i == x.first and j == x.second)
				{
					cout << "x";
				}
				else if (j == tocke.first.second and i == tocke.first.first)
				{
					cout << "A!";
				}
				else if (i == tocke.second.first and j == tocke.second.second)
				{
					cout << "B!";
				}
				else
				{
					cout << "_" << " ";
				}
				
			}
			cout << endl;
			
		}
		sleep_for(milliseconds(100));
	} while (x != tocke.second);

	return 0;
}