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

#Latihan2||Program perkalian menggunakan penjumlahan parametr by values

Alur algoritmanya
	-Membuat fungsi kali
int kali (int m, int n)
{
    int i,hasil=0;
    for(i=1;i<=n;i++)
        hasil+=m;
    if (n<0)
        {
        return(-hasil);
        }
    else
        {
        return(hasil);
        }
}
	-mendeklarasikan variabel m sebagai nilai tambah
	-mendeklarasikan variabel n sebagai nilai batas
	-mendeklarasikan variabel a sebagai nilai input
	-mendeklarasikan variabel b sebagai nilai input
Berikut kode lengkapnya

using namespace std;
int kali (int m, int n)
{
    int i,hasil=0;
    for(i=1;i<=n;i++)
        hasil+=m;
    if (n<0)
        {
        return(-hasil);
        }
    else
        {
        return(hasil);
        }
}
int main()
{
    int a,b;
    cout<<"Masukan Bilangan :";
    cin>> a;
    cout<<"Masukan Bilangan :";
    cin>> b;
    cout << "\n\nHasil dari " << a <<" X "<< b <<" = "<<kali(a,b);
    return 0;
}

Berikut adalah Flowchartnya

![img](https://raw.githubusercontent.com/amirudin742/Praktikum7/master/Flowchart2.png)

Berikut adalah hasilnya

![img](https://raw.githubusercontent.com/amirudin742/Praktikum7/master/Hasil2.png)