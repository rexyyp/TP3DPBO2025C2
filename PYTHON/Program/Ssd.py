from Komponen import Komponen

class Ssd(Komponen):
  def __init__(self, kapasitasGB=0, tipeDrive="", merk="", nama=""):
    super().__init__(merk, nama)
    self.kapasitasGB = kapasitasGB
    self.tipeDrive = tipeDrive

  def setKapasitasGB(self, kapasitasGB):
    self.kapasitasGB = kapasitasGB

  def setTipeDrive(self, tipeDrive):
    self.tipeDrive = tipeDrive

  def getKapasitasGB(self):
    return self.kapasitasGB

  def getTipeDrive(self):
    return self.tipeDrive
