from Komponen import Komponen

class Ram(Komponen):
  def __init__(self, kapasitasGB=0, ddr="", merk="", nama=""):
    super().__init__(merk, nama)
    self.kapasitasGB = kapasitasGB
    self.ddr = ddr

  def set_kapasitasGB(self, kapasitasGB):
    self.kapasitasGB = kapasitasGB

  def set_ddr(self, ddr):
    self.ddr = ddr

  def get_kapasitasGB(self):
    return self.kapasitasGB

  def get_ddr(self):
    return self.ddr
