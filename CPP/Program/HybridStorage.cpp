#pragma once
#include <iostream>
#include <string>
#include "Harddrive.cpp"
#include "Ssd.cpp"

using namespace std;

class HybridStorage : public Harddrive, public Ssd
{
private:
  int kapasitasGB;  // → Kapasitas penyimpanan
  string tipeDrive; // → "Hybrid"
  int rpm;          // → Jika ada rotasi dari HDD
  string nandType;  // → Jenis NAND dari SSD

public:
  HybridStorage()
  {
  }

  HybridStorage(int kapasitasGB, string tipeDrive, int rpm, string nandType,
                int kapasitasGB2, string tipeDrive2, string merk, string nama,
                int kapasitasGB3, string tipeDrive3, string merk2, string nama2) : Harddrive(kapasitasGB2, tipeDrive2, merk, nama), Ssd(kapasitasGB3, tipeDrive3, merk, nama)
  {
    this->kapasitasGB = kapasitasGB;
    this->tipeDrive = tipeDrive;
    this->rpm = rpm;
    this->nandType = nandType;
  }

  void setKapasitasGB(int kapasitasGB)
  {
    this->kapasitasGB = kapasitasGB;
  }

  void setTipeDrive(string tipeDrive)
  {
    this->tipeDrive = tipeDrive;
  }

  void setRpm(int rpm)
  {
    this->rpm = rpm;
  }

  void setNandType(string nandType)
  {
    this->nandType = nandType;
  }

  int getKapasitasGB()
  {
    return this->kapasitasGB;
  }

  string getTipeDrive()
  {
    return this->tipeDrive;
  }

  int getRpm()
  {
    return this->rpm;
  }

  string getNandType()
  {
    return this->nandType;
  }

  int getTotalKapasitasGB()
  {
    return Harddrive::getKapasitasGB() + Ssd::getKapasitasGB();
  }

  // Getter untuk mengambil informasi SSD dan HDD
  Ssd getSsd()
  {
    return *this; // Menggunakan pewarisan untuk mengembalikan Ssd
  }

  Harddrive getHarddrive()
  {
    return *this; // Menggunakan pewarisan untuk mengembalikan Harddrive
  }

  // Getter untuk mendapatkan merk dari HDD
  string getHddMerk()
  {
    return Harddrive::getMerk(); // Ambil dari Harddrive
  }

  // Getter untuk mendapatkan nama dari HDD
  string getHddNama()
  {
    return Harddrive::getNama(); // Ambil dari Harddrive
  }

  // Getter untuk mendapatkan merk dari SSD
  string getSsdMerk()
  {
    return Ssd::getMerk(); // Ambil dari Ssd
  }

  // Getter untuk mendapatkan nama dari SSD
  string getSsdNama()
  {
    return Ssd::getNama(); // Ambil dari Ssd
  }

  ~HybridStorage()
  {
  }
};