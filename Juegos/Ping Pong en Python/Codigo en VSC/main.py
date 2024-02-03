import turtle

#	Ventana
wn = turtle.Screen()
wn.title("Ping Pong por Ema")
wn.bgcolor("black")
wn.setup(width = 800, height = 600)
wn.tracer(0)

#	Marcador
MarcadorA = 0
MarcadorB = 0

#	JugadorA
JugadorA = turtle.Turtle()
JugadorA.speed(0)
JugadorA.shape("square")
JugadorA.color("white")
JugadorA.penup()
JugadorA.goto(-350,0)
JugadorA.shapesize(stretch_wid = 5, stretch_len = 1)

#	JugadorB
JugadorB = turtle.Turtle()
JugadorB.speed(0)
JugadorB.shape("square")
JugadorB.color("white")
JugadorB.penup()
JugadorB.goto(350,0)
JugadorB.shapesize(stretch_wid = 5, stretch_len = 1)

#	Pelota
Pelota = turtle.Turtle()
Pelota.speed(0)
Pelota.shape("square")
Pelota.color("white")
Pelota.penup()
Pelota.goto(0,0)
Pelota.dx = 1
Pelota.dy = 1

#	Divicion
Divicion = turtle.Turtle()
Divicion.color("white")
Divicion.goto(0,400)
Divicion.goto(0,-400)

#   Pen
Pen = turtle.Turtle()
Pen.speed(0)
Pen.color("red")
Pen.penup()
Pen.hideturtle()
Pen.goto(0,260)
Pen.write("Jugador A: 0      Jugador B: 0",align="center", font=("Courier", 24, "normal"))

#   Funciones
def JugadorA_up():
    y = JugadorA.ycor()
    y+=20
    JugadorA.sety(y)
def JugadorA_down():
    y = JugadorA.ycor()
    y-=20
    JugadorA.sety(y)
def JugadorB_up():
    y = JugadorB.ycor()
    y+=20
    JugadorB.sety(y)
def JugadorB_down():
    y = JugadorB.ycor()
    y-=20
    JugadorB.sety(y)

#   Movimeineto con el Teclado
wn.listen()
wn.onkeypress(JugadorA_up, "w")
wn.onkeypress(JugadorA_down, "s")
wn.onkeypress(JugadorB_up, "Up")
wn.onkeypress(JugadorB_down, "Down")

Juego=True
while Juego:
    wn.update()

    Pelota.setx(Pelota.xcor() + Pelota.dx)
    Pelota.sety(Pelota.ycor() + Pelota.dy)

    #   Boredes Arriba/Abajo
    if Pelota.ycor() > 290:
        Pelota.dy *= -1
    if Pelota.ycor() < -290:
        Pelota.dy *= -1

    #   Boredes Derecha/Izquierda
    if Pelota.xcor() > 390:
        Pelota.goto(0,0)
        Pelota.dx *= -1
        MarcadorA += 1
        Pen.clear()
        Pen.write("Jugador A: {}      Jugador B: {}".format(MarcadorA,MarcadorB), align="center", font=("Courier", 24, "normal"))
    if Pelota.xcor() < -390:
        Pelota.goto(0,0)
        Pelota.dx *= -1
        MarcadorB += 1
        Pen.clear()
        Pen.write("Jugador A: {}      Jugador B: {}".format(MarcadorA,MarcadorB), align="center", font=("Courier", 24, "normal"))

    if((Pelota.xcor()>340 and Pelota.xcor()<350)
	    	and (Pelota.ycor()<JugadorB.ycor() + 50
	    	and Pelota.ycor()> JugadorB.ycor() - 50)):
        Pelota.dx *= -1
    if ((Pelota.xcor() < -340 and Pelota.xcor() > -350)
            and (Pelota.ycor() < JugadorA.ycor() + 50
            and Pelota.ycor() > JugadorA.ycor() - 50)):
        Pelota.dx *= -1