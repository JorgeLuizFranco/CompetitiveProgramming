#include <bits/stdc++.h>

using namespace std;

const int MAX_ALUNOS = 1000;
int main()
{
	int i, indice_melhor, n;
	int turma=1;
	struct
	{
	int codigo, media;
	} alunos[MAX_ALUNOS];
	// le numero de alunos da primeira turma
	cin >> n;
	while (n > 0)
	{
		// le dados dos alunos
		vector<int> v[MAX_ALUNOS];
		for (i = 0; i < n; i++)
			cin >> alunos[i].codigo >> alunos[i].media;
		// procura aluno de maior media
		indice_melhor = 0;
		for (i = 1; i < n; i++){
			if (alunos[i].media > alunos[indice_melhor].media)
		        indice_melhor = i;
            else if(alunos[i].media==alunos[indice_melhor].media){
                v[indice_melhor].push_back(i);
            }
        }
		// escreve resposta
		cout << "Turma " << turma++ << "\n";
		cout << alunos[indice_melhor].codigo << ' ';
        for(int x: v[indice_melhor]){
            cout<< alunos[x].codigo<<' ';
        }
        cout<< "\n\n";
		// le numero de alunos da proxima turma
		cin >> n;
	}
	return 0;
}