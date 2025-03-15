#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"
#include "HybridStorage.cpp"

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie();

    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SSD", "Samsung", "Evo");
    HybridStorage hybridStorage(1024, "Hybrid", 7200, "TLC", 1024, "SSD", "Samsung", "Evo", 1024, "HDD", "Seagate", "Barracuda");
    Komputer komputer("PC Abdul", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, hybridStorage);
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));

    cout << "===========================================" << endl;
    cout << "        INFORMASI SPESIFIKASI KOMPUTER     " << endl;
    cout << "===========================================" << endl;
    cout << "Nama Komputer : " << komputer.getNama() << endl;
    cout << "CPU           : " << komputer.getCpu().getMerk() << " "
         << komputer.getCpu().getNama() << " ("
         << komputer.getCpu().getJumlahCore() << " Core) ~"
         << komputer.getCpu().getKecepatanGHz() << "GHz" << endl;

    cout << "RAM Installed :" << endl;
    for (Ram &ram : komputer.getRamList())
    {
        cout << "   - " << ram.getMerk() << ' ' << ram.getNama()
             << " (" << ram.getKapasitasGB() << " GB) "
             << ram.getDdr() << endl;
    }

    cout << "-------------------------------------------" << endl;
    cout << "Detail Penyimpanan :" << endl;
    cout << "   - SSD  : " << komputer.getHybridStorage().getSsdMerk()
         << " " << komputer.getHybridStorage().getSsdNama() << " ("
         << komputer.getHybridStorage().getSsd().getKapasitasGB() << " GB)" << endl;
    cout << "   - HDD  : " << komputer.getHybridStorage().getHddMerk()
         << " " << komputer.getHybridStorage().getHddNama() << " ("
         << komputer.getHybridStorage().getHarddrive().getKapasitasGB() << " GB)" << endl;

    cout << "-------------------------------------------" << endl;
    cout << "Penyimpanan Hybrid :" << endl;
    cout << "   - Kapasitas Total : "
         << komputer.getHybridStorage().getTotalKapasitasGB() << " GB" << endl;
    cout << "   - Tipe            : "
         << komputer.getHybridStorage().getTipeDrive() << endl;
    cout << "   - RPM             : "
         << komputer.getHybridStorage().getRpm() << " RPM" << endl;
    cout << "   - NAND Type       : "
         << komputer.getHybridStorage().getNandType() << endl;
         
    cout << "===========================================" << endl;

    return 0;
}
