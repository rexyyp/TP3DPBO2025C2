#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "HybridStorage.cpp"
#include "Ssd.cpp"
#include "Harddrive.cpp"

using namespace std;

class Komputer
{
private:
  string nama;
  Cpu cpu;
  vector<Ram> ramList;
  HybridStorage hybridStorage;

public:
  Komputer(){
  }

  Komputer(string nama, Cpu cpu, vector<Ram> ramList, HybridStorage hybridstorage)
  {
    this->nama = nama;
    this->cpu = cpu;
    this->ramList = ramList;
    this->hybridStorage = hybridstorage;
  }

  void setNama(string nama)
  {
    this->nama = nama;
  }

  void setCpu(Cpu cpu)
  {
    this->cpu = cpu;
  }

  void setRam(vector<Ram> ramList)
  {
    this->ramList = ramList;
  }

  void setHybridStorage(HybridStorage hybridStorage)
  {
    this->hybridStorage = hybridStorage;
  }

  void addRam(Ram ram)
  {
    this->ramList.push_back(ram);
  }

  string getNama()
  {
    return this->nama;
  }

  Cpu getCpu()
  {
    return this->cpu;
  }

  vector<Ram> getRamList() // return vector
  {
    return this->ramList;
  }

  HybridStorage getHybridStorage()
  {
    return this->hybridStorage;
  }

  ~Komputer(){
  }
};
