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
    print(f"Cantora {i+1}: {listamusica[i]['nome']} : {listamusica[i]['função']} : {listamusica[i]['outros']}")

remover = int(input("Se deseja remover alguma cantora da lista, digite 1. Caso queira mantê-la assim, digite 0: "))

if remover == 1:
    while remover == 1:
        item = int(input("Certo, qual o número da cantora que deseja remover?\n"))
        del listamusica[item - 1]
        for i in range(0, len(listamusica)):
            print(f"Nova lista:\nCantora {i+1}: {listamusica[i]['nome']} : {listamusica[i]['função']} : {listamusica[i]['outros']}")
        remover = int(input("Se deseja remover outra cantora da lista, digite 1. Caso queira mantê-la assim, digite 0: "))

if remover == 0:
    print("Certo, muito obrigado!")