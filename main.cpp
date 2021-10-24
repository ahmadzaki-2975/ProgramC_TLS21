#include <iostream>
#include <string>
using namespace std;
//AHMAD ZAKI AKMAL - KELOMPOK LEXICO
//GENERATOR RESUME PERKENALAN TLS
int main()
{
    //INPUT NAMA LENGKAP
    int max;
    
    cout << "Input jumlah kata nama lengkap\n--> ";
    cin >> max;
    string name[max];

    cout << "\nInput nama lengkap\n--> ";
    for(int i = 0; i < max; i++)
    {
        cin >> name[i];
    }
    for(int i = 0; i < max; i++)
    {
        cout <<"\nNama " << i+1 <<": "<< name[i]; 
    }
    cout << "\nNama lengkap adalah: ";
    for(int i = 0; i < max; i++)
    {
        if(i==max-1)
        {
            cout << name[i] <<".";
        }
        else
        {
            cout << name[i] << " ";
        }
    }
    //INPUT NAMA PANGGILAN
    cout << "\n--------------------";
    string panggilan;
    cout << "\nInput nama panggilan\n--> ";
    cin >> panggilan;
    cout << "Nama panggilan adalah: " << panggilan;
    
    //INPUT ASAL DAERAH
    cout << "\n--------------------";
    string pulau, provinsi, kota;
    
    cout << "\nInput nama pulau asal\n--> ";
    cin >> pulau;
    
    cout << "Input nama provinsi (1 kata, ex: Jateng)\n--> ";
    cin >> provinsi;
    
    cout << "Input nama kota/"<<"kabupaten\n--> ";
    cin >> kota;
    cout << "Asal: " << "Pulau " << pulau << ", Provinsi " << provinsi << ", Kota/"<<"Kabupaten " << kota;
    
    //INPUT NAMA KELOMPOK
    string kelompokUser, kelompok;
    cout << "\n--------------------";
    cout <<"\nInput nama kelompok\n--> ";
    cin >> kelompok;

    cout <<"Input nama kelompok anda\n--> ";
    cin >> kelompokUser;

    cout << "Kelompok anda: " << kelompokUser;
    cout << "\nKelompok lawan: " << kelompok;
    
    //INPUT HOBI
    cout << "\n--------------------";
    int amax;
    cout << "\nInput jumlah hobi\n--> ";
    cin >> amax;
    string hobi[amax];
    for(int a=0;a < amax; a++)
    {
        cout << "Hobi "<< a+1 << "(1 kata)\n--> ";
        cin >> hobi[a];
    }
    cout << "Hobi: ";
    for(int a=0; a < amax; a++)
    {
        cout << hobi[a] << ", ";
    }

    //INPUT PRODI
    cout << "\n--------------------";
    cout << "\nPilih Prodi: \n1=TE 2=TI 3=TB\n--> ";
    int num;
    string prodi1, prodi2;
    cin >> num;
    switch(num){
        case 1:
            prodi1 = "Teknik";
            prodi2 = "Elektro";
            cout << "Prodi: Teknik Elektro";
            break;
        case 2:
            prodi1 = "Teknologi";
            prodi2 = "Informasi";
            cout << "Prodi: Teknologi Informasi";
            break;
        case 3:
            prodi1 = "Teknik";
            prodi2 = "Biomedis";
            cout << "Prodi: Teknik Biomedis";
            break;
    }

    //GENERATING
    char nothing;
    cout << "\n--------------------\nParagraph successfully generated\nKetik 1 untuk generate paragraf.\n--> ";
    cin >> nothing;

    //GENERATE PARAGRAPH1
    cout<< endl << endl;
    cout << "--------------------\nParagraph: \n";
    cout<<
    "Salah satu anggota dari kelompok " << kelompok << " yang berkenalan pada sesi perkenalan antara kelompok "<< kelompokUser << " dan " << kelompok << " adalah seseorang bernama ";
    for(int i = 0; i < max; i++)
    {
        if(i==max-1)
        {
            cout << name[i] <<".";
        }
        else
        {
            cout << name[i] << " ";
        }
    }
    cout << " Ia biasa dipanggil " << panggilan << " oleh teman-teman dan keluarganya.";
    cout << " Ia berasal dari sebuah planet urutan ketiga di tata surya yang disebut planet Bumi.";
    cout << " Tepatnya di sebuah negara kepulauan bernama Indonesia, di Pulau " << pulau << ", Provinsi " << provinsi << ", Kota " << kota <<".";
    cout << "Untuk mengisi waktu luang dan melepas jenuh dari kegiatan perkuliahan ia suka melakukan beberapa kegiatan, yaitu ";
    for(int a=0; a < amax; a++)
    {
        if(a<amax-2)
        {
            cout << hobi[a] << ", ";
        }
        else{
            if(a==amax-2){
                cout << hobi[a] << ", dan ";
            }
            else{
                cout << hobi[a] << ".";
            }
        }
    }
    cout << endl << endl;
    cout << "Di tahun 2021, " << panggilan << " bergabung ke keluarga besar Universitas Gadjah Mada sebagai mahasiswa baru angkatan 2021.";
    cout << "Ia mengambil program studi "<< prodi1 << " " << prodi2 <<" yang ada di Departemen Teknik Elektro dan Teknologi Informasi (DTETI), Fakultas Teknik, Universitas Gadjah Mada.";
    cout << endl;
    return 0; 
}   