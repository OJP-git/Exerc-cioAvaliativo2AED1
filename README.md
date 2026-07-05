# Exerc-cioAvaliativo2AED1
## Nome: João Pedro da Silva Netto
## LeetCode 503: Next Greater Element II
### https://leetcode.com/problems/global-and-local-inversions/
Esse leetcode fornecia um vetor de inteiros e deveriamos verificar se o numero de pares que cumpriam as condições de globais eram iguais ao de pares que cumpriam as condições de locias. Essas condições são:
GLOBAIS:
0 <= i < j < n  e  nums[i] > nums[j]
LOCAIS:
0 <= i < n - 1  e  nums[i] > nums[i + 1]
### Casos testados:
#### { 1, 0, 2 };		     		/* exemplo 1 do enunciado             */
#### { 1, 2, 0 };			    	/* exemplo 2 do enunciado             */
#### { 0 };						      /* elemento unico                     */
#### { };                    /* elemento nulo                      */
#### { 0, 1, 2, 3, 4 };			/* identidade: zero inversoes         */
#### { 1, 0, 3, 2, 4 };			/* trocas adjacentes disjuntas        */
#### { 2, 0, 1 };				    /* valor a 2 posicoes do lugar        */
#### { 4, 3, 2, 1, 0 };			/* permutacao reversa                 */
#### { 0, 2, 1 };			    	/* uma troca adjacente no fim         */
#### { 1, 0, 2, 4, 3 };			/* trocas nas duas pontas             */
#### { 3, 0, 1, 2 };			   	/* 3 globais, 1 local                 */
