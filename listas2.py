diadasemana = []
diadasemana.append("domingo")
diadasemana.append("segunda-feira")
diadasemana.append("terça-feira")
diadasemana.append("quarta-feira")
diadasemana.append("quinta-feira")
diadasemana.append("sexta-feira")
diadasemana.append("sábado")

temp = []
temp.append(27)
temp.append(30)
temp.append(27.6)
temp.append(23.5)
temp.append(29.3)
temp.append(24)
temp.append(21)

media = sum(temp)/7

print(f"Dias com a temperatura abaixo da média semanal ({media:.2f}°C):")

for i in range(0,7):
    if (temp[i] < media):
        print(f"{diadasemana[i]} ({temp[i]}°C)")