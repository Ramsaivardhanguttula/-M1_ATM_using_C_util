
PROJ_NAME = ATM
SRC= main.c\
ATM.c\

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	   EXEC = out
   endif
endif

TEST_SRC=  Test_ATM.c\
ATM.c\
unity.c\

INC=ATM.h\

Build : $(SRC) #remember to use this in .github/workflow
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))


build_test : 
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) 

run_test : build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

   
static_analysis:
	cppcheck --enable=all $(SRC)

dynamic_analysis: Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	gcov -a $(call FixPath,$(PROJ_NAME).$(EXEC))


clean:
	$(RM) $(call FixPath,*.out)




