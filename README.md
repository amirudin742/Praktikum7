# Praktikum7

#Latihan1||Program menukar nilai dengan fungsi parameter by reference

Alur Algoritmanya
	
	-Membuat fungsi tukar

	void tukar(int &a, int &b){

    		a=5;

    		b=15;

	-mendeklarasikan variabel a sebagai integer

	-mendeklarasikan variabel b sebagai integer

Berikut kodenya

``using namespace std;

void tukar(int &a, int &b){

    a=15;

    b=5;
}

int main()

{

    int a,b;

    a=5;

    b=15;

    cout << "Nilai a = " <<a<< endl;

    cout << "Nilai b = " <<b<< endl;

    cout << "SETELAH DITUKAR"<< endl;

    tukar(a,b);

    cout << "Nilai a = " <<a<< endl;

    cout << "Nilai b = " <<b<< endl;

    return 0;

}``

Berikut adalah flowchartnya

![img](https://raw.githubusercontent.com/amirudin742/Praktikum7/master/Flowchart1.png)

Berikut adalah hasilnya

![img](https://raw.githubusercontent.com/amirudin742/Praktikum7/master/Hasil1.png)