CFLAGS = -Wall -Wextra -Werror
CFLAGS += -I./includes
LIBS = 
NAME = 
ODIR = objs
OBJ = o

OBJS = philo.$(OBJ) \
	print_time.$(OBJ) \
	test.$(OBJ)

OBJECTS = $(patsubst %,$(ODIR)/%,$(OBJS))
INSTALL_INC = includes
VPATH = ./srcs

.c.$(OBJ):
	@test -d $(ODIR) || mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c -o $(ODIR)/$@ $< $(LIBS)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) -o $(ODIR)/$(NAME) $(OBJECTS) $(LIBS)

.PHONY: install
install:
	@test -d $(INSTALL_INC) || mkdir -p $(INSTALL_INC)
	cp -r ./includes/*.h $(INSTALL_INC)/

.PHONY: clean
clean:
	$(RM) $(ODIR)/$(NAME) $(OBJECTS)
