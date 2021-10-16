unidades=['zero', 'um', 'dois', 'três', 'quatro', 'cinco', 'seis', 'sete', 'oito', 'nove']

dezenas=['vinte', 'trinta', 'quarenta', 'cinquenta', 'sessenta', 'setenta', 'oitenta', 'noventa', 'cem']

centenas=['cento', 'duzentos', 'trezentos', 'quatrocentos', 'quinhentos', 'seiscentos', 'setecentos', 'oitocentos', 'novecentos']

especiais=['dez','onze', 'doze', 'treze', 'quatorze', 'quinze', 'dezesseis', 'dezessete', 'dezoito', 'dezenove']
res=""
linha= input()
num= int(linha)
if(num>=0 and num<=9):
    res+=unidades[num]
#num=13
elif (num>=10 and num<=19):
    res+=especiais[num-10]
elif (num>=20 and num<=100):
    res+=dezenas[int(linha[0])-2]
    if(linha[1]!='0'):
        res+= " e " + unidades[int(linha[1])]
else:
    res+= centenas[int(linha[0])-1]
    if(linha[1]=='1'):
        res+= " e "+especiais[int(linha[2])]
    elif (linha[1]=='0'):
        res+= " e "+unidades[int(linha[2])]
    else:
        res+= " e "+dezenas[int(linha[1])-2]
        if(linha[2]!='0'):
            res+= " e "+unidades[int(linha[2])]
print(res)
#[3,1,0]

