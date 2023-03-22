###**¿Porque es conveniente incluir el archivo gitignore en nuestro proyecto?**

Es conveniente incluir el archivo gitignore en nuestro poryecto porque de ese modo le podremos indicar a git que archivos ignorar en caso de no querer subir, o en caso de que no sea nesesario subir, todos los archivos... 

###**¿Cuándo se debe hacer?**
Para crear un archivo .gitignore local, crea un archivo de texto y asígnale el nombre ".gitignore". Luego, edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.

  Las entradas de este archivo también pueden seguir un patrón coincidente:

    * se utiliza como una coincidencia comodín.
    / se usa para ignorar las rutas relativas al archivo .gitignore.
    # es usado para agregar comentarios



**Configuracion de mi archivo gitignore:**
(Verlo sin el formato de markdown)


# Created by https://www.toptal.com/developers/gitignore/api/c,visualstudiocode
# Edit at https://www.toptal.com/developers/gitignore?templates=c,visualstudiocode

### C ###
# Prerequisites
*.d

# Object files
*.o
*.ko
*.obj
*.elf

# Linker output
*.ilk
*.map
*.exp

# Precompiled Headers
*.gch
*.pch

# Libraries
*.lib
*.a
*.la
*.lo

# Shared objects (inc. Windows DLLs)
*.dll
*.so
*.so.*
*.dylib

# Executables
*.exe
*.out
*.app
*.i*86
*.x86_64
*.hex

# Debug files
*.dSYM/
*.su
*.idb
*.pdb

# Kernel Module Compile Results
*.mod*
*.cmd
.tmp_versions/
modules.order
Module.symvers
Mkfile.old
dkms.conf

### VisualStudioCode ###
.vscode/*
!.vscode/settings.json
!.vscode/tasks.json
!.vscode/launch.json
!.vscode/extensions.json
!.vscode/*.code-snippets

# Local History for Visual Studio Code
.history/

# Built Visual Studio Code Extensions
*.vsix

### VisualStudioCode Patch ###
# Ignore all local history of files
.history
.ionide

# Support for Project snippet scope

# End of https://www.toptal.com/developers/gitignore/api/c,visualstudiocode 




##Incluya en su repositorio una regla de cómo ignorar un archivo ignorado.txt

*.txt





## Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo readme.md

El hecho de que sean lo mismo se deve a que es el mismo valor ya que al puntero le asigno la direccion de memoria de la variable en medio el programa.

En el punto 4 se obtiene como resultado la direccion de memoria de la variable de tipo puntero. Y no, no es igual a los anteriores, por la simple razon de q no son lo mismo: 1 cosa es la direccion de memoria de la varialbe, y otra lo es lo que guarda la variable en si.
