from Harddrive import Harddrive
from Ssd import Ssd

class HybridStorage(Harddrive, Ssd):
  def __init__(self, kapasitasGB, tipeDrive, rpm, nandType, kapasitasGB2, tipeDrive2, merk, nama, kapasitasGB3, tipeDrive3, merk2, nama2):
    Harddrive.__init__(self, kapasitasGB2, tipeDrive2, merk, nama)
    Ssd.__init__(self, kapasitasGB3, tipeDrive3, merk2, nama2)
    self.kapasitasGB = kapasitasGB
    self.tipeDrive = tipeDrive
    self.rpm = rpm
    self.nandType = nandType

  def setKapasitasGB(self, kapasitasGB):
    self.kapasitasGB = kapasitasGB

  def setTipeDrive(self, tipeDrive):
    self.tipeDrive = tipeDrive

  def setRpm(self, rpm):
    self.rpm = rpm

  def setNandType(self, nandType):
    self.nandType = nandType

  def getKapasitasGB(self):
    return self.kapasitasGB

  def getTipeDrive(self):
    return self.tipeDrive

  def getRpm(self):
    return self.rpm

  def getNandType(self):
    return self.nandType

  def getTotalKapasitasGB(self):
    return Harddrive.getKapasitasGB(self) + Ssd.getKapasitasGB(self)

  def getSsd(self):
    return self

  def getHarddrive(self):
    return self

  def getHddMerk(self):
    return Harddrive.getMerk(self)

  def getHddNama(self):
    return Harddrive.getNama(self)

  def getSsdMerk(self):
    return Ssd.getMerk(self)

  def getSsdNama(self):
    return Ssd.getNama(self)
