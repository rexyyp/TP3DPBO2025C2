from Cpu import Cpu
from Ram import Ram
from HybridStorage import HybridStorage

class Komputer:
  def __init__(self, nama="", cpu=None, ramList=None, hybridStorage=None):
    self.nama = nama
    self.cpu = cpu if cpu is not None else Cpu()
    self.ramList = ramList if ramList is not None else []
    self.hybridStorage = hybridStorage if hybridStorage is not None else HybridStorage()

  def setNama(self, nama):
    self.nama = nama

  def setCpu(self, cpu):
    self.cpu = cpu

  def setRam(self, ramList):
    self.ramList = ramList

  def setHybridStorage(self, hybridStorage):
    self.hybridStorage = hybridStorage

  def addRam(self, ram):
    self.ramList.append(ram)

  def getNama(self):
    return self.nama

  def getCpu(self):
    return self.cpu

  def getRamList(self):
    return self.ramList

  def getHybridStorage(self):
    return self.hybridStorage
