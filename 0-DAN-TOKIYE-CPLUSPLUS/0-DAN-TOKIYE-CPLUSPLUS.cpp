
/*
1-Giris
#include <iostream> // kutuphaneyi dahil etmek icin kullan�yoruz.
using namespace std; // "using namespace std;" ifadesi, C++ dilinde kullan�lan bir �zelliktir. "std" (Standard) isim alan�, C++ standart k�t�phanesindeki t�m fonksiyonlar�, s�n�flar� ve di�er ��eleri i�erir.
int main(){
cout << "helloworld!;
return 0;
}
*/



//Kaynak dosyalar�m�z�n hepsi gcc compiler ile makine koduna don�st�r�l�yor.

/* 2-de�i�ken tipleri ve de�i�kenler

		5 ilkel veri tipi
		int : tam sayi
		float : ondalik
		double : ondalik, daha y�ksek ondalikli sayi veri tipi
		char : tek karakter
		bool : true or false : her bir boolean deger bir tamsayiya karsilik geliyor.

		*/

		/*3-
			Temel operat�rler

			(+,-,*,/)

			int sayi1 = 1;
			int sayi2 = 2;
			cout << sayi1+sayi2;
			cout << sayi1-sayi2;
			cout << sayi1*sayi2;
			cout << float(sayi1)/sayi2; tam bir deger icin
			int a = 5;
			cout << "a'nin degeri : " << a << endl;
			a = a + 2; veya a+=2; diyebiliriz
			cout << "a'nin yeni degeri : " << a << endl;

		*/

		/*
		4- Input alma
			int a;
			cout <<"a degerini giriniz : ";
			cin >> a

			<< : i�areti output vermeye yar�yor.
			>> : i�areti input vermeye yar�yor.

			int a,b,c;
			cout <<"birinci sayi : " << endl;
			cin >> a;
			cout <<"ikinci sayi : " << endl;
			cin >> b;
			cout <<"ucuncu sayi : " << endl;
			cin >> c;

			cout << "TOPLAMLARI:" << a+b+c<< endl;


			say�lari yanyana girmek istiyorsakta: bosluklu bir sekilde yaz�yoruz.
			cout <<"Sayilari giriniz: ";
			cin>> a >> b >> c;
			*/

			/*
			5-
			STRINGLER :
			c' de string veri tipi bulunmuyor.

			c++ ta 1 tane bulunuyor.

				string str1 = "Bu bir stringtir.";
				string str2 = "bu da bir stringtir.";

				cout << "Str1:"<< str1 << endl;
				cout << "str2:" << str2 << endl;
				string str3 = str1 + str2;
				cout << "Str3:" << str3 << endl;



			*/

			/*

			IF-ELSE IF- ELSE bloklari:

			string password = "yazilim";
				string input;
				cout << "l�tfen parolanizi giriniz: ";
				cin >> input;
				if (password == input) {
					cout << "parolanizi dogru girdiniz!" << endl;
				}
				else
					cout << "parolanizi yanlis girdiniz!" << endl;

			-------------------------------------------------------
			int a, b;
				string islem;
				cout << "***************************************************" << endl;
				cout << "*                                                 *" << endl;
				cout << "*      Hesap Makinesi Programina Hosgeldiniz      *" << endl;
				cout << "*                                                 *" << endl;
				cout << "***************************************************" << endl;
				cout << endl;
				cout << "1.��lem : Toplama i�lemi " << endl;
				cout << "2.��lem : ��karma i�lemi " << endl;
				cout << "3.��lem : �arpma i�lemi " << endl;
				cout << "4.��lem : B�lme i�lemi " << endl;
				cout << endl;
				cout << "��lemi giriniz : ";
				cin >> islem;

				if (islem == "1") {
					cout << "ilk sayiyi giriniz : ";
					cin >> a;
					cout << "ikinci sayiyi giriniz: ";
					cin >> b;
					cout << "��lem Sonucu : " << a << " + " << b << " = " << a + b;
				}
				else if (islem == "2") {
					cout << "ilk sayiyi giriniz : ";
					cin >> a;
					cout << "ikinci sayiyi giriniz: ";
					cin >> b;
					cout << "��lem Sonucu : " << a << " - " << b << " = " << a - b;
				}
				else if (islem == "3") {
					cout << "ilk sayiyi giriniz : ";
					cin >> a;
					cout << "ikinci sayiyi giriniz: ";
					cin >> b;
					cout << "��lem Sonucu : " << a << " * " << b << " = " << a * b;
				}
				else if (islem == "4") {
					cout << "ilk sayiyi giriniz : ";
					cin >> a;
					cout << "ikinci sayiyi giriniz: ";
					cin >> b;
					cout << "��lem Sonucu : " << a << " / " << b << " = " << a / b;
				}
				else
					cout << "Hatali giri� yaptiniz!";



			-------------------------
			b�ylede bir kullan�m var. unutmamak laz�m
			a > b ? b*a : b/a
			*/

			/*
			8-Mant�ksal operat�rler:

			or operat�r� : ||
			and operat�r� : &&
			not operat�r� : !



			*/

			/*
			9-while d�ng�leri :

			While d�ng�lerinde ko�ullu ifade zorunludur �rne�in :

			while(true){
			}
			while(i>10)
			gibi
			---------------------
			int i = 1;
				while (i <= 10) {
					cout << i << endl;
					i++;
				}

			*/

			/*
			10-
			do-while d�ng�s�

			ilk olarak do i�indeki yap�l�r sonra d�ng�de kontrol edilir.
			---------
			int a;
				do {
					cout << "deger giriniz : ";
					cin >> a;

				} while (a < 10);

			*/

			/*
			11-
			For d�ng�leri

			c den ayr�lan bir �zelli�i var;
			for(int i=1;i < 5;i++) diyebiliyoruz i�erde sadece bu for i�in �zg� bir i tan�mlayabiliyoruz.

			*/

			/*
			12-
			Break, Continue ifadeleri

			Break : d�ng�y� k�rar

			Continue : d�ng�n�n en ba��na d�nmemizi sa�lar. ve alt�ndaki linelar� okumaz.

			�rnek :
			int i = 0;
					while (i < 10) {
						if (i == 3 || i == 5)
						{
							i++;
							continue;
						}
						cout << "i : " << i << endl;
						i++;
				}
			>>Bu kod 3 ve 5 harici 0 dan ba�lay�p 9 a kadar terminalde g�rece�iz.

			---------------------
			Di�er �rnek :
			while (true) {
					cout << "Kullanici adini giriniz : ";
					cin >> username;
					cout << "�ifreyi giriniz : ";
					cin >> password;

					if (username != "bilal" || password != "123456") {
						yanlis_girilen_sayi--;
						if (yanlis_girilen_sayi == 0) {
							break;
						}
					}
					else {
						cout << "Ba�ar�yla giri� yaptiniz !";
						break;
					}
				}
			*/

			/*
			13-
			Arrayler ve �zellikleri
			--Arrayler birden fazla deger tutabilen bir veri yapisidir.(int,double,char, vb.). Dizi �zellikle, ayni t�rdeki birden fazla veri i�in tek bir de�i�ken tan�mlamak i�in kullan�labilir.

			// arrayler 0. indexten ba�lar
				int array[3];

				array[0] = 1; // 0. index
				array[1] = 2; // 1. index
				array[2] = 3; // 2. index

				cout << array[0] << endl;
				cout << array[1] << endl;
				cout << array[2] << endl;


				//di�er kullan�m �rne�i:
				int array2[] = { 4,5,6,7,8 };
				cout << array2[0] << endl;
				cout << array2[1] << endl;
				cout << array2[2] << endl;
				cout << array2[3] << endl;
				cout << array2[4] << endl;

				int array3[] = { 9,10,11,12,13,14 };
				for (int i = 0; i < sizeof(array3)/sizeof(int); i++) {
					cout << array3[i] << endl;
				}


			-------------------------------------
				S�n�rs�z eleman almak i�in Dizilerde
				#include vector

				vector<int> array; diyebiliriz. �rnek kod :
			>>>>>>>>
			#include <iostream>
			#include <vector>

			using namespace std;

			int main() {
				vector<int> array;

				cout << "Lutfen elemanlari giriniz (bitirmek icin -1 giriniz): " << endl;

				int num;
				while (cin >> num && num != -1) {
					array.push_back(num);
				}

				cout << "Girilen elemanlar: " << endl;
				for (int i = 0; i < array.size(); i++) {
					cout << array[i] << endl;
				}

				return 0;
			}
			---------------------------------------
			Di�er bir �rnek:
			string array4[4];
				for (int i = 0; i < 4; i++) {
					cin >> array4[i];
				}
				for (int i = 0; i < 4; i++) {
					cout << i << ". degeri : " << array4[i] << endl;
				}
			*/

			/*
			14-
			�ok boyutlu arrayler ve �zellikleri


			// iki boyutlu arrayler i�in belirtmemiz gerek 3 sat�r ve 2 s�t�ndan olu�uyor diye.
				int array[3][3];
				cout << "matris degerlerini giriniz : ";
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						cin >> array[i][j];
					}
				}
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						cout << array[i][j] << " ";
					}
					cout << endl;
				}
			*/

			/*
			15-
			Switch Case Yapilari
			--------------------
			// breakleri silersek, di�er casede break g�rene kadar calistiriyor. Switch durumundan ��kmam�z� sa�lar.
				int islem;
				cout << "islem giriniz : ";

				cin >> islem;

				switch (islem) {
				case 1:
					cout << "1. islemi sectiniz..." << endl;
					break;
				case 2:
					cout << "1. islemi sectiniz..." << endl;
					break;
				case 3:
					cout << "1. islemi sectiniz..." << endl;
					break;
				case 4:
					cout << "1. islemi sectiniz..." << endl;
					break;
				default:
					cout << "Hic bir islemi secmediniz" << endl;
					break;
				}

			*/

			/*
			16-
			Fonksiyon Tan�mlama, Fonksiyon �a�r�s� ve Parametreli Fonksiyonlar
			----------------
			void faktoriyel(int sayi) { // void : bu fonksiyondan herhangi bir ��kt� alam�yoruz.
				int fak = 1;
				for (int i = 1; i <= sayi; i++) {
					fak = fak * i;
				}
				cout << fak;
			}

			int main() { //calistirabilir b�t�n c++ projelerinde olmas� gereken bir main fonksiyonu. Main metodu sadece int olabilir.
				setlocale(LC_ALL, "Turkish");
				//fonksiyonlar programlama dillerinin en �nemli yap�lar�ndan birisidir. Fonksiyonlar�n kullan�lmas� projelerimizin olduk�a minimalize edebilmemizi sa�l�yor.
				// c++ projelerimizi �al��t�r�rken yukar�dan a�a��ya do�ru calistiriyor, fonksiyonumuzu a�a��da tan�mlarsak ve �st tarafta function call yaparsak, c++ bunu g�remiyor.
				// Fonksiyon prototipi diye bir�ey girebiliriz yukarda ve a�a��da fonksiyon yazsakta �al���r duruma gelir.
				int a;
				cout << " faktoriyelini hesaplamak istediginiz sayiyi giriniz: ";
				cin >> a;
				faktoriyel(a); //function call
				return 0;
			}
			*/

			/*
			17-
			Fonksiyonlarda return
			---------------
			int faktoriyel(int sayi) { // void : bu fonksiyondan herhangi bir ��kt� alam�yoruz.
				int fak = 1;

				for (int i = 1; i <= sayi; i++) {
					fak = fak * i;
				}
				cout << fak << endl;
				return fak;

			}

			int main() { //calistirabilir b�t�n c++ projelerinde olmas� gereken bir main fonksiyonu. Main metodu sadece int olabilir.
				setlocale(LC_ALL, "Turkish");
				int a;
				cout << " faktoriyelini hesaplamak istediginiz sayiyi giriniz: ";
				cin >> a;
				int c = faktoriyel(a); //function call
				c *= c;
				cout << c;

				return 0;


			}



			*/

			/*
			18-
			Pointerlara giri�

			int a = 5;
				// a'n�n adres de�erini atamak i�in
				int *ptr = &a;

				cout << "De�i�kenin adresi : " << &a << endl;
				cout << "De�i�kenin adresi : " << ptr << endl;
				cout << "De�i�kenin degeri : " << *ptr << endl; //de�i�kenin degerini *ptr ile alabiliriz.
				*ptr = 4; // a de�i�kenin degerini degistirmek.

				cout << "Degiskenin yeni degeri : " << a << endl;
				cout << "degiskenin yeni degeri : " << *ptr << endl;

			//cpu ile ram aras�ndaki ba�lant�da �rne�in int a = 5; 'in kaplad��� alan bellekte 4 byte't�r. Bu mimariye g�re de�i�ebilir. x86 mimaride 4 byte, x64'te 8 byte ama x64'tede 4 byte kullan�labilir.
			//pointerlar asl�nda ba�lang�� adres de�erlerini ta��yan bir de�i�kendir.
			*/

			/*
			19-
			Pointerlar�n kullan�lma mant���

			void degerDegistir(int *ptr){
				*ptr = 20;
				cout << "fonksiyon i�indeki deger : " << *ptr << endl;
			}

			int main(){
			int a = 10;
			cout << "a'nin degeri : "  << a << endl;
			degerDegistir(&a);
			cout << "a'nin fonksiyondan sonraki degeri : << a <<endl; // biz pointer kullan�p adresini atad���m�zda art�k
			}



			*/

			/*
						20-
						Pointer Aritmeti�i ve Arraylerle Pointerlar Aras�ndaki �li�ki
						-----------------
						/*int array[] = {1,2,3,4,5};

						cout << array << endl;//0x23fe40
						//cout << array + 1 << endl; //0x23fe44 : 4 byte nereden geliyor ? integer de�erlerimiz 4 byte ta��d��� i�in bellekteki ba�lang�� adresim x ise, di�er adresim x+4 oluyor. + 2 yapsayd�k x+8 (0x23fe48) olacakt� gibi. Yani biz +1 dedi�imizde adresi +1 artt�rm�yoruz, bir sonraki kutucu�un adresini alm�� oluyoruz.

						int *ptr = array; //olu�turdu�umuz bu pointer arrayimizin ba�lang�� adresini tutacak.
						cout << *ptr << endl;
						ptr = ptr + 1; // bir sonraki degere gitmek icin yani arraydeki 2
						cout << "Pointerin yeni adres degeri : " << ptr << endl;
						cout << "Pointerin yeni degeri : " << *ptr << endl;

						int* ptr2 = &array[2]; // 2. indeksin adres de�erini pointera atamak.
						cout << "Pointerin 2. yeni degeri : " << * ptr2 << endl;


						string array[] = { "Megatron", "Lord", "Veli" };
						string* ptr = array;
						cout << ptr + 1 << endl;//1. indeksin adresini g�steriyor.
						//adrese gidip ordaki de�eri nas�l alaca��z ? :
						cout << *(ptr + 1) << endl; // array[1] == *(ptr +1) == ptr[1] : hi�bir farki yok
						// arraylerin indekslerin a�mamaya �zen g�sterelim.
						cout << array[3] << endl;


						*/

						/*
						21-
						Referanslar
						Referanskar�n pointerlar ile bir fark� yok gibi g�r�nsede asl�nda kullan�mlar� a��s�ndan farkl�d�r.
						/*void degerDegistir(int& ref) {
						ref = 20;
						}

						int main() {

						int a = 10;
						//int& ref = a; // ampersant i�areti kesinlikle adresi simgelemiyor, sadece referans oldu�unu s�yl�yor
						//ref++;
						cout << "a'nin degeri : " << a << endl;
						// bir fonksiyon i�inde kullan�rsak ayn� bir pointer gibi a'm�z�n de�erini yine de�i�tirmemizi sa�l�yor.
						//degerDegistir(a);

						cout << "a'nin yeni degeri : " << a;
						return 0;
						//referanslarda direkt a'nin degerini atiyoruz, pointerlarda a'nin adres degerini atiyoruz. en temel farkl�l�klar�dan birisi.
						//basit i�lemlerde referans kullanabiliyoruz.
			}
						*/

						/*
						22-
						Arrayler ve Fonksiyonlar
						void printArray(int *ptr, int size) {
						for (int i = 0; i < size; i++) {
						cout << ptr[i] << endl;
						}
						}
						int main() {

						int a[] = { 1,2,3,4,5 };
						printArray(a, 5);
			}
						*/

						/*
						23-
						Constant Anahtar Kelimesi
						const anahtar kelimesi kulland���m�z bir de�i�keni, sonradan de�i�tiremiyoruz. veya arrayin daha sonra de�i�tiremiyoruz. OOP de bir fonksiyon olarakta kullan�labiliyor.

						const int a = 5;
						cout << a << endl;
						a = 12;
						cout << a << endl; // hata ��kart�r.

						const int b[] = {1,2,3,4,5};
						b[2] = 100; // hata verir.


						*/

						/*
						24-
						Pointerlar ve Const
						void printArray(const int *ptr1, const int *ptr2) { //burada pointer a atanan de�er de�i�mez, ama pointerin adres degeri de�i�ebilir.

						*ptr1 = 100; // bu yanlis olacak hata al�r�z.
						for (; ptr1 != ptr2; ptr2--) {

						cout << "Eleman: " << *ptr2 << endl;
						}
						}
						int main() {

						int array[] = { 1,2,3,4,5,6,7,8,9,10 };
						printArray(array+2,array+7);
						return 0;
						}
						*/

						/*
						25-
						Yap�lar (Structurelar)
						//Structurelar bizim c++'ta bir obje �retmek i�in olu�turdu�umuz yap�lard�r

						struct Employee {
						int id;
						string name;
						string department;
						};

						int main() {

						Employee employee1; // Employee employee1 = {12,"Mami","Bilisim"} biz degerleri daha sonradanda verebiliriz.
						employee1.id = 12;
						employee1.name = "Mami";
						employee1.department = "Bilisim"

						cout << employee1.name << endl;
						cout << employee1.department << endl;

						employee1.name = "Mahmut";
						cout << employee1.name << endl;

						return 0;
						}
						*/

						/*
						26-
						Pointerlar ve Yap�lar

						struct Employee {
						int id;
						string name;
						string department;
						};

						int main() {

						Employee employee1;
						employee1.id = 12;
						employee1.name = "Mami";
						employee1.department = "Bilisim";

						//burdaki pointer i�in int ptr, int string gibi de�ilde �u �ekil, Employee* ptr
						Employee* ptr = &employee1;
						cout << ptr->department << endl;
						}
						*/

						/*
						27-
						Fonksiyonlar ve Yap�lar
						------------
						struct Employee {
						int id;
						string name;
						string department;
						};

						void showEmployee(Employee employee)
						{
						cout << "Id : " << employee.id << endl;
						cout << "Isim : " << employee.name << endl;
						cout << "Departman : " << employee.department << endl;

						}
						void show(Employee* employee) {
						employee->id = 11;// bu sekilde de�istirebiliriz.
						cout << "Id : " << employee->id << endl;
						cout << "Isim : " << employee->name << endl;
						cout << "Departman : " << employee->department << endl;
						}
						int main() {

						Employee employee1;
						employee1.id = 12;
						employee1.name = "Mami";
						employee1.department = "Bilisim";

						//burdaki pointer i�in int ptr, int string gibi de�ilde �u �ekil, Employee* ptr
						Employee * ptr = &employee1;
						cout << ptr->department << endl;
						showEmployee(employee1);
						show(&employee1);
						// biz bu structuredaki employee1 deki verimizi de�i�tirmek istiyorsak pointer kullanmam�z gerekir. Pass by reference, call by reference
						}
						*/

						/*
						28- �� i�e yap�lar (Nested Structure)
						struct Address {
						string cityName;
						int No;
						};

						struct Employee {
						int id;
						string name;
						string department;
						Address address;
						};

						int main() {
						setlocale(LC_ALL, "Turkish");
						Employee employee1 = { 12,"Mustafa Sarigul","Bilisim",{"Ankara",5} };
						cout << employee1.id << endl;
						cout << employee1.name << endl;
						cout << employee1.department << endl;
						cout << employee1.address.cityName << endl;
						cout << employee1.address.No << endl;
						/*
						Di�er y�ntem:
						employee1.id = 12;
						employee1.name="Mistifi";
						employee1.department = "Bilisim";
						employee1.address.cityName = "Ankara";
						employee1.address.No = 5; veya employee1.address = {"Ankara",5};
						}
						*/



						/*
						29-
						�� i�e yap�lar ve pointerlar
						struct Address {
						string cityName;
						int No;
						};

						struct Employee {
						int id;
						string name;
						string department;
						Address* address; // �nemli
						};



						int main() {
						setlocale(LC_ALL, "Turkish");
						Employee employee1 = { 12,"Mustafa Sari","Bilisim"};
						Address adress = { "Ankara",5 };
						employee1.address = &adress; // �nemli
						Employee* ptr = &employee1; // �nemli

						cout << ptr->address->cityName << endl;
						cout << ptr->address->No << endl;
						cout << ptr->name << endl;
						}
						*/

						/*
						30-
						sizeof Operat�r�
						Sizeof operat�r� bizim veri yap�s�n�n bellekte ne kadar yer kaplad���n� g�steren bir operat�rd�r.
						struct Student {
						int id;
						char letter;
						};

						int main() {

						cout << "Integer : " << sizeof(int) << endl; // 4 byte, 32 bitlik yeri kaplar
						cout << "Char : " << sizeof(char) << endl; // 1 byte, 8 bitlik yeri kaplar
						cout << "Double :" << sizeof(double) << endl; // 8 byte, 64 bitlik yer kaplar
						cout << "Student :" << sizeof(Student) << endl; //normalde biz 5 bekleriz ama gcc de c++ kendiside byte ekliyor. 8byte olarak g�r�yoruz.
						// sizeof u dinamik bellek kontrol�nde kullanaca��z.
						return 0;
						}
						*/

						/*
						31-
						Dinamik bellek y�netimi (new ve delete)

						int main() {
						//int* ptr;
						//int a[] = {1,2,3,4,5};
						//ptr = a;
						//cout << ptr[1] << endl;


						int* ptr = new int; // �uan pointer�m�z �uan int olarak 4 byte yer kapl�yor.
						*ptr = 5; //dersek �uan o bo� kutu gibi d���nd���m�z �ey 5 oluyor.
						delete ptr; // ptrye atanan t�m de�erler belle�e geri veriliyor. Memory leak azaltmak i�in. Gereksiz yeri i�gal etmemek i�in.

						return 0;
						}
						*/

						/*
						32-
						Dinamik Bellek y�netimi part 2
						// kullan�c�dan input girerek dinamik memory y�netimini kullanaca��z.
						int* ptr;
						int size;
						cout << "Lutfen degeri giriniz : ";
						cin >> size;

						ptr = new int[size]; // burada 5 tane yer ay�r�yoruz.
						for (int i = 0; i < size; i++) {
						cout << "De�er : ";
						cin >> ptr[i]; // de�erleri ptrye alaca��z.
						}
						for (int i = 0; i < size; i++) {
						cout << "Eleman" << ptr[i] << endl;
						}
						delete [] ptr; // ba��na birden fazla de�er saklad��� i�in [] kullan�yoruz.


						*/

						/*
						33-
						Null Pointer, Dangling Referans ve Pointerlar
						// kullan�c�dan input girerek dinamik memory y�netimini kullanaca��z.
						//int* ptr = nullptr;
						//ptr = new int;
						//*ptr = 10;
						//delete ptr; // �uan bu ptr ge�erli olmayan bir alan� i�aret ediyor adi : Dangling referance.
						//*ptr = 10; //runtime hatasi. Bilgisayar�n elinde olan bir yere ,yazmaya �al��yor.

						//farkl� bir ornek :
						int* ptr1 = nullptr;
						int* ptr2 = nullptr;

						ptr1 = new int;
						*ptr1 = 10;
						ptr2 = ptr1;

						delete ptr1; // art�k 2 ptr'de ge�ersiz yeri g�steriyor, dangling referance oluyor.
						*ptr2 = 20; // ge�ersiz bir alana de�er yazmaya calisiyoruz hata alaca��z
						cout << *ptr2 << endl; // c++ �al��may� durdurur.

						*/

						/*
						34-
						Foreach Dong�s� :
							int a[] = { 1,2,3,4,5 };
						for (int i = 0; i < 5; i++) {
						cout << a[i] << endl;
						--------- bunun yerine h�zl� olmas� a��s�ndan bunu kullanabilirsin.
						}
						for (int item : a) {
							cout << item << endl;
						}
						return 0;
						*/

						/*
						35-
						Fonksiyonlarda Overloading nedir ?

						Function overload, ayn� isimli farkl� parametreler alan birden fazla fonksiyonun tan�mlanmas�d�r. Bu, ayn� i�levi farkl� parametre tipleri veya say�lar� kullanarak birden fazla kez tan�mlamaya olanak tan�r.

						�rne�in, bir hesap makinesi uygulamas� i�in a�a��daki fonksiyonlar�n overload edilmi� halleri kullan�labilir:

						int topla(int a, int b); // �ki integer de�er toplar
						float topla(float a, float b); // �ki float de�er toplar
						double topla(double a, double b, double c); // �� double de�er toplar

						Bu fonksiyonlar, topla i�lemini ger�ekle�tirir, ancak farkl� parametre tipleri veya say�lar� kullanarak overload edilmi�tir. Kullan�c�n�n ihtiyac�na uygun olan fonksiyon otomatik olarak �a�r�lacakt�r.

						Function overload, kodun okunabilirli�ini art�r�r ve farkl� durumlarda kullan�c�lara daha fazla se�enek sunar. Ancak ayn� isimli farkl� fonksiyonlar�n varl���, potansiyel bir kar���kl�k kayna�� olabilir, bu nedenle fonksiyonlar�n isimlendirilmesi ve tan�mlanmas� dikkatlice yap�lmal�d�r.

						------------------D��ER �RNEK:

						void selamla() {
						cout << "MERHABA!" << endl;
						}
						void selamla(string name) {
						cout << "MERHABA!" << name << endl;
						}
						void selamla(string name1,string name2) {
						cout << "MERHABA!" << name1<<"," << name2 << endl;
						}

						int main() {

						selamla();
						selamla("Mahmut");
						selamla("Kel", "Dener");
						return 0;
						}
						*/

						/*
						36-
						S�n�flar ve Nesne Y�nelimli Programlamaya Giri� (OOP)

						Ger�ek hayat� bilgisayarlara uygulamak gibi d���n�lebilir. Etraf�m�zda bulunan obje vs Bilgisayar, insan bile obje.
						class Student { // s�n�f�m�z� olu�turduk �imdi bir �ok obje �retebiliriz.
						public:// her taraftan eri�ilebilir.
						string name;
						};

						int main() {
						Student student1 = { "Destan" };
						Student student2 = { "Oguz" };
						cout << student1.name << endl;
						cout << student2.name << endl;
						return 0;
						}
						*/

						/*
						37-
						S�n�flar�n Metodlar� (OOP)
						class Student { // s�n�f�m�z� olu�turduk �imdi bir �ok obje �retebiliriz.
						public:// her taraftan eri�ilebilir.
						string name; // �zellik
						void tellName() { // method
						cout << "benim adim : " << name << endl;
						}

						};

						int main() {
						Student student1;
						student1.name = "Derya";
						Student student2;
						student2.name = "Dasers";
						student1.tellName();
						student2.tellName();
						return 0;
						}
						*/

						/*
						38-
						Header Dosyalar� ve implementasyon
						// Header dosyalar�nda sadece bir class�n prototipi yer al�yor.
						Muhte�em ��l�, main dosyas�, header dosyas�, implementasyon dosyas�.
					------------------------------------------------------
						ilk olarak header dosyasini olu�turuyoruz. : .h olacak
						i�ine :
						#ifndef EMPLOYEES_H_
						#define EMPLOYEES_H_
						#include <iostream>

						using namespace std;

						class Employee {
						public:
						string name;
						int id;
						int salary;
						void showInfos();
						};
						#endif // !EMPLOYEES_H_
						--------------------------------
						sonra implementasyon dosyasini olu�turuyoruz. : .cpp genellikle
						#include "Employees.h"

						void Employee::showInfos(){ // implementasyon.
						cout << "Id : " << Employee::id << endl;
						cout << "Id : " << Employee::name << endl;
						cout << "Id : " << Employee::salary << endl;

						}
						----------------------------------------------
						#include <iostream>
						#include "Employees.h"
						using namespace std;



						int main() {
						Employee employee1;
						employee1.id = 12;
						employee1.name = "Mahmut";
						employee1.salary = 1222;
						employee1.showInfos();
						return 0;
						}
						*/

						/*
						39-
						Private eri�im belirleyicisi
						#include <iostream>

						using namespace std;

						class Employee {
						private:
						string name;// encapsulation �rne�i, kumanday� direkt tu�lara basar�z ama i�indekini g�rmeyiz. sadece kullan�m� ile ilgileniriz.
						int age;
						public:
						void setAge(int yas) {
						if (yas < 0)
						cout << "B�yle bir deger giremezsiniz ! ..." << endl;
						else
						age = yas;
						}
						int getAge() {
						return age;
						}
						void setName(string isim) {
						name = isim;
						}
						string getName() {
						return name;
						}
						};
						int main() {

						Employee employee1;
						employee1.setName("Mehmet");
						employee1.setAge(-4);
						cout << employee1.getName() << endl;
						cout << employee1.getAge() << endl;

						return 0;
						}


						A��klama : Bir s�n�f�n private olarak tan�mlanm�� bir alan�na d��ar�dan do�rudan eri�im sa�lanamaz.
						Bu alanlara eri�im i�in s�n�f i�inde public olarak tan�mlanm�� getter ve setter metotlar kullan�l�r.
						Bu y�ntemle, d��ar�dan gelen istekler �nce do�rulanabilir ve istenen de�i�iklikler yap�ld�ktan sonra private alan g�ncellenebilir.
						Bu s�re�, encapsulation (kaps�lleme) olarak adland�r�l�r ve bir s�n�f�n verilerini koruyarak ve kontrol ederek g�venli�ini sa�lar.

						*/
						/*
						40- Encapsulation
						Encapsulation, bir s�n�f�n verilerini ve i�levlerini gizlemesine ve bu verilere ve i�levlere sadece belirli yollarla eri�ilmesine izin vermesine yard�mc� olan bir konsepttir.
						Bu �ekilde, s�n�f�n i� yap�s� ve uygulama ayr�nt�lar� d��ar�ya g�sterilmeden, s�n�f�n kullan�m� basitle�tirilebilir ve soyutlanabilir.
						Kumanda �rne�i baya iyi bir �rnek.
						*/

						/*
						41-
						Pointer ve Classlar aras�ndaki ili�ki

						#include <iostream>

						using namespace std;

						class Employee {
						private:
						string name;// encapsulation �rne�i, kumanday� direkt tu�lara basar�z ama i�indekini g�rmeyiz. sadece kullan�m� ile ilgileniriz.
						int age;
						public:
						void setAge(int yas) {
						if (yas < 0)
						cout << "B�yle bir deger giremezsiniz ! ..." << endl;
						else
						age = yas;
						}
						int getAge() {
						return age;
						}
						void setName(string isim) {
						name = isim;
						}
						string getName() {
							return name;
						}
						};
						int main() {

						Employee* employee1 = new Employee(); // �nemli
						employee1->setName("Mazlum");
						employee1->setAge(23); // yap�lara benziyor.

						cout << employee1->getName() << endl;
						cout << employee1->getAge() << endl;

						return 0;
						}
						*/
						/*
						42-
						Constructorlar (Yap�c� metodlar)
						class Employee {
						private:
						string name;
						int salary;
						public:
						Employee(string isim, int maas) {
							name = isim;
							salary = maas;
						}
						void setSalary(int maas) {
							salary = maas;
						}
						int getSalary() {
							return salary;
						}
						void setName(string isim) {
							name = isim;
						}
						string getName() {
						return name;
						}
						void showInfos()
						{
						cout << "�sim : " << name << endl;
						cout << "Maas : " << salary << endl;
						}
						};
						int main() {

						Employee employee("Lord Megatron", 2003); // set metodlar�m�z� kullanmadan k�sa yoldan yazma y�ntemi.
						employee.showInfos();

						return 0;
						*/
						/*
						43-
						This Pointer : c++ ta her bir objenin bir this pointer'� bulunur. O objeyi g�sterir.

						Constructorda , isimler ayn� oldu�unda �rne�in:
						Employee(string name, int salary) {
							name = isim; // hata verecek
							salary = maas;// hata verecek
						}
						biz bu hatay� this ile ��zebiliriz.
						Employee(string isim, int maas) {
							this->name = name;
							this->salary = salary;
						}
						Kod �rne�i :
						#include <iostream>

						using namespace std;

						class Employee {
						private:
						string name;
						int salary;
						public:
						Employee(string name, int salary) {
						this->name = name; // �nemli
						this->salary = salary; // �nemli
						}
						void setSalary(int salary) {
						this->salary = salary; // �nemli
						}
						int getSalary() {
						return salary;
						}
						void setName(string name) {
							this->name = name; �nemli //
						}
						string getName() {
						return name;
						}
						void showInfos()
						{
						cout << "�sim : " << this->name << endl;//  kar���kl�k ��kmas�n diye kullanabiliriz, zorunluluk bulunmuyor.
						cout << "Maas : " << this->salary << endl;// kar���kl�k ��kmas�n diye kullanabiliriz, zorunluluk bulunmuyor.
						}
						};
						int main() {

						Employee employee("Lord Megatron", 2003); // set metodlar�m�z� kullanmadan k�sa yoldan yazma y�ntemi.
						employee.showInfos();

						return 0;
						}
						*/

						/*
						44-
						Constructor Overloading ( yap�c� metodlar�n a��r� y�klenmesi)

						#include <iostream>

						using namespace std;

						class Employee {
						private:
						string name;
						int salary;
						int id;
						public:
						Employee(){// default
						this->name = "Bilgi yok";
						this->salary = 0;
						this->id = 0;
						}
						Employee(string name,int salary) {
						this->name = name;
						this->salary = salary;
						this->id = 0;
						}
						Employee(string name, int salary,int id) {
						this->name = name;
						this->salary = salary;
						this->id = id;
						}

						int getSalary() {
						return salary;
						}

						string getName() {
						return name;
						}
						int getId() {
						return id;
						}
						void showInfos()
						{
						cout << "�sim : " << this->name << endl;//  kar���kl�k ��kmas�n diye kullanabiliriz, zorunluluk bulunmuyor.
						cout << "Maas : " << this->salary << endl;// kar���kl�k ��kmas�n diye kullanabiliriz, zorunluluk bulunmuyor.
						cout << "Kimlik : " << this->id << endl;
						}
						};
						int main() {

						Employee employee1("Lord Megatron", 2003,1); // set metodlar�m�z� kullanmadan k�sa yoldan yazma y�ntemi.
						Employee employee2("Lord Casr", 2333);
						Employee employee3; // bo� constructorlar direkt parantez kullanmadan oluyor
						employee1.showInfos();
						employee2.showInfos();
						employee3.showInfos(); // constructorlar� silsende c++ kendisi bir bo� Employee constructor u olu�turuyor ve hata alm�yoruz.

						return 0;
						}
						*/

						/*
						45-
						Neden Pointer?


						Pointerlar� genelde objelerimizi tekrar tekrar kopyalamayal�m, sadece adres �zerinden kullan�yoruz. OOP DE EN ZOR �� B�R OBJE OLU�TURMAKTIR. Memory ve vakit i�in yap�yoruz.

						pointer 4 byte yer kaplayacak
						objeler 100lerce byte kaplayabilir.

						*/

						/*
						46-
						Destructorlar (YIKICI METODLAR NED�R?)

						Y�k�c� metodlar, bir bellekten objemizi sildi�imiz zaman �a�r�lan �zel bir metodumuz.
						#include <iostream>

						using namespace std;

						class Employee{
						public:
						Employee() {
						cout << "Constructor Cagrildi." << endl;
						}
						~Employee() {
						cout << "Destructor Cagrildi. " << endl;
						}
						};
						int main() {

						Employee* emp = new Employee(); // objeyi olu�turduk.
						delete emp;//delete �nemli, objelerimizle i�imizi bitirince delete kullanmayi unutmayalim. ��gal eder yoksa memory i.

						return 0;
						}

						*/

						/*
						47-
						Destructorlar ve Bellek s�z�nt�lar�:

						�rnekte destructor i�ine pointerlar�n tek tek delete yap�lmas�n�n �nemini g�rd�k yoksa objeyi silsek bile objedeki pointerlar�n tuttu�u yerler belle�e geri verilmiyor.

						#include <iostream>

						using namespace std;

						class Employee{
						public:

						string* s;
						int* i;
						Employee(string str, int ivalue) {
						s = new string;
						i = new int;
						*s = str;
						*i = ivalue;
						}
						void show() {
						cout << "String Deger : " << *s << endl << "int deger : " << *i << endl;
						}
						Employee() {
						cout << "Constructor Cagrildi." << endl;
						}
						~Employee() {
						delete s;
						delete i;
						cout << "Destructor Cagrildi. " << endl;
						}
						};
						int main() {

						Employee* emp = new Employee("Mustafa Murat", 25);
						emp->show();
						delete emp; // Objeyi t�m�yle siliyoruz ama i�indeki pointerlar� silemedik. s pointer�n adresine asla ulasam�yoruz. Bu bellek s�z�nt�s�n� �nlemek i�in destructor i�ine pointerlar i�in tek tek delete yapmam�z gerek.
						return 0;
						}
						*/
						/*
						48-
						Statik De�i�kenler:

						#include <iostream>
						using namespace std;

						void test() { //fonksiyon bitti�i zaman fonksiyonun i�indeki t�m de�i�kenler bellekten siliniyorlar
						static int i = 3;
						i++;
						cout << "i'nin degeri : " << i << endl;
						}

						int main() {

						test(); // 4
						//cout << i << endl; // hatal�
						test(); // 5
						//bellekte bir defa olu�uyor static degiskenler, ve static olduklar� i�in tekrar tekrar olu�turulmuyorlar.
						return 0;
						}
						*/

						/*
						49-
						Statik S�n�f �yeleri:

						#include <iostream>

						using namespace std;

						class Gamer {
						public:
						static int gamers; // Objelerimizin kendi i�inde gamers �zelli�i olmayacak. Class'a �zg� olacak. Her objemiz i�in ortak olacak. Her objemizden bu �zelli�e eri�ebilecek.
						Gamer() {
						gamers++;
						cout << "Yeni oyuncu olusturuldu." << endl;
						//gamers degerini class'in i�inde verirsek hata verir �uan. D���nda vermemiz gerek.
						}
						};
						int Gamer::gamers = 0; // burada deger verebiliriz bu �ekilde.
						int main() {
						Gamer gamer1;
						Gamer gamer2;
						Gamer gamer3;
						Gamer gamer4;
						cout << Gamer::gamers << endl;
						return 0;
						}
						*/

						/*
						50-
						S�n�flar�n Statik Metodlar�:


						#include <iostream>

						using namespace std;

						class math {
						public:
						static void cube(int x) {
						cout << x * x * x << endl;

						}
						static void add2(int x) {
						cout << x + 2 << endl;
						}
						};

						int main() {

						math::cube(3);
						math::add2(20);

						return 0;
						}

						*/

						/*
						51-
						Friend Fonksiyonlar ve S�n�flar:

						#include <iostream>

						using namespace std;

						class Employee {
						private:
						string name;
						int age;
						int salary;
						public:
						Employee(string name, int age, int salary) {
						this->name = name;
						this->age = age;
						this->salary = salary;
						//private olanlara eri�ebiliyoruz ��nk� kendi class�m�z�n i�indeyiz.
						}
						//friend void showInfos(Employee employee); // art�k private de�erlere eri�ebilir.
						friend class Test;
						};

						class Test {
						public:
						static void showInfos(Employee employee) {
						cout << employee.name << " " << employee.age << " " << employee.salary << endl;
						}

						};

						void showInfos(Employee employee) {
							cout << employee.name << " " << employee.age << " " << employee.salary << endl;
						}
						int main() {
						//fonksiyonlar i�in friend fonksiyonu
						Employee employee1("Huso", 25, 400);
						showInfos(employee1);
						Employee employee2("Mahmut", 25, 4444);
						showInfos(employee2);

						//classlar i�in friend fonksiyonu
						Employee employee3("Kerem", 25, 1000);
						Test::showInfos(employee3);

						return 0;
						}
						*/

						/*
						52-
						Const S�n�f �yeleri ve Metodlar�:

						#include <iostream>

						using namespace std;

						class Test {
						private:
						int a;
						public:

						Test(int a) {
						this->a = a;

						}
						int getValue() const{ // bu metod herhangi bir de�eri de�i�tiremez. Const olmayan metodlar� ca��ramaz. Metod sonuna yazmay� unutma.
						// yapam�yoruz. this->a = 20;
						return this->a;
						}
						void test() const{
						cout << "TEST METODU" << endl;
						getValue();
						}
						};

						void testr(const Test &test) { //objenin herhangi bir �zelli�ini ve metodunu de�i�tiremeyiz.
						cout << test.getValue(); // sadece const olan metodlar gelmesi gerek. Const olmayan referanslar const olmayan metodlar� �a��ram�yor.
						}
						int main() {
						// READ ONLY const int i = 0;
						Test test1(10);
						cout << test1.getValue() << endl;
						test1.test();
						testr(test1);
						return 0;
						}



						*/