# for linea in open("Hola.txt"):
#     print linea

nomArchivo = "Hola.txt"

# archivo = open(nomArchivo)
# algo = len(archivo.readlines())
# print algo

def esVacio(archivo):
    contenido = True
    elfile = open(archivo)
    lineas = len(elfile.readlines())
    #print lineas
    if lineas != 0:
        elfile = open(archivo)
        for line in elfile:
            print line
            if line != "\n":
                contenido = False
    return contenido


print esVacio(nomArchivo)
