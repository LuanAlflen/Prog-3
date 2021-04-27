class Cor:
   def __init__(self, *args):         #construtor
      self.Input = args

   def __add__(self, Other):          #metodo para criar uma variavel temporaria, e fazer as alterações necessarias
      Saida = Cor()
      Saida.Input = self.Input + Other.Input
      return Saida

   def __str__(self):                 #metodo para fazer as somas de sobrecarga
      Saida = ""
      for Item in self.Input:
         Saida += Item
         Saida += " "
      return Saida

Cores1 = Cor("Vermelho", "Verde", "Azul")
Cores2 = Cor("Amarelo", "Roxo", "Preto")
Cores3 = Cores1 + Cores2

print(Cores3)
#Ao aplicar o operador + a objetos Cor, o Python invoca __add__. Ao exibir o resultado, o Python invoca __str__. 

#referencia
#https://pt.stackoverflow.com/questions/452143/como-funciona-a-sobrecarga-de-operador
#https://pense-python.caravela.club/17-classes-e-metodos/07-sobrecarga-de-operadores.html