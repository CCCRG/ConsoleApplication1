// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
#include <fstream>
#include <ios>
#include <cstdlib>
#include <bitset>
#include <sstream>
#include <iomanip>
#include <ctime>

using namespace std;
char *buff;
fstream *f;
char *buff1;
fstream *f1;
int main()
{
	int type = 3;
	if (type == 3)
	{
		int lenght1;
		const char namef1[] = { "c:\\ffff\\hist_real_time.cfg" };
		f1 = new fstream(namef1, ios::in | ios::binary);
		if (f1->bad()) throw "Error open file";

		f1->seekg(0, f1->end);
		lenght1 = f1->tellg();
		f1->seekg(0, f1->beg);

		buff1 = new char[lenght1 + 10];
		f1->read(buff1, lenght1);
		if (f1->bad()) throw "Error read file";
		ofstream fout1;
		fout1.open("c:\\ffff\\111.txt");
		int i1 = 0;
		float flag = true;
		float flag1 = true;

		while (i1 < (lenght1 - 10) && flag1)
		{

			if (*(buff1 + i1) >(char)0x00 && flag1)
			{
				flag1 = false;
				i1 = i1 - 164 + 536;
			}
			
			if (*(buff1 + i1) > (char)0x00 && flag)
			{
				fout1 << *(buff1 + i1);
				if (*(buff1 + i1 + 1) == (char)0x00)
				{
					flag = false;
					fout1 << "\n";
				}
			}
			if (*(buff1 + i1) == (char)0x00 && !flag)
			{
				if (*(buff1 + i1 + 1) > (char)0x00)
				{
					flag = true;
				}
			}
			i1++;
		}

		fout1.close();
		f1->close();
		delete buff1;
		delete f1;

		//int lenght;
		//double gg = -1.1;
		//char b;
		//char b1;
		//char b2;
		//char b3;
		//char b4;
		//char t1;
		//char t2;
		//char t3;
		//char t4;
		//const char namef[] = { "c:\\ffff\\r62620.fdb" };
		//char byteArray[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
		////char byteArrayl[] = { 0x00, 0x00, 0x00, 0x00 };
		//char byteArrayl[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

		//char byteArrayXOR[] = { 0x00, 0x00, 0x00, 0x00};
		//char byteArray0[] = { 0x00, 0x00, 0x00, 0x00 };

		//f = new fstream(namef, ios::in | ios::binary);
		//if (f->bad()) throw "Error open file";

		//f->seekg(0, f->end);
		//lenght = f->tellg();
		//f->seekg(0, f->beg);

		//buff = new char[lenght + 10];
		//f->read(buff, lenght);
		//if (f->bad()) throw "Error read file";
		//int i;
		//i = 0;
		//ofstream fout;
		//long double ddouble;
		//float dfloat;
		//double bag = -3.423;
		////long llong;
		//unsigned long long llong;
		//unsigned long long llong0;
		//long long llong1;
		//ostringstream ost;
		//ostringstream ost1;
		//ostringstream ost2;
		//const string ccom0 = { (char)0xf8, (char)0x8f, (char)0xff, (char)0xff };
		//const string ccom1 = { (char)0x78, (char)0x17, (char)0xff, (char)0xff };
		//const string ccom2 = { (char)0x78, (char)0x97, (char)0xff, (char)0xff };
		//const string ccom3 = { (char)0x78, (char)0x07, (char)0xff, (char)0xff };
		//const string ccom4 = { (char)0x78, (char)0x87, (char)0xff, (char)0xff };
		//const string ccom5 = { (char)0x78, (char)0xf7, (char)0xff, (char)0xff };
		//const string ccom6 = { (char)0x78, (char)0x37, (char)0xff, (char)0xff };
		//const string ccom7 = { (char)0xf8, (char)0xf7, (char)0xff, (char)0xff };
		//const string ccom8 = { (char)0x7c, (char)0x1f, (char)0xff, (char)0xff };
		//const string ccom9 = { (char)0x00, (char)0x00, (char)0x00, (char)0x00 };
		//const string ccom10 = { (char)0xfc, (char)0x0f, (char)0xff, (char)0xff };
		//const string ccom11 = { (char)0xfc, (char)0x8f, (char)0xff, (char)0xff };
		//const string ccom12 = { (char)0xf8, (char)0x0f, (char)0xff, (char)0xff };
		//const string ccom13 = { (char)0x7c, (char)0x0f, (char)0xff, (char)0xff };
		//const string ccom14 = { (char)0xfc, (char)0x1f, (char)0xff, (char)0xff };
		//const string ccom15 = { (char)0x78, (char)0x1f, (char)0xff, (char)0xff };
		//const string ccom16 = { (char)0xfc, (char)0x9f, (char)0xff, (char)0xff };
		//const string ccom17 = { (char)0xf8, (char)0x9f, (char)0xff, (char)0xff };
		//const string ccom18 = { (char)0x78, (char)0xc7, (char)0xff, (char)0xff };
		//const string ccom19 = { (char)0xf8, (char)0xcf, (char)0xff, (char)0xff };
		//fout.open("c:\\ffff\\222.txt");
		//int fg = 0;
		//unsigned short int np;
		////while (i < lenght - 10)
		//while (i < (lenght - 10))
		//{
		//	if (*(buff + i) == (char)0x10) 
		//	{ 
		//		i = i; 
		//	}			
		//	if ((*(buff + i) == (char)0x10) && (*(buff + i + 12) == (char)0x00) && (*(buff + i + 13) == (char)0x00) && (*(buff + i + 14) == (char)0x00) && (*(buff + i + 15) == (char)0x00) && (*(buff + i + 16) == (char)0x00) && (*(buff + i + 17) == (char)0x00) && (*(buff + i + 18) == (char)0x00) && (*(buff + i + 19) == (char)0x00))
		//	{
		//		ost.str("");
		//		ost1.str("");
		//		ost2.str("");
		//		string com = { (char)0xf8, (char)0x8f, (char)0xff, (char)0xff };
		//		i = i + 4;
		//		for (int bit = 0; bit < 2; bit++)
		//		{
		//			byteArray[bit] = *(buff + i + bit);
		//		}
		//		np = *(unsigned short int*)byteArray;
		//		if (np == 2206)
		//		{ 
		//			np = np; 
		//		}
		//		i = i + 4;
		//		for (int bit = 0; bit < 4; bit++)
		//		{
		//			com[bit] = *(buff + i + bit);
		//		}
		//		i = i + 20;
		//		for (int bit = 0; bit < 4; bit++)
		//		{
		//			byteArray[bit] = *(buff + i + bit);
		//		}
		//		llong = *(unsigned long long*)byteArray;
		//		t4 = byteArray[3];
		//		t3 = byteArray[2];
		//		t2 = byteArray[1];
		//		t1 = byteArray[0];
		//		b = byteArray[3];
		//		ost << np;
		//		//llong1 = llong1 / 10000000;
		//		llong = llong - 14400;
		//		if (llong < 15184341460)
		//		{
		//			time_t temp = llong;
		//			tm *ltm = localtime(&temp);
		//			ost2 << 0 + ltm->tm_mday << ".";
		//			ost2 << 1 + ltm->tm_mon << ".";
		//			ost2 << 1900 + ltm->tm_year << " ";
		//			ost2 << ltm->tm_hour << ":";
		//			ost2 << ltm->tm_min << ":";
		//			ost2 << ltm->tm_sec;
		//		}
		//		i = i + 12;
		//		for (int bit = 0; bit < 4; bit++)
		//		{
		//			byteArray[bit] = *(buff + i + bit);
		//		}
		//		dfloat = *(float*)byteArray;
		//		ost1 << dfloat;
		//		b4 = byteArray[3];
		//		b3 = byteArray[2];
		//		b2 = byteArray[1];
		//		b1 = byteArray[0];

		//		//byteArrayXOR[3] = (char)0xff;
		//		//byteArrayXOR[2] = (char)0xff;
		//		//byteArrayXOR[1] = (char)0xff;
		//		//byteArrayXOR[0] = (char)0xff;

		//		//for (int bit = 0; bit < 4; bit++)
		//		//{
		//		//	byteArray0[bit] = byteArray[bit];
		//		//}
		//		
		//		fout << ost2.str() << "           " << ost1.str() << "           " << ost.str() << "\n";

		//		i = i + 4;
		//		int flg = 1;
		//		int bt0 = 0;
		//		int bt1 = 3;
		//		int bt2 = 3;
		//		int bt3 = 3;
		//		int bt4 = 3;
		//		int bt5 = 0;
		//		while ((flg > 0) && (i < (lenght - 10)))
		//		{
		//			for (int bit = 0; bit < 6; bit++)
		//			{
		//				if ((*(buff + i + 2 + bit) == (char)0x00) && (*(buff + i + 3 + bit) == (char)0x00) && (*(buff + i + 4 + bit) == (char)0x10) && (*(buff + i + 5 + bit) == (char)0x00) && (*(buff + i + 6 + bit) == (char)0x00))
		//				{
		//					bt5 = 1;
		//					break;
		//				}
		//				else
		//				{
		//					bt5 = 0;
		//				}
		//			}
		//			if (bt5 == 1)
		//			{
		//				flg = 0;
		//			}
		//			else 
		//			{ 
		//				ost1.str("");
		//				ost2.str("");
		//				if (com == ccom0)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 3;
		//					bt3 = 3;
		//					bt4 = 3;
		//				}
		//				if (com == ccom1)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 4;
		//					bt3 = 4;
		//					bt4 = 4;
		//				}
		//				if (com == ccom2)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 4;
		//					bt3 = 3;
		//					bt4 = 3;
		//					bt5 = 1;
		//				}
		//				if (com == ccom3)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 5;
		//					bt3 = 4;
		//					bt4 = 4;
		//				}
		//				if (com == ccom4)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 5;
		//					bt3 = 3;
		//					bt4 = 3;
		//				}
		//				if (com == ccom5)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 5;
		//					bt3 = 0;
		//					bt4 = 0;
		//				}
		//				if (com == ccom6)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 3;
		//					bt3 = 4;
		//					bt4 = 4;
		//				}
		//				if (com == ccom7)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 4;
		//					bt3 = 0;
		//					bt4 = 0;
		//				}
		//				if (com == ccom8)
		//				{
		//					bt0 = 0;
		//					bt1 = 2;
		//					bt2 = 2;
		//					bt3 = 4;
		//					bt4 = 4;
		//				}
		//				if (com == ccom9)
		//				{
		//					bt0 = 0;
		//					bt1 = 4;
		//					bt2 = 12;
		//					bt3 = 4;
		//					bt4 = 4;
		//				}
		//				if (com == ccom10)
		//				{
		//					bt0 = 0;
		//					bt1 = 2;
		//					bt2 = 2;
		//					bt3 = 4;
		//					bt4 = 4;
		//				}
		//				if (com == ccom11)
		//				{
		//					bt0 = 0;
		//					bt1 = 2;
		//					bt2 = 2;
		//					bt3 = 3;
		//					bt4 = 3;
		//				}
		//				if (com == ccom12)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 3;
		//					bt3 = 4;
		//					bt4 = 4;
		//				}
		//				if (com == ccom13)
		//				{
		//					bt0 = 0;
		//					bt1 = 2;
		//					bt2 = 3;
		//					bt3 = 4;
		//					bt4 = 4;
		//				}
		//				if (com == ccom14)
		//				{
		//					bt0 = 0;
		//					bt1 = 2;
		//					bt2 = 2;
		//					bt3 = 3;
		//					bt4 = 3;
		//				}
		//				if (com == ccom15)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 3;
		//					bt3 = 4;
		//					bt4 = 4;
		//				}
		//				if (com == ccom16)
		//				{
		//					bt0 = 0;
		//					bt1 = 2;
		//					bt2 = 2;
		//					bt3 = 2;
		//					bt4 = 2;
		//				}
		//				if (com == ccom17)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 3;
		//					bt3 = 2;
		//					bt4 = 2;
		//				}
		//				if (com == ccom18)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 5;
		//					bt3 = 2;
		//					bt4 = 2;
		//				}
		//				if (com == ccom19)
		//				{
		//					bt0 = 0;
		//					bt1 = 3;
		//					bt2 = 3;
		//					bt3 = 2;
		//					bt4 = 2;
		//				}
		//				byteArray[3] = (char)0x00;
		//				byteArray[2] = (char)0x00;
		//				byteArray[1] = (char)0x00;
		//				byteArray[0] = (char)0x00;

		//				byteArray[3] = t4;
		//				byteArray[2] = t3;
		//				byteArray[1] = t2;
		//				byteArray[0] = t1;
		//				for (int bit = 0; bit < bt1; bit++)
		//				{
		//					byteArray[bit] = *(buff + i + bit);
		//				}
		//				
		//				llong = *(unsigned long long*)byteArray;
		//				i = i + bt2;
		//				byteArray[3] = (char)0x00;
		//				byteArray[2] = (char)0x00;
		//				byteArray[1] = (char)0x00;
		//				byteArray[0] = (char)0x00;

		//				byteArray[3] = b4;
		//				byteArray[2] = b3;
		//				byteArray[1] = b2;
		//				byteArray[0] = b1;
		//				for (int bit = 0; bit < bt3; bit++)
		//				{
		//					byteArray[bit] = *(buff + i + bit);
		//				}
		//				
		//				dfloat = *(float*)byteArray;
		//				//for (int bit = 0; bit < 4; bit++)
		//				//{
		//				//	byteArrayXOR[bit] = byteArrayXOR[bit] & (~(byteArray0[bit] ^ byteArray[bit]));
		//				//}
		//				ost1 << dfloat;
		//				i = i + bt4;
		//				llong = llong - 14400;
		//				if (llong < 15184341460)
		//				{
		//					time_t temp = llong;
		//					tm *ltm = localtime(&temp);
		//					ost2 << 0 + ltm->tm_mday << ".";
		//					ost2 << 1 + ltm->tm_mon << ".";
		//					ost2 << 1900 + ltm->tm_year << " ";
		//					ost2 << ltm->tm_hour << ":";
		//					ost2 << ltm->tm_min << ":";
		//					ost2 << ltm->tm_sec;
		//				}
		//				fout << ost2.str() << "           " << ost1.str() << "           " << ost.str() << "\n";
		//				if (ost2.str() == "29.1.2018 13:54:14")
		//				{
		//					np = np;
		//				}
		//				flg++; 
		//				if (flg == 200)
		//				{
		//					flg = flg;
		//				}
		//			}
		//			
		//		}
		//	}
		//	i = i++;
		//}
		//fout.close();
		//f->close();
		//delete buff;
		//delete f;
		//return 0;
	}

	if (type == 2)
	{
		int lenght;


		
		double gg = -1.1;
		char b;
		const char namef[] = { "c:\\ffff\\18012900.lgh" };
		char byteArray[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
		//char byteArrayl[] = { 0x00, 0x00, 0x00, 0x00 };
		char byteArrayl[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

		f = new fstream(namef, ios::in | ios::binary);
		if (f->bad()) throw "Error open file";

		f->seekg(0, f->end);
		lenght = f->tellg();
		f->seekg(0, f->beg);

		buff = new char[lenght + 10];
		f->read(buff, lenght);
		if (f->bad()) throw "Error read file";
		int i;
		i = 0;
		ofstream fout;
		long double ddouble;
		double bag = -3.423;
		//long llong;
		unsigned long long llong;
		unsigned long long llong0;
		long long llong1;
		ostringstream ost;
		ostringstream ost1;
		ostringstream ost2;
		fout.open("c:\\ffff\\222.txt");
		int fg = 0;
		while (i < lenght - 10)
		{
			if (*(buff + i) == (char)0xEC)
			{
				ost.str("");
				ost1.str("");
				ost2.str("");
				for (int bit = 0; bit < 8; bit++)
				{
					byteArray[bit] = *(buff + i + bit);
				}
				llong = *(unsigned long long*)byteArray;
				i = i + 8;
				for (int bit = 0; bit < 8; bit++)
				{
					byteArray[bit] = *(buff + i + bit);
				}
				llong1 = *(unsigned long long*)byteArray;
				ost << llong;
				llong1 = llong1 / 10000000;
				if (llong1 < 15184341460)
				{
					time_t temp = llong1;
					tm *ltm = localtime(&temp);
					ost2 << 1 + ltm->tm_mday << ".";
					ost2 << 1 + ltm->tm_mon << ".";
					ost2 << 1531 + ltm->tm_year << " ";
					ost2 << ltm->tm_hour << ":";
					ost2 << ltm->tm_min << ":";
					ost2 << ltm->tm_sec;
				}
				i = i + 8;
				for (int bit1 = 0; bit1 < 100; bit1++)
				{
					if (*(buff + i + bit1) != (char)0x00)
					{
						ost1 << (char)*(buff + i + bit1);
					}
					else
					{
						break;
					}
				}
				//fout << ost2.str() << "           " << ost.str() << "           " << ost1.str() << "\n";
				i = i + 40;
				int flg = 1;
				while (flg > 0)
				{
					ost.str("");
					ost2.str("");
					for (int bit = 0; bit < 8; bit++)
					{
						byteArray[bit] = *(buff + i + bit);
					}
					llong1 = *(unsigned long long*)byteArray;
					i = i + 8;
					for (int bit = 0; bit < 8; bit++)
					{
						byteArray[bit] = *(buff + i + bit);
					}
					ddouble = *(long double*)byteArray;
					i = i + 8;
					if (llong1 == 0 && ddouble == 0.00000000000000000)
					{
						flg = 0;
					}
					else
					{
						llong1 = llong1 / 10000000;
						if (llong1 < 15184341460)
						{
							time_t temp = llong1;
							tm *ltm = localtime(&temp);
							ost2 << ltm->tm_mday << ".";
							ost2 << 1 + ltm->tm_mon << ".";
							ost2 << 1531 + ltm->tm_year << " ";
							ost2 << ltm->tm_hour << ":";
							ost2 << ltm->tm_min << ":";
							ost2 << ltm->tm_sec;
						}
						ost << ddouble;
						fout << ost2.str() << "           " << ost.str() << "           " << ost1.str() << "\n";
						flg++;
					}
				}
			}
			i = i++;
		}
		fout.close();
		f->close();
		delete buff;
		delete f;
		return 0;
	}

	if (type == 1)
	{
		int lenght;
		string st("");
		string st1("");
		double gg = -1.1;
		char b;
		const char namef[] = { "c:\\ffff\\UVEK_PAZ_TRL2_3gr_TK-100_201801.db" };
		char byteArray[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
		//char byteArrayl[] = { 0x00, 0x00, 0x00, 0x00 };
		char byteArrayl[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

		f = new fstream(namef, ios::in | ios::binary);
		if (f->bad()) throw "Error open file";

		f->seekg(0, f->end);
		lenght = f->tellg();
		f->seekg(0, f->beg);

		buff = new char[lenght + 10];
		f->read(buff, lenght);
		if (f->bad()) throw "Error read file";
		int i;
		i = 0;
		ofstream fout;
		long double ddouble;
		double bag = -3.423;
		//long llong;
		unsigned long long llong;
		unsigned long long llong0;
		long long llong1;
		fout.open("c:\\ffff\\222.txt");

		while (i < lenght - 10)
		{
			b = *(buff + i);
			if (b == (char)0x80) {
				if (*(buff + i + 11) == (char)0x80)
				{
					if ((*(buff + i - 8)&((char)0x80)) == ((char)0x80))
					{
						for (int bit = 0; bit < 8; bit++)
						{
							byteArray[bit] = *(buff + i - bit - 1);
							if (bit == 7)
							{
								byteArray[bit] = *(buff + i - bit - 1) & 0x7f;
							}
						}
					}
					else
					{
						for (int bit = 0; bit < 8; bit++)
						{
							byteArray[bit] = ~*(buff + i - bit - 1);
						}
					}
					ddouble = *(long double*)byteArray;

					if (bag == ddouble)
					{
						bag = bag;
					}

					for (int bit = 0; bit < 8; bit++)
					{
						byteArrayl[bit] = *(buff + i - bit + 10);
					}
					llong = *(unsigned long long*)byteArrayl;

					ostringstream ost;
					ostringstream ost1;
					ostringstream ost2;
					ost << ddouble;
					st1 = ost.str();
					ost << "              ";
					//ost1 << llong;
					ost1 << llong;
					for (int bit = 0; bit < 8; bit++)
					{
						b = *(buff + i + bit + 3);
						ost << 128 + (int)b << ":";
					}
					st = "";
					//for (int bit = 0; bit < 10; bit++)
					//{
					//	b = *(buff + i - bit - 21);
					//	if (b != 0) st = st + b;
					//}

					int sw = 0;
					int speed = 0;
					while (speed < 60 && !((*(buff + i - sw - 21) == (char)0x80) || ((*(buff + i - sw - 21) == (char)0x00) && st != "")))
					{
						b = *(buff + i - sw - 21);
						if (b != 0) st = st + b;
						speed += 1;
						sw += 1;
					}
					reverse(st.begin(), st.end());

					llong0 = 13889888782657446762;
					llong1 = (llong - llong0) / 500 - 3600 + 2;
					if (llong1 < 1518434146)
					{
						time_t temp = llong1;
						tm *ltm = localtime(&temp);
						ost2 << ltm->tm_mday << ".";
						ost2 << 1 + ltm->tm_mon << ".";
						ost2 << 1900 + ltm->tm_year << " ";
						ost2 << ltm->tm_hour << ":";
						ost2 << ltm->tm_min << ":";
						ost2 << ltm->tm_sec;
					}

					if (st == "LL.CV")
						//if (st == "TT[0].CV")
						//if (st == "VP.CV")
					{
						if (st1 == "-0.1") {
							st = st;
						}
						if (st1 == "44.8") {
							st = st;
						}
						fout << ost.str() << "           " << ost1.str() << "           " << st << "           " << ost2.str() << "\n";
					}
				}
			}
			i = i++;
		}
		fout.close();
		f->close();
		delete buff;
		delete f;
		return 0;
	}
}