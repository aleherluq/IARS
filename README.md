# Proyecto IARS

_Pasos fundamentales_

## DOCKER

### Paso 1. Instalar docker y descargar imaagen de riot

Se instala docker a través de la plataforma https://docs.docker.com/docker-for-windows/install/

La imagen de riot se descarga de dockerHub, la documentación se encuentra en el siguiente enlace:
https://hub.docker.com/r/riot/riotbuild

La sentencia para descargar la imagen de riot es la siguiente:
```
docker pull riot/riotbuild
```

### Paso 2. Crear contenedor con carpeta conjunta.

una vez descargado la imagen se crea un contenedor con la anterior imagen.

La sentencia utilizada es la siguiente:

```
docker run -ti --rm --name ritop1 -v $PWD/riotospruebas:/doc riot/riotbuild
```
