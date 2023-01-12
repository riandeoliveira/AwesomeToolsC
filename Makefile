TARGET=main.c
EXE_FILE=awesome-tools-c.exe

main.o: */$(TARGET)
	gcc -o $(EXE_FILE) */$(TARGET)
	sleep 0
	./$(EXE_FILE)
