public class HybridStorage {
  private int kapasitasGB;  // → Kapasitas penyimpanan
  private String tipeDrive; // → "Hybrid"
  private int rpm;          // → Jika ada rotasi dari HDD
  private String nandType;  // → Jenis NAND dari SSD
  private Harddrive harddrive;
  private Ssd ssd;

  public HybridStorage() {
  }

  public HybridStorage(int kapasitasGB, String tipeDrive, int rpm, String nandType,
             int kapasitasGB2, String tipeDrive2, String merk, String nama,
             int kapasitasGB3, String tipeDrive3, String merk2, String nama2) {
    this.kapasitasGB = kapasitasGB;
    this.tipeDrive = tipeDrive;
    this.rpm = rpm;
    this.nandType = nandType;
    this.harddrive = new Harddrive(kapasitasGB2, tipeDrive2, merk, nama);
    this.ssd = new Ssd(kapasitasGB3, tipeDrive3, merk2, nama2);
  }

  public void setKapasitasGB(int kapasitasGB) {
    this.kapasitasGB = kapasitasGB;
  }

  public void setTipeDrive(String tipeDrive) {
    this.tipeDrive = tipeDrive;
  }

  public void setRpm(int rpm) {
    this.rpm = rpm;
  }

  public void setNandType(String nandType) {
    this.nandType = nandType;
  }

  public int getKapasitasGB() {
    return this.kapasitasGB;
  }

  public String getTipeDrive() {
    return this.tipeDrive;
  }

  public int getRpm() {
    return this.rpm;
  }

  public String getNandType() {
    return this.nandType;
  }

  public int getTotalKapasitasGB() {
    return this.harddrive.getKapasitasGB() + this.ssd.getKapasitasGB();
  }

  // Getter untuk mengambil informasi SSD dan HDD
  public Ssd getSsd() {
    return this.ssd;
  }

  public Harddrive getHarddrive() {
    return this.harddrive;
  }

  // Getter untuk mendapatkan merk dari HDD
  public String getHddMerk() {
    return this.harddrive.getMerk();
  }

  // Getter untuk mendapatkan nama dari HDD
  public String getHddNama() {
    return this.harddrive.getNama();
  }

  // Getter untuk mendapatkan merk dari SSD
  public String getSsdMerk() {
    return this.ssd.getMerk();
  }

  // Getter untuk mendapatkan nama dari SSD
  public String getSsdNama() {
    return this.ssd.getNama();
  }
}
