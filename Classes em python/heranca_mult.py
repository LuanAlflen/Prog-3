class Azul:
  cor = 'azul'
  nivel = 1
  tom = 'marinho'
  def ehVermelho(self):
    return False
     
class Vermelho:
  cor = 'vermelho'
  nivel = 2
     
  def ehVermelho(self):
    return True
     
class Minha:
  def printcor(self):
    print(self.cor)
    print(self.nivel)
    print(self.tom)
         
class MinhaCor(Minha, Vermelho, Azul):
  def ehVermelho(self):
    return 'sempre'
     
mc = MinhaCor()
mc.printcor()
print (mc.ehVermelho())
