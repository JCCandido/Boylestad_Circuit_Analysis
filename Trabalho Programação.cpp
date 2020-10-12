#include <iostream>
#include <time.h>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){	double r1, r2, r3, s1, s2; int cont = 0, contm = 0; float Im1, Im2, deta, detx, dety; char opt; srand(time(NULL));
    cout << "_______________________________________________________________________________ \n"; 
    cout << "Este programa calcula as intensidades das correntes I1 e I2 em um sistema como \n"; cout << "mostrado no desenho. \n"; cout << " " << endl;
    cout << "S = Source. " << setw(35) << " " << " _____________ " << "\n"; 
	cout << "R = Resistor. " << setw(33) << " " << "|      |      |" << "\n"; 
	cout << "M1 = Malha 1. " << setw(33) << " -" << "|  ->  |  ->  |-" << "\n"; 
	cout << "M2 = Malha 2. " << setw(33) << " " <<	"R1 I1  |  I2  R2" << "\n";
	cout << "I1 = Corrente na malha 1. " << setw(21) <<" +"<< "|      |      |+" << "\n";  
	cout << "I2 = Corrente na malha 2. " << setw(21) << " " << "|      |      |" << "\n";
	cout << setw(47) << " +" << "|     +|-     |+" << "\n";  
	cout << "O que voc"<< char(136) << " gostaria de fazer? " << setw(17) << " " << "S1     R3     S2" << "\n";
	cout << setw(47) << " -" << "|     -|+     |-" << "\n"; 
	cout <<	"1 - Calcular com valores aleat" <<char(162)<< "rios. " << setw(10) << " " << "|      |      |" << "\n";
	cout <<	"2 - Escolher os valores. " << setw(22) << " " << "|  M1  |  M2  |" << "\n";
	cout << setw(47) << " " << "|      |      |" << "\n"; 
	cout <<	"0 - Sair. " << setw(37) << " " << "|______|______|" << "\n";
	cout <<	setw(52) << " " << "__|__" << "\n";
	cout << setw(54) << " " << "_ \n" << endl; cin >> opt;
 	do{ if(opt == '1'){	cont++;
	s1 = rand() % 5; if(s1==0){ do{ s1 = rand() % 5; }while(s1==0);} 
	s2 = rand() % 5; if(s2==0){ do{ s2 = rand() % 5; }while(s2==0);}
	r1 = rand() % 10; if(r1==0){ do{ r1 = rand() % 10; }while(r1==0);}
	r2 = rand() % 10; if(r2==0){ do{ r2 = rand() % 10; }while(r2==0);}
	r3 = rand() % 10; if(r3==0){ do{ r3 = rand() % 10; }while(r3==0);}
	cout << "================================== Entrada autom"<<char(160)<<"tica "<<cont<<" =======================" << endl;
	cout << "S1 = " << setw(3)<< s1 << setw(2) <<" volts.\n"; 
	cout << "S2 = " << setw(3)<< s2 << setw(2) <<" volts.\n";
	cout << "R1 = " << setw(3)<< r1 << setw(4) <<" ohms.\n"; 
	cout << "R2 = " << setw(3)<< r2 << setw(4) <<" ohms.\n"; 
	cout << "R3 = " << setw(3)<< r3 << setw(4) <<" ohms.\n" <<endl; 
	if ((r1+r3) *(r2+r3) - (r2 * r2) == 0){ //Essa condição precisa ser revisada. Se estiver correta Ok.
	cout << "O sistema não tem solução. \n" << endl; 
	cout << "1 - Calcular novamente com valores aleat"<<char(162)<<"rios." << "\n";
	cout << "2 - Escolher os valores. \n"; cout << "\n"; 
	cout << "0 - Sair. "; cin >> opt; cout << "\n" <<endl; }
	else{deta = ((r1+r3)*(r2+r3))-(r3*r3); detx = (-(r2+r3)*(-s1))-(r3*s2); dety = ((r1+r3)*s2*-1)-(s1*r3*-1); Im1 = detx/deta; Im2 = dety/deta;
	cout << fixed << setprecision(2);
	cout << "O valores das correntes em cada malha s"<<char(131)<<"o: \n"<<endl; 
	cout << "I1 = " << setw(5) << Im1 << " amp" <<char(138)<< "r(es) "<<char(17)<<char(16)<<" Corrente na malha 1.\n"; 
	cout << "I2 = " << setw(5) << Im2 << " amp" <<char(138)<< "r(es) "<<char(17)<<char(16)<<" Corrente na malha 2.\n" <<endl;
	cout << "O valor da corrente total "<<char(130)<<": \n" <<endl;
	cout << "It = " <<setw(5)<<abs(Im1)+abs(Im2)<<" amper(es). \n" <<endl; 
	cout << "================================================================================" << endl;
	cout << "1 - Calcular novamente com valores aleat" <<char(162)<<"rios." << "\n";
	cout << "2 - Escolher os valores. \n"; cout << "\n"; 
	cout << "0 - Sair. "; cin >> opt; cout << "\n"; }}
	if(opt == '2'){ contm++; cout << "========================= Entrada manual " << contm <<" =================================== " << endl;
	cout << "Informe o valor da fonte S1: "; cin >> s1; cout << "Informe o valor da fonte S2: "; cin >> s2; 
	cout << "Informe o valor do resistor R1: "; cin >> r1; cout << "Informe o valor do resistor R2: "; cin >> r2; cout << "Informe o valor do resistor R3: "; cin >> r3;
	if ((r1+r3) * (r2+r3) - (r2 * r2) == 0){ cout << "\n";
	cout << "O sistema n"<<char(131)<<"o tem solu"<<char(135)<<char(131)<< "o. \n" << endl; 
	cout << "1 - Calcular com valores aleat"<<char(162)<<"rios." << "\n";
	cout << "2 - Escolher novamente os valores. \n"; cout << "\n"; 
	cout << "0 - Sair. "<<char(26); cin >> opt; }
	else{deta = ((r1+r3)*(r2+r3))-(r3*r3); detx = (-(r2+r3)*(-s1))-(r3*s2); dety = ((r1+r3)*s2*-1)-(s1*r3*-1); Im1 = detx/deta; Im2 = dety/deta; cout << "\n"; // Resolução pelo método de Cramer.
	cout << "O valor das correntes I1 e I2 " <<char(130)<< ": \n" << endl;
	cout << fixed << setprecision(2);
	cout << "I1 = " << setw(5) << Im1 << " amper(es) --> Corrente na malha 1.\n";
	cout << "I2 = " << setw(5) << Im2 << " amper(es) --> Corrente na malha 2.\n" << endl;
	cout << "O valor da corrente total "<<char(130)<<": \n";
	cout << "It = " << setw(5)<< abs(Im1)+abs(Im2)<< " amper(es). \n" <<endl;
	cout << "================================================================================" << endl;
	cout << "1 - Calcular com valores aleat"<<char(162)<<"rios." << "\n";
	cout << "2 - Escolher novamente os valores. \n"; cout << "\n"; 
	cout << "0 - Sair. "; cin >> opt; cout << "\n";}}
}while(opt!='0');
cout << "N"<<char(248)<<". de entradas Autom"<<char(160)<<"ticas --> "<<cont<<" vez(es).\n";
cout <<"N"<<char(248)<<". de entradas Manuais "<<setw(4)<<" "<<"--> "<<setw(2)<<contm<<" vez(es)."; 

return 0;}



