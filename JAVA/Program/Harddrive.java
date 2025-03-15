public class Harddrive extends Komponen {
  private int kapasitasGB;
  private String tipeDrive;

  public Harddrive() {
  }

  public Harddrive(int kapasitasGB, String tipeDrive, String merk, String nama) {
    super(merk, nama);
    this.kapasitasGB = kapasitasGB;
    this.tipeDrive = tipeDrive;
  }

  public void setKapasitasGB(int kapasitasGB) {
    this.kapasitasGB = kapasitasGB;
  }

  public void setTipeDrive(String tipeDrive) {
    this.tipeDrive = tipeDrive;
  }

  public int getKapasitasGB() {
    return this.kapasitasGB;
  }

  public String getTipeDrive() {
    return this.tipeDrive;
  }
}
