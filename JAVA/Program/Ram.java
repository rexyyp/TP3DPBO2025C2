public class Ram extends Komponen {
  private int kapasitasGB;
  private String ddr;

  public Ram() {
  }

  public Ram(int kapasitasGB, String ddr, String merk, String nama) {
    super(merk, nama);
    this.kapasitasGB = kapasitasGB;
    this.ddr = ddr;
  }

  public void setKapasitasGB(int kapasitasGB) {
    this.kapasitasGB = kapasitasGB;
  }

  public void setDdr(String ddr) {
    this.ddr = ddr;
  }

  public int getKapasitasGB() {
    return this.kapasitasGB;
  }

  public String getDdr() {
    return this.ddr;
  }
}
