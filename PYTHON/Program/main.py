from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Komputer import Komputer
from HybridStorage import HybridStorage

def main():
    cpu = Cpu(8, 3.4, "Intel", "Core i7")
    ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
    harddrive = Harddrive(1024, "SSD", "Samsung", "Evo")
    hybrid_storage = HybridStorage(1024, "Hybrid", 7200, "TLC", 1024, "SSD", "Samsung", "Evo", 1024, "HDD", "Seagate", "Barracuda")
    komputer = Komputer("PC Abdul", cpu, [ram1, Ram(8, "DDR4", "Corsair", "Vengeance")], hybrid_storage)
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"))

    print("===========================================")
    print("        INFORMASI SPESIFIKASI KOMPUTER     ")
    print("===========================================")
    print("Nama Komputer :", komputer.getNama())
    print("CPU           :", komputer.getCpu().get_merk(), komputer.getCpu().get_nama(),
          "(", komputer.getCpu().get_jumlah_core(), "Core) ~", komputer.getCpu().get_kecepatan_ghz(), "GHz")

    print("RAM Installed:")
    for ram in komputer.getRamList():
        print("   -", ram.get_merk(), ram.get_nama(), "(", ram.get_kapasitasGB(), "GB)", ram.get_ddr())

    print("-------------------------------------------")
    print("Detail Penyimpanan:")
    print("   - SSD  :", komputer.getHybridStorage().getSsd().get_merk(), komputer.getHybridStorage().getSsd().get_nama(),
          "(", komputer.getHybridStorage().getSsd().getKapasitasGB(), "GB)")
    print("   - HDD  :", komputer.getHybridStorage().getHarddrive().get_merk(), komputer.getHybridStorage().getHarddrive().get_nama(),
          "(", komputer.getHybridStorage().getHarddrive().getKapasitasGB(), "GB)")

    print("-------------------------------------------")
    print("Penyimpanan Hybrid:")
    print("   - Kapasitas Total :", komputer.getHybridStorage().getTotalKapasitasGB(), "GB")
    print("   - Tipe            :", komputer.getHybridStorage().getTipeDrive())
    print("   - RPM             :", komputer.getHybridStorage().getRpm(), "RPM")
    print("   - NAND Type       :", komputer.getHybridStorage().getNandType())

    print("===========================================")

if __name__ == "__main__":
    main()