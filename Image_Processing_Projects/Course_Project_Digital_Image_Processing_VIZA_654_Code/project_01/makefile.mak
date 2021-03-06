# Please see the header information in the supplied ppmview.ccp file for more
# information on this template project. For more information on C programming
# in Linux, please see the excellent introduction to makefile structure and
# the gcc compiler here:
#
# http://www.cs.txstate.edu/labs/tutorials/tut_docs/Linux_Prog_Environment.pdf

CC		= g++
LDFLAGS 	= -framework OpenGL -framework GLUT
PROJECT		= main
FILES		= main.cpp

${PROJECT}:${FILES}
	${CC} ${CFLAGS} -o ${PROJECT} ${FILES} ${LDFLAGS}