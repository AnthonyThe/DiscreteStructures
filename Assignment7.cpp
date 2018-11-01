// I followed your coding in class and just added a couple things.  The tower outputs A, B, C consistently now and the user can choose the amount of disks. 
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Tower
{
private:
	vector<string> disks;
public:
	string name;

	Tower(string name, int size, bool isInitialTower)
	{
		this->name = name;
		if (isInitialTower)
		{
			for (int i = size; i > 0; i--)
			{
				this->pushDisk(to_string(i));
			}
		}
	}
	void pushDisk(string val)
	{
		this->disks.push_back(val);
	}

	void popDisk()
	{
		this->disks.pop_back();
	}

	string Print()
	{
		string output = "Tower: " + this->name + ": ";
		for (auto disk : disks)
		{
			output = output + disk + " ";
		}
		return output;
	}
};
void hanoi(int, Tower*, Tower*, Tower*);

int main()
{
	int diskCount;
	cout << "Enter the amount of disks ";
	cin >> diskCount;

	auto A = new Tower("A", diskCount, true);
	auto B = new Tower("B", diskCount, false);
	auto C = new Tower("C", diskCount, false);
	cout << A->Print() << endl;
	cout << B->Print() << endl;
	cout << C->Print() << endl;
	system("pause");
	system("cls");
	hanoi(diskCount, A, B, C);

	return 0;
}

void hanoi(int disks, Tower* source, Tower* target, Tower* spare)
{
	if (disks > 0)
	{
		hanoi(disks - 1, source, spare, target);
		cout << "Move disk " << disks << " from " << source->name << " to " << target->name << endl;
		source->popDisk();
		target->pushDisk(to_string(disks));
		if (source->name == "A" && target->name == "B")
		{
			cout << source->Print() << endl;
			cout << target->Print() << endl;
			cout << spare->Print() << endl;
			system("pause");
			system("cls");
		}
		else if (source->name == "A" && spare->name == "B")
		{
			cout << source->Print() << endl;
			cout << spare->Print() << endl;
			cout << target->Print() << endl;
			system("pause");
			system("cls");
		}
		else if (spare->name == "A" && source->name == "B")
		{
			cout << spare->Print() << endl;
			cout << source->Print() << endl;
			cout << target->Print() << endl;
			system("pause");
			system("cls");
		}
		else if (spare->name == "A" && target->name == "B")
		{
			cout << spare->Print() << endl;
			cout << target->Print() << endl;
			cout << source->Print() << endl;
			system("pause");
			system("cls");
		}
		else if (target->name == "A" && source->name == "B")
		{
			cout << target->Print() << endl;
			cout << source->Print() << endl;
			cout << spare->Print() << endl;
			system("pause");
			system("cls");
		}
		else if (target->name == "A" && spare->name == "B")
		{
			cout << target->Print() << endl;
			cout << spare->Print() << endl;
			cout << source->Print() << endl;
			system("pause");
			system("cls");
		}
		hanoi(disks - 1, spare, target, source);
	}
}
