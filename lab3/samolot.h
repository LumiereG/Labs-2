#pragma once
#include <iostream>
class Lotnisko;

class Samolot
{
private:
	static int starty;
	static int liczba_samolotow_w_powietrzu;
	static int max_id;

	const int id;

	int liczba_startow;
	int liczba_pasazerow;
	static const int MAX_LICZBA_PASAZEROW = 150;

	const char* port_docelowy;

public:
	enum class status_samolotu { GOTOWY, ODLECIAL, WYLADOWAL, PO_NAPRAWIE } status;
	static const int MAX_LICZBA_STARTOW = 100;

public:
	Samolot();

	int start();
	void laduj();
	void przygotuj_do_startu(int wysiada, int wsiada, const char* port);

	int pobierz_starty() const;

	static int pobierz_liczba_w_powietrzu(); //metoda static

	friend std::ostream& operator<<(std::ostream& out, Samolot& a);

	friend class Lotnisko;
};