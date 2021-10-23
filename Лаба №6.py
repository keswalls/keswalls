print('введите номер задания')
x = int(input())
while x <= 7 and x > 0:
    if x == 1:
        print('Поменять местами содержимое переменных A и B и вывести новые значения A и B.')
        import math
        A = float(input("A = "))
        B = float(input("B = "))
        T=A
        A=B
        B=T
        print(A,B)
        print('введите номер задания')
        x = int(input())

    if x == 2:
        print('Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.')
        import math
        A = float(input("A = "))
        B = float(input("B = "))
        C = float(input("C = "))
        v = A
        A = C
        C = v
        v = B
        B = C
        C = v
        print('Результат:');
        print(' A = ', A, ', B = ', B, ', C = ', C)
        print('введите номер задания')
        x = int(input())

    if x == 3:
        print('Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.')
        import math
        A = float(input("A = "))
        B = float(input("B = "))
        C = float(input("C = "))
        v = A
        A = B
        B = v
        v = B
        B = C
        C = v
        print('Результат:');
        print(' A = ', A, ', B = ', B, ', C = ', C)
        print('введите номер задания')
        x = int(input())

    if x == 4:
        print('Найти значение функции y = 3x^6 − 6x^2 − 7 при данном значении x')
        x=float(input("x = "))
        y=3*x**6-6*x**2-7
        print("Результат =",y)
        print('введите номер задания')
        x = int(input())

    if  x == 5:
        print('Найти значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2 при данном значении x')
        x=float(input("x = "))
        y=4*((x-3)**6)- 7*((x-3)**3)+2
        print("Результат =",y)
        print('введите номер задания')
        x = int(input())

    if  x == 6:
        print('Дано число A. Вычислить A^8 , используя вспомогательную переменную и три операции умножения.')
        A=float(input("A = "))
        A2=A*A
        A4=A2*A2
        A8=A4*A4
        print("A^2 =",A2)
        print("A^4 =",A4)
        print("A^8 =",A8)
        print('введите номер задания')
        x = int(input())

    if  x == 7:
        print('Дано число A. Вычислить A^15, используя две вспомогательные переменные и пять операций умножения.')
        a=float(input("a = "))
        b=a*a
        print("в квадрате =",b)
        c=b*a
        print("в кубе =",c)
        b=b*c
        print("в 5 степени =",b)
        c=b*b
        print("в 10 степени =",c)
        b=b*c
        print("в 15 степени =",b)
        print('введите номер задания')
        x = int(input())

