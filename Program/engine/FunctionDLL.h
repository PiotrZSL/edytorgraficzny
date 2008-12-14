#include <System.hpp>
#include <vector>
#include <exception>
#include <IniFiles.hpp>
using namespace std;

#ifndef __FunctionDLL_h__
#define __FunctionDLL_h__

#include "Block.h"

typedef int ( *FunctionDLL_run )(Block*);
typedef bool ( *FunctionDLL_showConfig )(TComponent*, Block*);
typedef int ( *FunctionDLL_validate )(Block*);
/**
 * FunctionDLL - Klasa ladujaca DLL bloczka, uruchamiająca funkcje i zwalniająca go
 * @author Piotr
 * @date 2008.11.26
 * @version 0.1
 */
class FunctionDLL
{
	private:
		HANDLE DLLHandle;
		FunctionDLL_run frun;
		FunctionDLL_validate fvalidate;
		FunctionDLL_showConfig fshowConfig;
	public:
		AnsiString name;//id of block - name of file if in inifile no info about this
		AnsiString fullName; //name visible in menu
		AnsiString description; //hint visible in menu, or abowe block
		Graphics::TBitmap *picture;
		vector<AnsiString> category; //format: Menu Name/Sub Menu/Next Sub Menu

		FunctionDLL(const AnsiString &fileDLL);
		~FunctionDLL();

		/**
		 * Uruchamia funkcje bloczka.
		 * @param aBlock wskaznik do bloczka reprezentujacego funkjce.
		 * @return poprawnosc wykonanej operacji
		 */
		int run(Block *aBlock);
		/**
		 * Wyswietla w oknie parametry przesylane do bloku
		 * @param owner wskaznik do okienka
		 * @param aBlock wskaznik do bloczka reprezentujacego funkjce.
		 * @return poprawnosc wykonanej operacji
		 */
		bool showConfig(TComponent *owner, Block *aBlock);
		/**
		 * Sprawdza poprawnosc konfiguracji bloczku
		 * @param aBlock wskaznik do bloczka reprezentujacego funkjce.
		 * @return poprawnosc wykonanej operacji
		 */
		int validate(Block *aBlock);
};

#endif
