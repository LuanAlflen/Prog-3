class Cliente:
  def __init__(self, nome, idade):
    self.nome = nome
    self.idade = idade
    self.endereco = []

  def insereEndereco(self, cidade, estado):
    self.endereco.append(Endereco(cidade,estado)) #A própria classe Endereco

  def mostraEnderecos(self):
    print(self.nome)
    for endereco in self.endereco:
      print(endereco.cidade + '/' + endereco.estado)
    print()
  
  def __del__(self):
    print(self.nome + ' deletado')

class Endereco:
  def __init__(self, cidade, estado):
    self.cidade = cidade
    self.estado = estado
  
  def __del__(self):
    print(self.cidade + '/' + self.estado + ' deletado')


c1 = Cliente('Meguil', 88)
c1.insereEndereco('Pitanga', 'PR')
c1.insereEndereco('Joinville', 'SC')

c2 = Cliente('Laun', 33)
c2.insereEndereco('Araquari', 'SC')

c1.mostraEnderecos()
c2.mostraEnderecos()

del c1
print('FIM DO PROGRAMA')