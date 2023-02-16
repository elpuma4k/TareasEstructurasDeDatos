"""
Juan David Tabares Pérez
Codigo: 8977554
Tarea 1
Fecha: 03/02/2023
"""

#Ejercicio 1

def verificarDiagonales(matriz):
    ans, lista1, lista2 = False, [], []
    for i in range(len(matriz)):
        lista1.append(matriz[i][i])
    for i in range(len(matriz)):
        lista2.append(matriz[i][len(matriz)-i-1])
    if lista1 == lista2:
        ans = True
    return ans

#Ejercicio 2

def esCapicua(lista):
    ans, flag = True, False
    while flag == False:
        for i in range(len(lista) // 2):
            if lista[i] != lista[-i -1]:
                ans = False
        return ans

#Ejercicio 3
#a)

def diferenciaListas(listaA, listaB):
    ans = []
    conjuntoB = set(listaB)
    for elemento in listaA:
        flag = False
        if elemento in conjuntoB:
            conjuntoB.remove(elemento)
            flag = True
        if not flag:
            ans.append(elemento)
    return ans

#b)

def leerImprimir():
    numCasos = int(input())
    for i in range(numCasos):
        a = input().split()
        listaA = []
        for j in range(int(a[0])):
            listaA.append(int(a[j + 1]))
        b = input().split()
        listaB = []
        for j in range(int(b[0])):
            listaB.append(int(b[j + 1]))
        ans = diferenciaListas(listaA, listaB)
        #Imprimir + sin coma al final
        for k in range(len(ans)):
            if k == len(ans) - 1:
                print("%d" % ans[k], end="\n")
            else:
                print("%d" % ans[k], end=", ")

#Ejercicio 4
#Permite determinar si un numero es primo.
def esPrimo(num):
    ans = True
    for i in range(2, num):
        if num % i == 0:
            ans = False
    return ans

#Permite sumar numeros por digitos.
def sumarDigitos(n):
    suma = 0
    for i in str(n):
        suma += int(i)
    return suma

def mostrarPrimos(N):
    primos = []
    #almacenar primos
    for i in range(2, N):
        if esPrimo(i):
            primos.append(i)
    #Imprimir primos
    print("Números primos entre 1 y %d:" % N)
    for i in range(len(primos)):
        if i == len(primos) - 1:
            print("--> %d" % primos[i])
        else:
            print("--> %d," % primos[i])
    print("\nNúmeros entre 1 y %d con suma de dígitos con valor primo:" % N)
    #Sumar y almacenar los numeros cuya suma de digitos dan un primo
    sumaYPrimo = []
    for i in primos:
        sumaT = sumarDigitos(i)
        if esPrimo(sumaT):
            sumaYPrimo.append(i)
    for i in range(len(sumaYPrimo)):
        if i == len(sumaYPrimo) - 1:
            print("%d" % sumaYPrimo[i],end="")
        else:
            print("%d" % sumaYPrimo[i],end=", ")

#Ejercicio 5

def sumarValoresMatriz(mat, par):
    contSuma = 0
    for i in range(len(par)):
        fila = par[i][0]
        col = par[i][1]
        if fila in mat:
            sublista = mat[fila]
            for j in range(len(sublista)):
                columna = sublista[j][0]
                valor = sublista[j][1]
                if columna == col:
                    contSuma += valor
    return contSuma





