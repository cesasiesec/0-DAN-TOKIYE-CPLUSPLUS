
/*
1-Giris
#include <iostream> // kutuphaneyi dahil etmek icin kullanýyoruz.
using namespace std; // "using namespace std;" ifadesi, C++ dilinde kullanýlan bir özelliktir. "std" (Standard) isim alaný, C++ standart kütüphanesindeki tüm fonksiyonlarý, sýnýflarý ve diðer öðeleri içerir.
int main(){
cout << "helloworld!;
return 0;
}
*/



//Kaynak dosyalarýmýzýn hepsi gcc compiler ile makine koduna donüstürülüyor.

/* 2-deðiþken tipleri ve deðiþkenler

		5 ilkel veri tipi
		int : tam sayi
		float : ondalik
		double : ondalik, daha yüksek ondalikli sayi veri tipi
		char : tek karakter
		bool : true or false : her bir boolean deger bir tamsayiya karsilik geliyor.

		*/

		/*3-
			Temel operatörler

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

			<< : iþareti output vermeye yarýyor.
			>> : iþareti input vermeye yarýyor.

			int a,b,c;
			cout <<"birinci sayi : " << endl;
			cin >> a;
			cout <<"ikinci sayi : " << endl;
			cin >> b;
			cout <<"ucuncu sayi : " << endl;
			cin >> c;

			cout << "TOPLAMLARI:" << a+b+c<< endl;


			sayýlari yanyana girmek istiyorsakta: bosluklu bir sekilde yazýyoruz.
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
				cout << "lütfen parolanizi giriniz: ";
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
				cout << "1.Ýþlem : Toplama iþlemi " << endl;
				cout << "2.Ýþlem : Çýkarma iþlemi " << endl;
				cout << "3.Ýþlem : Çarpma iþlemi " << endl;
				cout << "4.Ýþlem : Bölme iþlemi " << endl;
				cout << endl;
				cout << "Ýþlemi giriniz : ";
				cin >> islem;

				if (islem == "1") {
					cout << "ilk sayiyi giriniz : ";
					cin >> a;
					cout << "ikinci sayiyi giriniz: ";
					cin >> b;
					cout << "Ýþlem Sonucu : " << a << " + " << b << " = " << a + b;
				}
				else if (islem == "2") {
					cout << "ilk sayiyi giriniz : ";
					cin >> a;
					cout << "ikinci sayiyi giriniz: ";
					cin >> b;
					cout << "Ýþlem Sonucu : " << a << " - " << b << " = " << a - b;
				}
				else if (islem == "3") {
					cout << "ilk sayiyi giriniz : ";
					cin >> a;
					cout << "ikinci sayiyi giriniz: ";
					cin >> b;
					cout << "Ýþlem Sonucu : " << a << " * " << b << " = " << a * b;
				}
				else if (islem == "4") {
					cout << "ilk sayiyi giriniz : ";
					cin >> a;
					cout << "ikinci sayiyi giriniz: ";
					cin >> b;
					cout << "Ýþlem Sonucu : " << a << " / " << b << " = " << a / b;
				}
				else
					cout << "Hatali giriþ yaptiniz!";



			-------------------------
			böylede bir kullaným var. unutmamak lazým
			a > b ? b*a : b/a
			*/

			/*
			8-Mantýksal operatörler:

			or operatörü : ||
			and operatörü : &&
			not operatörü : !



			*/

			/*
			9-while döngüleri :

			While döngülerinde koþullu ifade zorunludur örneðin :

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
			do-while döngüsü

			ilk olarak do içindeki yapýlýr sonra döngüde kontrol edilir.
			---------
			int a;
				do {
					cout << "deger giriniz : ";
					cin >> a;

				} while (a < 10);

			*/

			/*
			11-
			For döngüleri

			c den ayrýlan bir özelliði var;
			for(int i=1;i < 5;i++) diyebiliyoruz içerde sadece bu for için özgü bir i tanýmlayabiliyoruz.

			*/

			/*
			12-
			Break, Continue ifadeleri

			Break : döngüyü kýrar

			Continue : döngünün en baþýna dönmemizi saðlar. ve altýndaki linelarý okumaz.

			örnek :
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
			>>Bu kod 3 ve 5 harici 0 dan baþlayýp 9 a kadar terminalde göreceðiz.

			---------------------
			Diðer örnek :
			while (true) {
					cout << "Kullanici adini giriniz : ";
					cin >> username;
					cout << "Þifreyi giriniz : ";
					cin >> password;

					if (username != "bilal" || password != "123456") {
						yanlis_girilen_sayi--;
						if (yanlis_girilen_sayi == 0) {
							break;
						}
					}
					else {
						cout << "Baþarýyla giriþ yaptiniz !";
						break;
					}
				}
			*/

			/*
			13-
			Arrayler ve özellikleri
			--Arrayler birden fazla deger tutabilen bir veri yapisidir.(int,double,char, vb.). Dizi özellikle, ayni türdeki birden fazla veri için tek bir deðiþken tanýmlamak için kullanýlabilir.

			// arrayler 0. indexten baþlar
				int array[3];

				array[0] = 1; // 0. index
				array[1] = 2; // 1. index
				array[2] = 3; // 2. index

				cout << array[0] << endl;
				cout << array[1] << endl;
				cout << array[2] << endl;


				//diðer kullaným örneði:
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
				Sýnýrsýz eleman almak için Dizilerde
				#include vector

				vector<int> array; diyebiliriz. örnek kod :
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
			Diðer bir örnek:
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
			Çok boyutlu arrayler ve özellikleri


			// iki boyutlu arrayler için belirtmemiz gerek 3 satýr ve 2 sütündan oluþuyor diye.
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
			// breakleri silersek, diðer casede break görene kadar calistiriyor. Switch durumundan çýkmamýzý saðlar.
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
			Fonksiyon Tanýmlama, Fonksiyon Çaðrýsý ve Parametreli Fonksiyonlar
			----------------
			void faktoriyel(int sayi) { // void : bu fonksiyondan herhangi bir çýktý alamýyoruz.
				int fak = 1;
				for (int i = 1; i <= sayi; i++) {
					fak = fak * i;
				}
				cout << fak;
			}

			int main() { //calistirabilir bütün c++ projelerinde olmasý gereken bir main fonksiyonu. Main metodu sadece int olabilir.
				setlocale(LC_ALL, "Turkish");
				//fonksiyonlar programlama dillerinin en önemli yapýlarýndan birisidir. Fonksiyonlarýn kullanýlmasý projelerimizin oldukça minimalize edebilmemizi saðlýyor.
				// c++ projelerimizi çalýþtýrýrken yukarýdan aþaðýya doðru calistiriyor, fonksiyonumuzu aþaðýda tanýmlarsak ve üst tarafta function call yaparsak, c++ bunu göremiyor.
				// Fonksiyon prototipi diye birþey girebiliriz yukarda ve aþaðýda fonksiyon yazsakta çalýþýr duruma gelir.
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
			int faktoriyel(int sayi) { // void : bu fonksiyondan herhangi bir çýktý alamýyoruz.
				int fak = 1;

				for (int i = 1; i <= sayi; i++) {
					fak = fak * i;
				}
				cout << fak << endl;
				return fak;

			}

			int main() { //calistirabilir bütün c++ projelerinde olmasý gereken bir main fonksiyonu. Main metodu sadece int olabilir.
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
			Pointerlara giriþ

			int a = 5;
				// a'nýn adres deðerini atamak için
				int *ptr = &a;

				cout << "Deðiþkenin adresi : " << &a << endl;
				cout << "Deðiþkenin adresi : " << ptr << endl;
				cout << "Deðiþkenin degeri : " << *ptr << endl; //deðiþkenin degerini *ptr ile alabiliriz.
				*ptr = 4; // a deðiþkenin degerini degistirmek.

				cout << "Degiskenin yeni degeri : " << a << endl;
				cout << "degiskenin yeni degeri : " << *ptr << endl;

			//cpu ile ram arasýndaki baðlantýda örneðin int a = 5; 'in kapladýðý alan bellekte 4 byte'týr. Bu mimariye göre deðiþebilir. x86 mimaride 4 byte, x64'te 8 byte ama x64'tede 4 byte kullanýlabilir.
			//pointerlar aslýnda baþlangýç adres deðerlerini taþýyan bir deðiþkendir.
			*/

			/*
			19-
			Pointerlarýn kullanýlma mantýðý

			void degerDegistir(int *ptr){
				*ptr = 20;
				cout << "fonksiyon içindeki deger : " << *ptr << endl;
			}

			int main(){
			int a = 10;
			cout << "a'nin degeri : "  << a << endl;
			degerDegistir(&a);
			cout << "a'nin fonksiyondan sonraki degeri : << a <<endl; // biz pointer kullanýp adresini atadýðýmýzda artýk
			}



			*/

			/*
						20-
						Pointer Aritmetiði ve Arraylerle Pointerlar Arasýndaki Ýliþki
						-----------------
						/*int array[] = {1,2,3,4,5};

						cout << array << endl;//0x23fe40
						//cout << array + 1 << endl; //0x23fe44 : 4 byte nereden geliyor ? integer deðerlerimiz 4 byte taþýdýðý için bellekteki baþlangýç adresim x ise, diðer adresim x+4 oluyor. + 2 yapsaydýk x+8 (0x23fe48) olacaktý gibi. Yani biz +1 dediðimizde adresi +1 arttýrmýyoruz, bir sonraki kutucuðun adresini almýþ oluyoruz.

						int *ptr = array; //oluþturduðumuz bu pointer arrayimizin baþlangýç adresini tutacak.
						cout << *ptr << endl;
						ptr = ptr + 1; // bir sonraki degere gitmek icin yani arraydeki 2
						cout << "Pointerin yeni adres degeri : " << ptr << endl;
						cout << "Pointerin yeni degeri : " << *ptr << endl;

						int* ptr2 = &array[2]; // 2. indeksin adres deðerini pointera atamak.
						cout << "Pointerin 2. yeni degeri : " << * ptr2 << endl;


						string array[] = { "Megatron", "Lord", "Veli" };
						string* ptr = array;
						cout << ptr + 1 << endl;//1. indeksin adresini gösteriyor.
						//adrese gidip ordaki deðeri nasýl alacaðýz ? :
						cout << *(ptr + 1) << endl; // array[1] == *(ptr +1) == ptr[1] : hiçbir farki yok
						// arraylerin indekslerin aþmamaya özen gösterelim.
						cout << array[3] << endl;


						*/

						/*
						21-
						Referanslar
						Referanskarýn pointerlar ile bir farký yok gibi görünsede aslýnda kullanýmlarý açýsýndan farklýdýr.
						/*void degerDegistir(int& ref) {
						ref = 20;
						}

						int main() {

						int a = 10;
						//int& ref = a; // ampersant iþareti kesinlikle adresi simgelemiyor, sadece referans olduðunu söylüyor
						//ref++;
						cout << "a'nin degeri : " << a << endl;
						// bir fonksiyon içinde kullanýrsak ayný bir pointer gibi a'mýzýn deðerini yine deðiþtirmemizi saðlýyor.
						//degerDegistir(a);

						cout << "a'nin yeni degeri : " << a;
						return 0;
						//referanslarda direkt a'nin degerini atiyoruz, pointerlarda a'nin adres degerini atiyoruz. en temel farklýlýklarýdan birisi.
						//basit iþlemlerde referans kullanabiliyoruz.
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
						const anahtar kelimesi kullandýðýmýz bir deðiþkeni, sonradan deðiþtiremiyoruz. veya arrayin daha sonra deðiþtiremiyoruz. OOP de bir fonksiyon olarakta kullanýlabiliyor.

						const int a = 5;
						cout << a << endl;
						a = 12;
						cout << a << endl; // hata çýkartýr.

						const int b[] = {1,2,3,4,5};
						b[2] = 100; // hata verir.


						*/

						/*
						24-
						Pointerlar ve Const
						void printArray(const int *ptr1, const int *ptr2) { //burada pointer a atanan deðer deðiþmez, ama pointerin adres degeri deðiþebilir.

						*ptr1 = 100; // bu yanlis olacak hata alýrýz.
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
						Yapýlar (Structurelar)
						//Structurelar bizim c++'ta bir obje üretmek için oluþturduðumuz yapýlardýr

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
						Pointerlar ve Yapýlar

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

						//burdaki pointer için int ptr, int string gibi deðilde þu þekil, Employee* ptr
						Employee* ptr = &employee1;
						cout << ptr->department << endl;
						}
						*/

						/*
						27-
						Fonksiyonlar ve Yapýlar
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
						employee->id = 11;// bu sekilde deðistirebiliriz.
						cout << "Id : " << employee->id << endl;
						cout << "Isim : " << employee->name << endl;
						cout << "Departman : " << employee->department << endl;
						}
						int main() {

						Employee employee1;
						employee1.id = 12;
						employee1.name = "Mami";
						employee1.department = "Bilisim";

						//burdaki pointer için int ptr, int string gibi deðilde þu þekil, Employee* ptr
						Employee * ptr = &employee1;
						cout << ptr->department << endl;
						showEmployee(employee1);
						show(&employee1);
						// biz bu structuredaki employee1 deki verimizi deðiþtirmek istiyorsak pointer kullanmamýz gerekir. Pass by reference, call by reference
						}
						*/

						/*
						28- Ýç içe yapýlar (Nested Structure)
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
						Diðer yöntem:
						employee1.id = 12;
						employee1.name="Mistifi";
						employee1.department = "Bilisim";
						employee1.address.cityName = "Ankara";
						employee1.address.No = 5; veya employee1.address = {"Ankara",5};
						}
						*/



						/*
						29-
						Ýç içe yapýlar ve pointerlar
						struct Address {
						string cityName;
						int No;
						};

						struct Employee {
						int id;
						string name;
						string department;
						Address* address; // önemli
						};



						int main() {
						setlocale(LC_ALL, "Turkish");
						Employee employee1 = { 12,"Mustafa Sari","Bilisim"};
						Address adress = { "Ankara",5 };
						employee1.address = &adress; // önemli
						Employee* ptr = &employee1; // önemli

						cout << ptr->address->cityName << endl;
						cout << ptr->address->No << endl;
						cout << ptr->name << endl;
						}
						*/

						/*
						30-
						sizeof Operatörü
						Sizeof operatörü bizim veri yapýsýnýn bellekte ne kadar yer kapladýðýný gösteren bir operatördür.
						struct Student {
						int id;
						char letter;
						};

						int main() {

						cout << "Integer : " << sizeof(int) << endl; // 4 byte, 32 bitlik yeri kaplar
						cout << "Char : " << sizeof(char) << endl; // 1 byte, 8 bitlik yeri kaplar
						cout << "Double :" << sizeof(double) << endl; // 8 byte, 64 bitlik yer kaplar
						cout << "Student :" << sizeof(Student) << endl; //normalde biz 5 bekleriz ama gcc de c++ kendiside byte ekliyor. 8byte olarak görüyoruz.
						// sizeof u dinamik bellek kontrolünde kullanacaðýz.
						return 0;
						}
						*/

						/*
						31-
						Dinamik bellek yönetimi (new ve delete)

						int main() {
						//int* ptr;
						//int a[] = {1,2,3,4,5};
						//ptr = a;
						//cout << ptr[1] << endl;


						int* ptr = new int; // þuan pointerýmýz þuan int olarak 4 byte yer kaplýyor.
						*ptr = 5; //dersek þuan o boþ kutu gibi düþündüðümüz þey 5 oluyor.
						delete ptr; // ptrye atanan tüm deðerler belleðe geri veriliyor. Memory leak azaltmak için. Gereksiz yeri iþgal etmemek için.

						return 0;
						}
						*/

						/*
						32-
						Dinamik Bellek yönetimi part 2
						// kullanýcýdan input girerek dinamik memory yönetimini kullanacaðýz.
						int* ptr;
						int size;
						cout << "Lutfen degeri giriniz : ";
						cin >> size;

						ptr = new int[size]; // burada 5 tane yer ayýrýyoruz.
						for (int i = 0; i < size; i++) {
						cout << "Deðer : ";
						cin >> ptr[i]; // deðerleri ptrye alacaðýz.
						}
						for (int i = 0; i < size; i++) {
						cout << "Eleman" << ptr[i] << endl;
						}
						delete [] ptr; // baþýna birden fazla deðer sakladýðý için [] kullanýyoruz.


						*/

						/*
						33-
						Null Pointer, Dangling Referans ve Pointerlar
						// kullanýcýdan input girerek dinamik memory yönetimini kullanacaðýz.
						//int* ptr = nullptr;
						//ptr = new int;
						//*ptr = 10;
						//delete ptr; // þuan bu ptr geçerli olmayan bir alaný iþaret ediyor adi : Dangling referance.
						//*ptr = 10; //runtime hatasi. Bilgisayarýn elinde olan bir yere ,yazmaya çalýþyor.

						//farklý bir ornek :
						int* ptr1 = nullptr;
						int* ptr2 = nullptr;

						ptr1 = new int;
						*ptr1 = 10;
						ptr2 = ptr1;

						delete ptr1; // artýk 2 ptr'de geçersiz yeri gösteriyor, dangling referance oluyor.
						*ptr2 = 20; // geçersiz bir alana deðer yazmaya calisiyoruz hata alacaðýz
						cout << *ptr2 << endl; // c++ çalýþmayý durdurur.

						*/

						/*
						34-
						Foreach Dongüsü :
							int a[] = { 1,2,3,4,5 };
						for (int i = 0; i < 5; i++) {
						cout << a[i] << endl;
						--------- bunun yerine hýzlý olmasý açýsýndan bunu kullanabilirsin.
						}
						for (int item : a) {
							cout << item << endl;
						}
						return 0;
						*/

						/*
						35-
						Fonksiyonlarda Overloading nedir ?

						Function overload, ayný isimli farklý parametreler alan birden fazla fonksiyonun tanýmlanmasýdýr. Bu, ayný iþlevi farklý parametre tipleri veya sayýlarý kullanarak birden fazla kez tanýmlamaya olanak tanýr.

						Örneðin, bir hesap makinesi uygulamasý için aþaðýdaki fonksiyonlarýn overload edilmiþ halleri kullanýlabilir:

						int topla(int a, int b); // Ýki integer deðer toplar
						float topla(float a, float b); // Ýki float deðer toplar
						double topla(double a, double b, double c); // Üç double deðer toplar

						Bu fonksiyonlar, topla iþlemini gerçekleþtirir, ancak farklý parametre tipleri veya sayýlarý kullanarak overload edilmiþtir. Kullanýcýnýn ihtiyacýna uygun olan fonksiyon otomatik olarak çaðrýlacaktýr.

						Function overload, kodun okunabilirliðini artýrýr ve farklý durumlarda kullanýcýlara daha fazla seçenek sunar. Ancak ayný isimli farklý fonksiyonlarýn varlýðý, potansiyel bir karýþýklýk kaynaðý olabilir, bu nedenle fonksiyonlarýn isimlendirilmesi ve tanýmlanmasý dikkatlice yapýlmalýdýr.

						------------------DÝÐER ÖRNEK:

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
						Sýnýflar ve Nesne Yönelimli Programlamaya Giriþ (OOP)

						Gerçek hayatý bilgisayarlara uygulamak gibi düþünülebilir. Etrafýmýzda bulunan obje vs Bilgisayar, insan bile obje.
						class Student { // sýnýfýmýzý oluþturduk þimdi bir çok obje üretebiliriz.
						public:// her taraftan eriþilebilir.
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
						Sýnýflarýn Metodlarý (OOP)
						class Student { // sýnýfýmýzý oluþturduk þimdi bir çok obje üretebiliriz.
						public:// her taraftan eriþilebilir.
						string name; // özellik
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
						Header Dosyalarý ve implementasyon
						// Header dosyalarýnda sadece bir classýn prototipi yer alýyor.
						Muhteþem üçlü, main dosyasý, header dosyasý, implementasyon dosyasý.
					------------------------------------------------------
						ilk olarak header dosyasini oluþturuyoruz. : .h olacak
						içine :
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
						sonra implementasyon dosyasini oluþturuyoruz. : .cpp genellikle
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
						Private eriþim belirleyicisi
						#include <iostream>

						using namespace std;

						class Employee {
						private:
						string name;// encapsulation örneði, kumandayý direkt tuþlara basarýz ama içindekini görmeyiz. sadece kullanýmý ile ilgileniriz.
						int age;
						public:
						void setAge(int yas) {
						if (yas < 0)
						cout << "Böyle bir deger giremezsiniz ! ..." << endl;
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


						Açýklama : Bir sýnýfýn private olarak tanýmlanmýþ bir alanýna dýþarýdan doðrudan eriþim saðlanamaz.
						Bu alanlara eriþim için sýnýf içinde public olarak tanýmlanmýþ getter ve setter metotlar kullanýlýr.
						Bu yöntemle, dýþarýdan gelen istekler önce doðrulanabilir ve istenen deðiþiklikler yapýldýktan sonra private alan güncellenebilir.
						Bu süreç, encapsulation (kapsülleme) olarak adlandýrýlýr ve bir sýnýfýn verilerini koruyarak ve kontrol ederek güvenliðini saðlar.

						*/
						/*
						40- Encapsulation
						Encapsulation, bir sýnýfýn verilerini ve iþlevlerini gizlemesine ve bu verilere ve iþlevlere sadece belirli yollarla eriþilmesine izin vermesine yardýmcý olan bir konsepttir.
						Bu þekilde, sýnýfýn iç yapýsý ve uygulama ayrýntýlarý dýþarýya gösterilmeden, sýnýfýn kullanýmý basitleþtirilebilir ve soyutlanabilir.
						Kumanda örneði baya iyi bir örnek.
						*/

						/*
						41-
						Pointer ve Classlar arasýndaki iliþki

						#include <iostream>

						using namespace std;

						class Employee {
						private:
						string name;// encapsulation örneði, kumandayý direkt tuþlara basarýz ama içindekini görmeyiz. sadece kullanýmý ile ilgileniriz.
						int age;
						public:
						void setAge(int yas) {
						if (yas < 0)
						cout << "Böyle bir deger giremezsiniz ! ..." << endl;
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

						Employee* employee1 = new Employee(); // önemli
						employee1->setName("Mazlum");
						employee1->setAge(23); // yapýlara benziyor.

						cout << employee1->getName() << endl;
						cout << employee1->getAge() << endl;

						return 0;
						}
						*/
						/*
						42-
						Constructorlar (Yapýcý metodlar)
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
						cout << "Ýsim : " << name << endl;
						cout << "Maas : " << salary << endl;
						}
						};
						int main() {

						Employee employee("Lord Megatron", 2003); // set metodlarýmýzý kullanmadan kýsa yoldan yazma yöntemi.
						employee.showInfos();

						return 0;
						*/
						/*
						43-
						This Pointer : c++ ta her bir objenin bir this pointer'ý bulunur. O objeyi gösterir.

						Constructorda , isimler ayný olduðunda örneðin:
						Employee(string name, int salary) {
							name = isim; // hata verecek
							salary = maas;// hata verecek
						}
						biz bu hatayý this ile çözebiliriz.
						Employee(string isim, int maas) {
							this->name = name;
							this->salary = salary;
						}
						Kod örneði :
						#include <iostream>

						using namespace std;

						class Employee {
						private:
						string name;
						int salary;
						public:
						Employee(string name, int salary) {
						this->name = name; // önemli
						this->salary = salary; // önemli
						}
						void setSalary(int salary) {
						this->salary = salary; // önemli
						}
						int getSalary() {
						return salary;
						}
						void setName(string name) {
							this->name = name; önemli //
						}
						string getName() {
						return name;
						}
						void showInfos()
						{
						cout << "Ýsim : " << this->name << endl;//  karýþýklýk çýkmasýn diye kullanabiliriz, zorunluluk bulunmuyor.
						cout << "Maas : " << this->salary << endl;// karýþýklýk çýkmasýn diye kullanabiliriz, zorunluluk bulunmuyor.
						}
						};
						int main() {

						Employee employee("Lord Megatron", 2003); // set metodlarýmýzý kullanmadan kýsa yoldan yazma yöntemi.
						employee.showInfos();

						return 0;
						}
						*/

						/*
						44-
						Constructor Overloading ( yapýcý metodlarýn aþýrý yüklenmesi)

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
						cout << "Ýsim : " << this->name << endl;//  karýþýklýk çýkmasýn diye kullanabiliriz, zorunluluk bulunmuyor.
						cout << "Maas : " << this->salary << endl;// karýþýklýk çýkmasýn diye kullanabiliriz, zorunluluk bulunmuyor.
						cout << "Kimlik : " << this->id << endl;
						}
						};
						int main() {

						Employee employee1("Lord Megatron", 2003,1); // set metodlarýmýzý kullanmadan kýsa yoldan yazma yöntemi.
						Employee employee2("Lord Casr", 2333);
						Employee employee3; // boþ constructorlar direkt parantez kullanmadan oluyor
						employee1.showInfos();
						employee2.showInfos();
						employee3.showInfos(); // constructorlarý silsende c++ kendisi bir boþ Employee constructor u oluþturuyor ve hata almýyoruz.

						return 0;
						}
						*/

						/*
						45-
						Neden Pointer?


						Pointerlarý genelde objelerimizi tekrar tekrar kopyalamayalým, sadece adres üzerinden kullanýyoruz. OOP DE EN ZOR ÝÞ BÝR OBJE OLUÞTURMAKTIR. Memory ve vakit için yapýyoruz.

						pointer 4 byte yer kaplayacak
						objeler 100lerce byte kaplayabilir.

						*/

						/*
						46-
						Destructorlar (YIKICI METODLAR NEDÝR?)

						Yýkýcý metodlar, bir bellekten objemizi sildiðimiz zaman çaðrýlan özel bir metodumuz.
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

						Employee* emp = new Employee(); // objeyi oluþturduk.
						delete emp;//delete önemli, objelerimizle iþimizi bitirince delete kullanmayi unutmayalim. Ýþgal eder yoksa memory i.

						return 0;
						}

						*/

						/*
						47-
						Destructorlar ve Bellek sýzýntýlarý:

						Örnekte destructor içine pointerlarýn tek tek delete yapýlmasýnýn önemini gördük yoksa objeyi silsek bile objedeki pointerlarýn tuttuðu yerler belleðe geri verilmiyor.

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
						delete emp; // Objeyi tümüyle siliyoruz ama içindeki pointerlarý silemedik. s pointerýn adresine asla ulasamýyoruz. Bu bellek sýzýntýsýný önlemek için destructor içine pointerlar için tek tek delete yapmamýz gerek.
						return 0;
						}
						*/
						/*
						48-
						Statik Deðiþkenler:

						#include <iostream>
						using namespace std;

						void test() { //fonksiyon bittiði zaman fonksiyonun içindeki tüm deðiþkenler bellekten siliniyorlar
						static int i = 3;
						i++;
						cout << "i'nin degeri : " << i << endl;
						}

						int main() {

						test(); // 4
						//cout << i << endl; // hatalý
						test(); // 5
						//bellekte bir defa oluþuyor static degiskenler, ve static olduklarý için tekrar tekrar oluþturulmuyorlar.
						return 0;
						}
						*/

						/*
						49-
						Statik Sýnýf Üyeleri:

						#include <iostream>

						using namespace std;

						class Gamer {
						public:
						static int gamers; // Objelerimizin kendi içinde gamers özelliði olmayacak. Class'a özgü olacak. Her objemiz için ortak olacak. Her objemizden bu özelliðe eriþebilecek.
						Gamer() {
						gamers++;
						cout << "Yeni oyuncu olusturuldu." << endl;
						//gamers degerini class'in içinde verirsek hata verir þuan. Dýþýnda vermemiz gerek.
						}
						};
						int Gamer::gamers = 0; // burada deger verebiliriz bu þekilde.
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
						Sýnýflarýn Statik Metodlarý:


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
						Friend Fonksiyonlar ve Sýnýflar:

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
						//private olanlara eriþebiliyoruz çünkü kendi classýmýzýn içindeyiz.
						}
						//friend void showInfos(Employee employee); // artýk private deðerlere eriþebilir.
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
						//fonksiyonlar için friend fonksiyonu
						Employee employee1("Huso", 25, 400);
						showInfos(employee1);
						Employee employee2("Mahmut", 25, 4444);
						showInfos(employee2);

						//classlar için friend fonksiyonu
						Employee employee3("Kerem", 25, 1000);
						Test::showInfos(employee3);

						return 0;
						}
						*/

						/*
						52-
						Const Sýnýf Üyeleri ve Metodlarý:

						#include <iostream>

						using namespace std;

						class Test {
						private:
						int a;
						public:

						Test(int a) {
						this->a = a;

						}
						int getValue() const{ // bu metod herhangi bir deðeri deðiþtiremez. Const olmayan metodlarý caðýramaz. Metod sonuna yazmayý unutma.
						// yapamýyoruz. this->a = 20;
						return this->a;
						}
						void test() const{
						cout << "TEST METODU" << endl;
						getValue();
						}
						};

						void testr(const Test &test) { //objenin herhangi bir özelliðini ve metodunu deðiþtiremeyiz.
						cout << test.getValue(); // sadece const olan metodlar gelmesi gerek. Const olmayan referanslar const olmayan metodlarý çaðýramýyor.
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