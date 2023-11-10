#include <iostream>
#include <string>

using namespace std;
void pasirink(int& pasirinkimas);
void pirmas();
void antras();
void trecias();


int main() {
    int pasirinkimas = 100;
    while(pasirinkimas != 0) {
        pasirink(pasirinkimas);
        if (pasirinkimas == 1) {
            pirmas();
            pasirinkimas = 100;
        }
        else if (pasirinkimas == 2) {
            antras();
            pasirinkimas = 100;
        }
        else if (pasirinkimas == 3) {
            trecias();
            pasirinkimas = 100;
        }
    }
}





void pasirink(int& pasirinkimas) {
	while (pasirinkimas < 0 || pasirinkimas>3) {
		cout <<endl<< "0 - Uzbaigti programa; "<<endl<<"1 - palindromo patikra;" << endl << "2 - balses patirka;" << endl << "3 - bendro didziausio dalyklio patikra;" << endl;
		cin >> pasirinkimas;
	}
}

void pirmas() {
    cout << endl << "Iveskite sveikaji skaiciu patikrinimui: " << endl;
    int sk;
    cin >> sk;
    while (sk != 0) {
        int n, dg, atv = 0;


        n = sk;

        do
        {
            dg = sk % 10;
            atv = (atv * 10) + dg;
            sk = sk / 10;
        } while (sk != 0);

        if (n == atv) cout <<endl<< "Skaicius yra palindromas." << endl;
        else cout << endl << "Skaicius nera palindromas." << endl;
        cout << endl<<"Iveskite nauja sveikaji skaiciu patikrinimui: " << endl << "0 - baigti darba su palindromais." <<endl;
        cin >> sk;
    }
}

void antras() {
    string r;
    cout << endl << "Iveskite raide patikrinimui: " << endl;
    cin >> r;
    while (r != "0") {
        if (r == "a" || r == "A" || r == "e" || r == "E" || r == "i" || r == "I" || r == "o" || r == "O" || r == "u" || r == "U") cout << endl << r << " yra balse" << endl;
        else cout << endl << r << " nera balse" << endl;
        cout << endl << "Iveskite nauja raide patikrinimui: " << endl<<"0 - baigti darba su balsemis."<<endl;
        cin >> r;
    }
}

void trecias() {
    int  pirmas, antras;
    cout <<endl<< "Iveskite pirma skaiciu: " << endl;
    cin >> pirmas;
    while (pirmas != 0) {
        cout <<endl<< "Iveskite antra skaiciu " << endl;
        cin >> antras;
        int daliklis=0;
        for (int i = 1; i <= pirmas && i <= antras; i++)
        {
            if (pirmas % i == 0 && antras % i == 0)
            {
                daliklis = i;
            }
        }
        cout << endl<<"Didziausias abieju skaiciu daliklis - " << daliklis << endl;
        cout << endl<<"Iveskite nauja pirma skaiciu: " << endl<<"0 - uzbaigti darba su bendru dalikliu."<<endl;
        cin >> pirmas;
    }
}