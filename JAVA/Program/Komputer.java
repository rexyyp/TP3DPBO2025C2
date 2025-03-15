import java.util.ArrayList;
import java.util.List;

public class Komputer {
  private String nama;
  private Cpu cpu;
  private List<Ram> ramList;
  private HybridStorage hybridStorage;

  public Komputer() {
    this.ramList = new ArrayList<>();
  }

  public Komputer(String nama, Cpu cpu, List<Ram> ramList, HybridStorage hybridStorage) {
    this.nama = nama;
    this.cpu = cpu;
    this.ramList = ramList;
    this.hybridStorage = hybridStorage;
  }

  public void setNama(String nama) {
    this.nama = nama;
  }

  public void setCpu(Cpu cpu) {
    this.cpu = cpu;
  }

  public void setRam(List<Ram> ramList) {
    this.ramList = ramList;
  }

  public void setHybridStorage(HybridStorage hybridStorage) {
    this.hybridStorage = hybridStorage;
  }

  public void addRam(Ram ram) {
    this.ramList.add(ram);
  }

  public String getNama() {
    return this.nama;
  }

  public Cpu getCpu() {
    return this.cpu;
  }

  public List<Ram> getRamList() {
    return this.ramList;
  }

  public HybridStorage getHybridStorage() {
    return this.hybridStorage;
  }
}
