#CODIGO DE PACHECO LORENZO

def mail(correo):
    i = 1
    while i:
        if "@" in correo:
            print("correo verificado")
            persona["correo"]=correo
            i=0
        else:
            print("correo invalido")
            correo = input("ingreselo nuevamente: ")
            
def alturaProm(a):
    a = 1.746 - float(persona["altura"])
    return a
    
def imprimir(a):
    print(persona)
    if a > 0:
        print("tenes que crecer ", a, "cm para alcanczar el promedio")
    if a < 0:
        print("estas ", a, "cm arriba del promedio")    

persona = {"correo": "", "edad": "", "altura": ""}

for cosa_de_persona in persona:
    persona[cosa_de_persona] = input(f"ingrese su {cosa_de_persona}: ")
    if cosa_de_persona == "correo":
        mail(persona["correo"])

a = alturaProm(persona)

imprimir(a)

