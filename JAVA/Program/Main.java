import java.util.ArrayList;
import java.util.List;

public class Main {
     public static void main(String[] args) {
          
          Cpu cpu = new Cpu(8, 3.4f, "Intel", "Core i7"); 
          Ram ram1 = new Ram(16, "DDR5", "Corsair", "Vengeance");
          Harddrive harddrive = new Harddrive(1024, "SSD", "Samsung", "Evo");
          HybridStorage hybridStorage = new HybridStorage(1024, "Hybrid", 7200, "TLC", 1024, "SSD", "Samsung", "Evo", 1024, "HDD", "Seagate", "Barracuda");
          List<Ram> ramList = new ArrayList<>();
          ramList.add(ram1);
          ramList.add(new Ram(8, "DDR4", "Corsair", "Vengeance"));
          Komputer komputer = new Komputer("PC Abdul", cpu, ramList, hybridStorage);
          komputer.addRam(new Ram(16, "DDR5", "Kingston", "FURY"));

          System.out.println("===========================================");
          System.out.println("        INFORMASI SPESIFIKASI KOMPUTER     ");
          System.out.println("===========================================");
          System.out.println("Nama Komputer : " + komputer.getNama());
          System.out.println("CPU           : " + komputer.getCpu().getMerk() + " "
                    + komputer.getCpu().getNama() + " ("
                    + komputer.getCpu().getJumlahCore() + " Core) ~"
                    + komputer.getCpu().getKecepatanGHz() + "GHz");

          System.out.println("RAM Installed :");
          for (Ram ram : komputer.getRamList()) {
               System.out.println("   - " + ram.getMerk() + ' ' + ram.getNama()
                         + " (" + ram.getKapasitasGB() + " GB) "
                         + ram.getDdr());
          }

          System.out.println("-------------------------------------------");
          System.out.println("Detail Penyimpanan :");
          System.out.println("   - SSD  : " + komputer.getHybridStorage().getSsdMerk()
                    + " " + komputer.getHybridStorage().getSsdNama() + " ("
                    + komputer.getHybridStorage().getSsd().getKapasitasGB() + " GB)");
          System.out.println("   - HDD  : " + komputer.getHybridStorage().getHddMerk()
                    + " " + komputer.getHybridStorage().getHddNama() + " ("
                    + komputer.getHybridStorage().getHarddrive().getKapasitasGB() + " GB)");

          System.out.println("-------------------------------------------");
          System.out.println("Penyimpanan Hybrid :");
          System.out.println("   - Kapasitas Total : "
                    + komputer.getHybridStorage().getTotalKapasitasGB() + " GB");
          System.out.println("   - Tipe            : "
                    + komputer.getHybridStorage().getTipeDrive());
          System.out.println("   - RPM             : "
                    + komputer.getHybridStorage().getRpm() + " RPM");
          System.out.println("   - NAND Type       : "
                    + komputer.getHybridStorage().getNandType());

          System.out.println("===========================================");
     }
}
