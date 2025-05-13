listamusica = []
adicionar = 1

while adicionar == 1:
    nome = input("Digite o nome de uma cantora:\n")
    funcao = input("Em qual função ela se destaca?\n")
    outros = input("Ela participa de outras atividades artísticas não ligadas ao mundo da música?\n")
    cantora = {"nome": nome, "função": funcao, "outros": outros}
    listamusica.append(cantora)
    adicionar = int(input("Se deseja continuar, digite 1. Se deseja parar, digite 0: "))

for i in range(0, len(listamusica)):
    print(f"{listamusica[i]['nome']} : {listamusica[i]['função']} : {listamusica[i]['outros']}")