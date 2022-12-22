#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
using namespace std;

/*Дядя Сэм решил оптимизировать свою пасеку и сократить количество ульев,
объединив некоторые из них.Был возведен улий - терем на 2023 жителя.
Дядя Сэм просит помочь ему найти подходящую(первую) пару ульев,
суммарная вместимость которых составит 2023 пчелы.*/


class HiveofSam {
private:
	string filename = "Input task1.txt";
public:
	HiveofSam(string _filename) {
		this->filename = filename;
	};

	void FileFunction() {

		vector<int> vec;
		int numbersofBees;
		const int TARGET = 2023;
		ifstream fileInput;
		fileInput.open(filename);

		if (fileInput.is_open())
		{
			while (fileInput >> numbersofBees) {
				vec.push_back(numbersofBees);
			}
			unordered_map<int, int> map;

			for (int i = 0; i < vec.size(); i++)
			{
				if (map.find(TARGET - vec[i]) != map.end())
				{
					cout << "Pair found (" << vec[map[TARGET - vec[i]]] << ", "
						<< vec[i] << ")\n";
					return;
				}
				map[vec[i]] = i;
			}
			cout << "Pair not found!" << endl;
		}
		else
		{
			cout << "Ошибка открытия файла!";
		}
		fileInput.close();
	}

};

int main()
{
	cout << "Uncle Sam! I can help you!" << endl;
	string filename = "Input task1.txt";
	HiveofSam hive = HiveofSam(filename);
	hive.FileFunction();

}