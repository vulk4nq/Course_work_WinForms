#include "MyForm.h"
#include <time.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>
using namespace System;
using namespace System::Windows::Forms;




[STAThreadAttribute]



void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Coursework::MyForm form;
	Application::Run(% form);
}
void sortOfMassiveIndex(unsigned short* massiveindex);

int prd = 0, srdstv = 0; unsigned short kolvo = 0, kolvo1 = 0,klikc=0; unsigned short** matr;
struct Rezultat {
	unsigned short* posl = new unsigned short[srdstv];
	unsigned short sum;
}; Rezultat* Arr = new Rezultat[1000];
void req(unsigned short* massiveindex, unsigned short*** promezhRezult, int k, int x, Rezultat* prez);
unsigned short*** arraymatr = new unsigned short** [prd];//матрицы для решений
unsigned short*** prRez = new unsigned short** [prd];//промежуточный результат
unsigned short** promezhMax = new unsigned short* [prd];//промежуточный результат (max)
int max = 0;
unsigned short* massindex = new unsigned short[prd * srdstv];
int count2 = 0;


System::Void Coursework::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void Coursework::MyForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	return System::Void();
}

System::Void Coursework::MyForm::buttonGen_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (srdstv == 0 || prd == 0)
	{
		MessageBox::Show("Матрица отсутствует!", "Внимание!");
		return;
	}
	srand(time(NULL));

	for (int i = 0; i < prd; i++)
	{
		matr[i][0] = 0;
		matr[i][1] = 10 + rand() % 60;
		for (int j = 2; j < srdstv; j++)
		{

			matr[i][j] = matr[i][j - 1] + 1 + rand() % 20;
		}
	}
	
	//выводим таблицу
	ShowA();
	//ровняем таблицу
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataGridView1->AutoResizeColumns();//столбцы

	return System::Void();
}

System::Void Coursework::MyForm::buttonMake_Click(System::Object^ sender, System::EventArgs^ e)
{
	//считываем размерность матрицы
	prd = Convert::ToInt32(numericColumn->Value);
	srdstv = Convert::ToInt32(numericRow->Value);
	srdstv++;
	//создаем матрицу
	 matr = new unsigned short* [prd];//матрица с введеными данными где строки средства, а предприятия столбцы
	for (int i = 0; i < prd; i++) matr[i] = new unsigned short[srdstv];
	//Зануляем матрицу
	for (int i = 0; i < prd; i++)
	{
			
		for (int j = 0; j < srdstv; j++)
		{
			 matr[i][j]=0;
		}
	}
	dataGridView1->RowCount = srdstv;
	dataGridView1->ColumnCount = prd;
	//выводим таблицу
	ShowA();
	//ровняем таблицу
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataGridView1->AutoResizeColumns();//столбцы

	return System::Void();
}

System::Void Coursework::MyForm::buttonFromFile_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::ifstream file("IshodnieDanie.txt");
	std::string line; int count_row = 0, count_column = 0;
	do {


		getline(file, line);
		count_row++;


	} while (!file.eof());
	file.close();
	file.open("IshodnieDanie.txt");
	getline(file, line);
	for (int i = 1; i < line.length(); i++)
	{
		if (line[i] == 32) {
			if (count_column == 0) { count_column += 2; }
			else count_column++;

		}
	}
	prd = count_row - 1;
	srdstv = count_column + 1;
	file.close();
	file.open("IshodnieDanie.txt");
	unsigned short** matr = new unsigned short* [prd];//матрица с введеными данными где строки средства, а предприятия столбцы
	for (int i = 0; i < prd; i++) matr[i] = new unsigned short[srdstv];

	
	do {
		for (int i = 0; i < prd; i++)
		{
			matr[i][0] = 0;
			for (int j = 1; j < srdstv; j++)
			{

				file >> matr[i][j];
			}
		}

	} while (!file.eof());
	file.close();
	dataGridView1->RowCount = srdstv;
	dataGridView1->ColumnCount = prd;
	for (int i = 0; i < prd; i++)
	{
		for (int j = 0; j < srdstv; j++)
		{
			//Название таблицы
			dataGridView1->TopLeftHeaderCell->Value = "#";
			//вывод номеров столбцов и строк

			dataGridView1->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);

			dataGridView1->Rows[j]->HeaderCell->Value = Convert::ToString(j);
			//вывод значения матрицы
			//вывод значения матрицы
			dataGridView1->Rows[j]->Cells[i]->Value = matr[i][j];
		}
		//ровняем таблицу
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
		dataGridView1->AutoResizeColumns();//столбцы
	}
	klikc=1;


	return System::Void();
}

System::Void Coursework::MyForm::buttonRez_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (srdstv == 0 || prd == 0)
	{
		MessageBox::Show("Матрица отсутствует!", "Внимание!");
		return;
	}
	
	else {
		for (int i = 0; i < prd; i++)
		{
			for (int j = 0; j < srdstv; j++)
			{

				//ввод значения матрицы
				matr[i][j] = Convert::ToUInt16(dataGridView1->Rows[j]->Cells[i]->Value);
			}
		}
		for (int i = 0; i < prd; i++)
		{
			arraymatr[i] = new unsigned short* [srdstv];
			for (int j = 0; j < srdstv; j++)
			{
				arraymatr[i][j] = new unsigned short[srdstv];
				for (int k = 0; k < srdstv; k++)
					arraymatr[i][j][k] = 0;
			}
		}
		for (int i = 0; i < prd; i++)
		{
			prRez[i] = new unsigned short* [srdstv];
			for (int j = 0; j < srdstv; j++)
			{
				prRez[i][j] = new unsigned short[srdstv];
				for (int k = 0; k < srdstv; k++)
					prRez[i][j][k] = 0;
			}
		}
		for (int i = 0; i < prd; i++)
		{
			promezhMax[i] = new unsigned short[srdstv];
			for (int j = 0; j < srdstv; j++)
			{
				promezhMax[i][j] = 0;
			}
		}
		for (int k = prd - 1; k > -1; k--)
		{
			for (int i = 0; i < srdstv; i++)
			{

				int count = 0;
				for (int j = 0; j < srdstv; j++)
				{

					if (k != prd - 1)
					{
						if (i == j)
						{
							arraymatr[k][i][j] = matr[k][i];
							if (arraymatr[k][i][j] > max) { max = arraymatr[k][i][j]; }
						}
						else {
							if (j <= i)
							{
								if (j < i) {
									arraymatr[k][i][j] = matr[k][j] + promezhMax[k + 1][i - count];
									count++;
								}
								if (arraymatr[k][i][j] > max) { max = arraymatr[k][i][j]; }


							}
						}
						promezhMax[k][i] = max;

					}
					else { arraymatr[k][i][i] = matr[k][i]; promezhMax[k][i] = matr[k][i]; prRez[k][i][0] = i; }
					


				}
				
					
			
				int count1 = 0;
				for (int j = 0; j < srdstv; j++)
				{
					if (arraymatr[k][i][j] == promezhMax[k][i]) {
						prRez[k][i][count1] = j;
						count1++;
					}
				}
				massindex[count2] = count1;
				count2++;
				max = 0;
			}	

		}
	}
	int counter = 0;

	/*for (int k = 0; k < prd; k++) {

		for (int j = 0; j < srdstv ; j++)
		{
			for (int f = 0; f < 4; f++)
				cout << prRez[k][j][f];
			cout << " ";
		}
		cout << endl << endl;
	}*/


	sortOfMassiveIndex(massindex);
	
	req(massindex, prRez, 0, 0, Arr);
	for (int i = 0; i < kolvo; i++)
	{
		Arr[i].sum = promezhMax[0][srdstv - 1];
	}

	tBOut->Text = "При Средствах = " + (srdstv-1) + " мы должны выделить в " + prd + " предприятий ;" + Environment::NewLine+ "Суммарная ожидаемая прибыль = " + promezhMax[0][srdstv - 1] + Environment::NewLine + "Оптимальные планы по предприятиям:\n";
	for (int i = 0; i < kolvo; i++)
	{
		tBOut->Text += String::Format("Решение №{0}:{1}", i+1, Environment::NewLine); 
		for (int j = 0; j < prd; j++)
		{
			//if (Arr[i].posl[j] != 65021)
			tBOut->Text += String::Format("В предприятие №{0} необходимо выделить {1} средств{2}", j+1, Arr[i].posl[j], Environment::NewLine); 
		}


	}
	kolvo1 = kolvo;
	kolvo = 0;
	
	
	
	
		




	return System::Void();
}

System::Void Coursework::MyForm::buttonFileOut_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::ofstream fout("Rezultati.txt", std::ios_base::app);
	if (!fout.is_open()) // если файл не открыт
		tBOut->Text += Environment::NewLine+"Файл не может быть открыт!"+Environment::NewLine; // сообщить об этом
	else {

		fout << "Cуммарная ожидаемая прибыль " << promezhMax[0][srdstv - 1] << std::endl;
		fout << "Кол-во средств " << srdstv - 1 << std::endl;
		fout << "Кол-во предприятий " << prd << std::endl;
		fout << "Кол-во решений " << kolvo1 << std::endl;
		if (prd < 34) {
			fout << "№  ";
			for (int j = 0; j < prd; j++)
			{
				//if (Arr[i].posl[j] != 65021)
				fout << std::setw(4) << j + 1 << " ";
			}
			fout << std::endl;
		}

		for (int i = 0; i < kolvo1; i++)
		{
			fout << i + 1 << ". ";
			for (int j = 0; j < prd; j++)
			{

				fout << std::setw(4) << Arr[i].posl[j] << " ";
			}
			fout << std::endl;

		}
		tBOut->Text += Environment::NewLine + "Файл удачно открыт и решения сохранены!" + Environment::NewLine;
	}
	fout.close();
	return System::Void();
}

System::Void Coursework::MyForm::fAQToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("    Данная программа предназначения для решения задачи оптимального распределения инвестиций.\n    Такого рода задачи основаны на функции Беллмана и при решении используется метод обратной прогонки");
	return System::Void();
}

void Coursework::MyForm::ShowA()
{
	//Вывод исходной матрицы в таблицу
	for (int i = 0; i < prd; i++)
	{
		for (int j = 0; j < srdstv; j++)
		{
			//Название таблицы
			dataGridView1->TopLeftHeaderCell->Value = "#";
			//вывод номеров столбцов и строк
		
			dataGridView1->Columns[i]->HeaderCell->Value = Convert::ToString(i+1);
			
			dataGridView1->Rows[j]->HeaderCell->Value = Convert::ToString(j);
			//вывод значения матрицы
			dataGridView1->Rows[j]->Cells[i]->Value = matr[i][j];
		}
	}
}
void sortOfMassiveIndex(unsigned short* massiveindex)
{

	if (srdstv * prd % 2 == 0) {
		massiveindex[srdstv * prd / 2 - 1] = massiveindex[srdstv * prd / 2 - 1] + massiveindex[srdstv * prd / 2];
		massiveindex[srdstv * prd / 2] = massiveindex[srdstv * prd / 2 - 1] - massiveindex[srdstv * prd / 2];
		massiveindex[srdstv * prd / 2 - 1] = massiveindex[srdstv * prd / 2 - 1] - massiveindex[srdstv * prd / 2];
		for (int i = 0, j = srdstv * prd - 1; i < srdstv * prd / 2 - 1; i++, j--)
		{


			massiveindex[i] = massiveindex[i] + massiveindex[j];
			massiveindex[j] = massiveindex[i] - massiveindex[j];
			massiveindex[i] = massiveindex[i] - massiveindex[j];

		}
	}
	else {
		for (int i = 0, j = srdstv * prd - 1; i < srdstv * prd / 2; i++, j--)
		{

			massiveindex[i] = massiveindex[i] + massiveindex[j];
			massiveindex[j] = massiveindex[i] - massiveindex[j];
			massiveindex[i] = massiveindex[i] - massiveindex[j];

		}
	}

}
void req(unsigned short* massiveindex, unsigned short*** promezhRezult, int k, int x, Rezultat* prez) {

	if (srdstv > 10 || prd > 10) {
		if (k < prd - 1) {




			if (srdstv - x - 1 == promezhRezult[k][srdstv - x - 1][0])
			{
				prez[kolvo].posl[k] = promezhRezult[k][srdstv - x - 1][0];
				for (int f = k; f < prd + 1; f++) prez[kolvo].posl[f + 1] = 0;
				kolvo++;
			}
			else {


				prez[kolvo].posl[k] = promezhRezult[k][srdstv - x - 1][0];
				//cout << prez[kolvo].posl[k] << " ";



				req(massiveindex, promezhRezult, k + 1, promezhRezult[k][srdstv - x - 1][0] + x, prez);
				if (k > 0 && kolvo > 0) prez[kolvo].posl[0] = prez[kolvo - 1].posl[0];

			}


		}
		else {
			prez[kolvo].posl[k] = promezhRezult[k][srdstv - x - 1][0];
			//cout << prez[kolvo].posl[k] << " ";

			kolvo++;

			//	cout << "\n";
		}

	}
	else if (k < prd - 1) {
		for (int i = 0; i < massiveindex[(k) * (srdstv)+x]; i++)
		{


			if (srdstv - x - 1 == promezhRezult[k][srdstv - x - 1][i])
			{
				prez[kolvo].posl[k] = promezhRezult[k][srdstv - x - 1][i];
				for (int f = k; f < prd + 1; f++) prez[kolvo].posl[f + 1] = 0;
				kolvo++;
			}
			else {


				prez[kolvo].posl[k] = promezhRezult[k][srdstv - x - 1][i];
				//cout << prez[kolvo].posl[k] << " ";



				req(massiveindex, promezhRezult, k + 1, promezhRezult[k][srdstv - x - 1][i] + x, prez);
				if (k > 0 && kolvo > 0) prez[kolvo].posl[0] = prez[kolvo - 1].posl[0];

			}

		}
	}
	else {
		prez[kolvo].posl[k] = promezhRezult[k][srdstv - x - 1][0];
		//cout << prez[kolvo].posl[k] << " ";

		kolvo++;

		//	cout << "\n";
	}




}
