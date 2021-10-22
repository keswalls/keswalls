print('введите номер задания')
x = int(input())
while x <= 5 and x > 0:
    if x == 1:
        print('Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2).')
        import math
        x1 = int(input("x1 = "))
        y1 = int(input("y1 = "))
        x2 = int(input("x2 = "))
        y2 = int(input("y2 = "))
        d = math.sqrt( ((x1-x2)**2)+((y1-y2)**2) )
        print('Расстояние -',d)
        print('введите номер задания')
        x = int(input())

    if x == 2:
        print('Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.')
        import math
        A = int(input("A = "))
        B = int(input("B = "))
        C = int(input("C = "))
        AC = abs(C-A)
        print('AC -',AC)
        BC = abs(C-B)
        print('BC -',BC)
        print('Сумма -', AC+BC)
        print('введите номер задания')
        x = int(input())

    if x == 3:
        print('Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B. Найти произведение длин отрезков AC и BC')
        A = int(input("A = "))
        B = int(input("B = "))
        C = int(input("C = "))
        com = abs(A - C) * abs(B - C)
        print('Произведение -',com)
        print('введите номер задания')
        x = int(input())

    if x == 4:
        print('Даны координаты двух противоположных вершин прямоугольника:(x1, y1), (x2, y2). Стороны прямоугольника параллельны осям координат.Найти периметр и площадь данного прямоугольника.')
        x1=int(input("x1 = "))
        y1=int(input("y1 = "))
        x2=int(input("x2 = "))
        y2=int(input("y2 = "))
        print("P =",2*(abs(x1-x2)+abs(y1-y2)))
        print("S =",abs(x1-x2)*abs(y1-y2))
        print('введите номер задания')
        x = int(input())

    if  x == 5:
        print('Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь.')
        import math
        x1 = int(input("x1 = "))
        y1 = int(input("y1 = "))
        x2 = int(input("x2 = "))
        y2 = int(input("y2 = "))
        x3 = int(input("x3 = "))
        y3 = int(input("y3 = "))
        a = math.sqrt((x1-x2)**2 + (y1+y2)**2)
        b = math.sqrt((x2-x3)**2 + (y2+y3)**2)
        c = math.sqrt((x1-x3)**2 + (y1+y3)**2)
        P = (a+b+c) / 2
        S = math.sqrt(P*(P-a)*(P-b)*(P-c))
        print ('Периметр треугольника = ',P)
        print ('Площадь треугольника = ',S)
        print('введите номер задания')
        x = int(input())






