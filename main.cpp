#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"
#include "HybridStorage.cpp"


using namespace std;


int main() {
    ios::sync_with_stdio(0); cin.tie();


    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SSD", "Samsung", "Evo");
    HybridStorage hybridStorage(1024, "Hybrid", 7200, "TLC", 1024, "SSD", "Samsung", "Evo", 1024, "HDD", "Seagate", "Barracuda");
    Komputer komputer("PC Abdul", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, hybridStorage);
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));
   
    cout << "Informasi Komputer:" << endl;
    cout << "Nama      : " << komputer.getNama() << endl;
    cout << "Cpu       : " << komputer.getCpu().getMerk() << ' ' << komputer.getCpu().getNama() << " (" << komputer.getCpu().getJumlahCore() << " Core) " << "~" << komputer.getCpu().getKecepatanGHz() << "GHz" << endl;
    for (Ram& ram : komputer.getRamList())
    {
        cout << "Ram       : ";
        cout << ram.getMerk() << ' ' << ram.getNama() << " (" << ram.getKapasitasGB() << " GB) " << ram.getDdr() << endl;
    }
    // cout << "Harddrive : " << komputer.getHarddrive().getTipeDrive() << ' ' << komputer.getHarddrive().getMerk() << ' ' << komputer.getHarddrive().getNama() << " (" << komputer.getHarddrive().getKapasitasGB() << " GB) " << endl;



    return 0;
}
