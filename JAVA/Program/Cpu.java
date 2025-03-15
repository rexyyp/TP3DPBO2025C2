public class Cpu extends Komponen {
  private int jumlahCore;
  private float kecepatanGHz;

  public Cpu() {
  }

  public Cpu(int jumlahCore, float kecepatanGHz, String merk, String nama) {
    super(merk, nama);
    this.jumlahCore = jumlahCore;
    this.kecepatanGHz = kecepatanGHz;
  }

  public void setJumlahCore(int jumlahCore) {
    this.jumlahCore = jumlahCore;
  }

  public void setKecepatanGHz(float kecepatanGHz) {
    this.kecepatanGHz = kecepatanGHz;
  }

  public int getJumlahCore() {
    return jumlahCore;
  }

  public float getKecepatanGHz() {
    return kecepatanGHz;
  }
}
