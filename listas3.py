diadasemana = []
diadasemana.append("domingo")
diadasemana.append("segunda-feira")
diadasemana.append("terça-feira")
diadasemana.append("quarta-feira")
diadasemana.append("quinta-feira")
diadasemana.append("sexta-feira")
diadasemana.append("sábado")

temp = []
temp.append([0] * 7)
temp.append([0] * 7)
temp.append([0] * 7)
soma = 0

for i in range(0,3):
    for j in range (0,7):
        temp[i][j] = float(input(f"Qual a temperatura registrada no dia {j+1} da semana {i+1} (em °C)?\n"))
        soma += temp[i][j]
        
media = soma/21

print(f"Dias com a temperatura abaixo da média semanal ({media:.2f}°C):")

for i in range(0,3):
    for j in range(0,7):
        if (temp[i][j] < media):
            print(f"{diadasemana[j]} ({temp[i]}°C)")