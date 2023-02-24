/* Num laboratório de física, em uma experiência de Movimento Uniformemente Variado,
 foram encontrados os seguintes valores: s0=2m, v0=3m/s, a=10m/s2.
  Digitado o valor de t (segundos), apresentar em tela o valor de s (metros). Dada a fórmula:
s = s0 + v0 . t + ½ . a . t2 */


#include<stdio.h>
#include<conio.h>

int main()
{
	float sO, vO, A, s, tempo;
	printf("Digite o tempo: ");
	scanf("%f", &tempo);
	sO=2.0;
	vO=3.0;
	A=10.0;
	s=((sO+vO)*tempo+(1/2)*A*(tempo*tempo));
	printf("O valor do movimento uniformemente variado e: %f", s);
	getch();
	return 0;
}
