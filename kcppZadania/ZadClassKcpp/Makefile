# Zadanie 7.1
# Makefile do kompilacji programu z zadania 6.1
# Uzycie:
#   make         - kompiluje caly program
#   make clean   - usuwa pliki wynikowe
#   make run     - kompiluje i uruchamia program

CXX = g++
CXXFLAGS = -Wall -I include
TARGET = ZadKcpp.out

# Pliki zrodlowe
SRC_DIR = src
SOURCES = main.cc \
          $(SRC_DIR)/ZadKcpp.cc \
          $(SRC_DIR)/Zad1_ClassExample.cc \
          $(SRC_DIR)/Zad2_Zwracanie.cc \
          $(SRC_DIR)/Zad2_PrzeciazaniePole.cc \
          $(SRC_DIR)/Zad3_Zamiana.cc \
          $(SRC_DIR)/Zad3_Suma.cc \
          $(SRC_DIR)/Zad4_Temperatura.cc \
          $(SRC_DIR)/Zad4_Parzysta.cc \
          $(SRC_DIR)/Zad4_Petle.cc \
          $(SRC_DIR)/Zad5_Klasa.cc \
          $(SRC_DIR)/Zad5_MetodyAbstrakcyjne.cc

# Pliki obiektowe
OBJ_DIR = obj
OBJECTS = $(OBJ_DIR)/main.o \
          $(OBJ_DIR)/ZadKcpp.o \
          $(OBJ_DIR)/Zad1_ClassExample.o \
          $(OBJ_DIR)/Zad2_Zwracanie.o \
          $(OBJ_DIR)/Zad2_PrzeciazaniePole.o \
          $(OBJ_DIR)/Zad3_Zamiana.o \
          $(OBJ_DIR)/Zad3_Suma.o \
          $(OBJ_DIR)/Zad4_Temperatura.o \
          $(OBJ_DIR)/Zad4_Parzysta.o \
          $(OBJ_DIR)/Zad4_Petle.o \
          $(OBJ_DIR)/Zad5_Klasa.o \
          $(OBJ_DIR)/Zad5_MetodyAbstrakcyjne.o

# Regula glowna - linkowanie
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)
	@echo "Kompilacja zakonczona: $(TARGET)"

# Kompilacja main.cc
$(OBJ_DIR)/main.o: main.cc
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c main.cc -o $(OBJ_DIR)/main.o

# Kompilacja plikow zrodlowych z katalogu src
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Uruchomienie programu
run: $(TARGET)
	./$(TARGET)

# Czyszczenie
clean:
	rm -rf $(OBJ_DIR) $(TARGET)
	@echo "Wyczyszczono pliki wynikowe."

# Oznaczenie celow ktore nie sa plikami
.PHONY: run clean
