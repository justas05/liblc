SRC_DIR=src
OBJ_DIR=obj
SRCS=$(shell find ${SRC_DIR} -name *.c)
OBJS=${patsubst ${SRC_DIR}/%,${OBJ_DIR}/%,${SRCS:.c=.o}}
CFLAGS=-Wall -Wextra -Werror -I inc/
CC=cc
AR=ar
AR_OPTS=-rc
RM=rm
RM_OPTS=-rf
MKDIR=mkdir -p
LIB_NAME=libft.a

.PHONY: objects lib so re clean fclean dclean

objects: ${OBJS}

${OBJS}: ${SRCS}
	${MKDIR} ${@D}
	${CC} ${CFLAGS} -c -o $@ ${patsubst ${OBJ_DIR}/%,${SRC_DIR}/%,${@:.o=.c}}

lib: ${OBJS}
	${AR} ${AR_OPTS} ${LIB_NAME} ${OBJS}

so: $(OBJS)
	${CC} -shared -o ${LIB_NAME:.a=.so} ${OBJS}

re: fclean lib

clean:
	${RM} ${RM_OPTS} ${OBJS}

fclean: clean
	${RM} ${RM_OPTS} ${LIB_NAME}

dclean: fclean
	${RM} ${RM_OPTS} ${OBJ_DIR}
