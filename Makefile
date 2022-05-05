#TargetName : Dependencies
#<TAB>commands

Build : project_main.c name_ascii.c
	gcc project_main.c name_ascii.c -o name_ascii.out -lm

Run : Build
	./name_ascii.out

clean:
	rm -rf *.o *.out *.i *.s
