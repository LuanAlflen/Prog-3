class CarrinhoCompras:
  def __init__(self):
    self.produtos = []

  def inserirProduto(self, produto):
    self.produtos.append(produto) #atributo da Classe 'produto'
  
  def mostrarProdutos(self):
    for produtos in self.produtos:
      print(produtos.nome, produtos.valor)

  def __del__(self):



class Produto:
  def __init__(self, nome, valor):
    self.nome = nome
    self.valor = valor


carrinho = CarrinhoCompras()

p1 = Produto('Chocolate', 4.50)
p2 = Produto('Ovo de Pascoa', 55.98)
p3 = Produto('Coquinha', 3.00)

carrinho.inserirProduto(p1)
carrinho.inserirProduto(p2)
carrinho.inserirProduto(p3)
carrinho.inserirProduto(p1)

carrinho.mostrarProdutos()

#youtube.com/watch?v=ewGulRBQxOE