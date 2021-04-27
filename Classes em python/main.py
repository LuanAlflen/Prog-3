class Funcionario:
  def __init__(self, nome, idade, salario):   #construtor da classe
    self.__nome = nome                        #define o nome  
    self.__idade = idade                      #define a idade
    self.__salario = salario                  #define o salario

  def __del__(self):                          #destrutor da classe
    print(self.__nome + " deletado")
    
  def setSalario(self, o_salario):            #define um salario, caso precise mudar
    self.__salario = o_salario

  def setNome(self, o_nome):                  #define um salario, caso precise mudar
    self.__nome = o_nome

  def setIdade(self, o_idade):                #define um salario, caso precise mudar
    self.__idade = o_idade 

  def getSalario(self):                       #define um get para mostrar o salario
    return self.__salario

  def getNome(self):                          #define um get para mostrar o nome
    return self.__nome  

  def getIdade(self):                         #define um get para mostrar a idade
    return self.__idade         

  def salarioLiquido(self):                   #metodo para diminuir a parte dos impostos
    print(self.__salario*0.8)      

class Gerente(Funcionario):
  def __init__(self, nome, idade, salario, bonificacao):                #construtor da classe
    super().__init__(nome, idade, salario)                              
    self.bonificacao = bonificacao                                      #define uma bonificacao
    self.setSalario(bonificacao + self.getSalario())                    #define um novo salario com a     bonificacao

  def salarioLiquido(self):                                             #calcula os impostos de sub classe com base na profisssao
    print(self.getSalario()*0.7) 

class Zelador(Funcionario):
  def __init__(self, nome, idade, salario, hora_chegada, hora_saida):   #contrutor da classe
    super().__init__(nome, idade, salario)                              
    self.hora_chegada = hora_chegada                                    #define a hora de chegada
    self.hora_saida = hora_saida                                        #define a hora de saida
    
  def salarioLiquido(self):                                             #calcula os impostos de sub classe com base na profisssao
    print(self.getSalario()*0.6) 


kellad = Funcionario ('Kellad', 50, 100.0)
votir = Gerente('Votir', 38, 100.0, 100.0) 
coral = Zelador('Coral', 50, 1285.44, 9, 14)

#votir.salarioLiquido()
#kellad.salarioLiquido()
#coral.salarioLiquido()

kellad.__nome = 'fiuafiau'
print(kellad.getNome())

#referencia
#https://algoritmosempython.com.br/cursos/programacao-python/polimorfismo/
#https://www.digitalocean.com/community/tutorials/understanding-class-inheritance-in-python-3
#http://igorsobreira.com/2008/03/14/construtores-e-destrutores-em-python-e-php-5.html
#https://www.tutorialsteacher.com/python/public-private-protected-modifiers
#https://stackoverflow.com/questions/37852560/is-del-really-a-destructor


#Classe, objeto, atributo, método             OK
#Encapsulamento                               OK (comentar sobre protegido)
#Construtores e Destrutores                   OK
#Templates                                    A principio nao tem
#Herança simples e múltipla                   Simples OK Multipla quase OK
#Associação: composição e agregação           Composição OK Agregacao OK
#Polimorfismo                                 OK
#Sobrecarga de operador                       OK