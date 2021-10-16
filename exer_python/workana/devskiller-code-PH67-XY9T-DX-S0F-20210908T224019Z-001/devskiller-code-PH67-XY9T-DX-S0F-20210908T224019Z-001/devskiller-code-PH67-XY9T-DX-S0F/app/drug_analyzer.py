from sys import path
from typing import List

class DrugAnalyzer(List):
    # TODO: Part 1 - Add method(s) necessary to fulfill the requirements.
    data = None
    def __init__(self, matriz=[]) -> None:
        self.data = matriz

    def verify_series(
        self,
        series_id: str,
        act_subst_wgt: float,
        act_subst_rate: float,
        allowed_imp: float,
    ) -> bool:
        # TODO: Part 2 - Implement this method.
        if len(series_id) != 3:
            return False
        lista_esperada = None
        cont=0
        for lista in self.data:
            if lista[0].split('-')[0] == series_id:
                cont+=1
                if lista_esperada == None:
                    lista_esperada = lista
                else:
                    lista_esperada[1] += lista[1]
                    lista_esperada[2] += lista[2]
                    lista_esperada[3] += lista[3]
        if lista_esperada == None:
            raise ValueError(series_id+" series is not present within the dataset.")
        
        
        if lista_esperada[2] != act_subst_wgt:
            taxa_main_menos = cont*act_subst_wgt
            taxa=taxa_main_menos*act_subst_rate
            if lista_esperada[2]>= taxa_main_menos-taxa and lista_esperada[2]<= taxa_main_menos+taxa:
                if lista_esperada[3]> lista_esperada[1]*allowed_imp :
                    return False   
            else:
                return False
        return True
    
    def __add__(self, ca):
        try:
            a, b, c, d = ca

            self.data.append(ca)
            return DrugAnalyzer(self.data)
        except ValueError:
            raise ValueError("Improper length of the added list")

# my_drug_data = [
#                  ['L01-10', 1000.02, 102.88, 1.00100],
#                  ['L01-06', 999.90, 96.00, 2.00087],
#                  ['G02-03', 1000, 96.50, 3.00100],
#                  ['G03-06', 989.01, 119.00, 4.00004]
# ]
#my_analyzer = DrugAnalyzer(my_drug_data)
#print(my_analyzer.data)
#my_new_analyzer = my_analyzer + ['G03-01', 789.01, 129.00, 0.00008]+['G02-03', 1111.95, 125.04, 3.00100]
#print(my_new_analyzer.data)
#a=my_analyzer.verify_series(series_id = 'L01', act_subst_wgt = 100, act_subst_rate = 0.05, allowed_imp = 0.001)
#print(a)
#a=my_analyzer.verify_series(series_id = 'L01', act_subst_wgt = 100, act_subst_rate = 0.05, allowed_imp = 0.0001)
#print(a)