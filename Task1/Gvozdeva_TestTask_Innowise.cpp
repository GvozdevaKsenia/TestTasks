#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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

		ifstream fileInput;
		fileInput.open(filename);

		if (fileInput.is_open()) 
		{
			while (fileInput >> numbersofBees) {
				vec.push_back(numbersofBees);
			}
			for (int i = 0; i < vec.size(); i++) {
				for (int j = 1; j < vec.size() - 1; j++) {
					int result = vec[i] + vec[j];
					if (result == 2023 ) {
						cout <<vec[i]<< " - " << vec[j] << endl;
						i = vec.size();
						break;
					}	
				}
			}
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
	cout << "Uncle Sam! I can help you!"<<endl;
	string filename = "Input task1.txt";
	HiveofSam hive = HiveofSam(filename);
	hive.FileFunction();

}