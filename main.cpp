#include <iostream>
using namespace std;
double z (int a, int b){
double c=1;
for(int x=1;x<=b;x++){
    c=c*a;
}
return c;
}
double fac (double a){
    double b=1;
    for(int x=1;x<=a;x++)
        b = b * x;

    return b;
}
double sumaserie (double x){
    double suma=0;
    suma= x - (z(x,3)/fac(3))
            + (z(x,5)/fac(5))
            - (z(x,7)/fac(7));
return suma;
}
string saludos (string nombre, int edad)
{
    string mensaje="Bienvenido "+ nombre;
    if (edad>=18){
        mensaje= mensaje + ", usted es mayor de edad";
    }else{
        mensaje= mensaje + ", Usted es menor de edad";
    }
    return mensaje;
}
string signo(string nombre, int dia, int mes) {
    string mensaje;
    string mensajee="Bienvenido "+ nombre +" su signo es:";
    if (mes >= 6) {
        if (mes == 6) {
            if(dia>=22){
                mensaje="Cancer";
            }else{
                if(dia<=21){
                    mensaje="Geminis";
                }
            }
        }else{
            if (mes==7){
                if(dia<=22){
                    mensaje="Cancer";
                }else{
                    if(dia>=23){
                        mensaje="Leo";
                    }
                }
            }else{
                if(mes==8){
                    if(dia<=23){
                        mensaje="Leo";
                    }else{
                        if(dia>=24){
                            mensaje="Virgo";
                        }
                    }
                }else{
                    if(mes==9){
                        if(dia>=24){
                            mensaje="Libra";
                        }else{
                            if(dia<=23){
                                mensaje="Virgo";
                            }
                        }
                    }else{
                        if(mes==10){
                            if(dia>=24){
                                mensaje="Escorpio";
                            }else{
                                if(dia<=23){
                                    mensaje="Libra";
                                }
                            }
                        }else{
                            if(mes==11){
                                if(dia>=23){
                                    mensaje="Sagitario";
                                }else{
                                    if(dia<=22){
                                        mensaje="Escorpio";
                                    }
                                }
                            }else{
                                if(mes==12){
                                    if(dia>=22){
                                        mensaje="Capricornio";
                                    }else{
                                        if(dia<=21){
                                            mensaje="Sagitario";
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }else{
        if(mes==5){
            if(dia>=22){
                mensaje="Geminis";
            }else{
                if(dia<=21){
                    mensaje="Tauro";
                }
            }
        }else{
            if(mes==4){
                if(dia>=21){
                    mensaje="Tauro";
                }else{
                    if(dia<=20){
                        mensaje="Aries";
                    }
                }
            }else{
                if(mes==3){
                    if(dia>=21){
                        mensaje="Aries";
                    }else{
                        if(dia<=20){
                            mensaje="Piscis";
                        }
                    }
                }else{
                    if(mes==2){
                        if(dia>=19){
                            mensaje="Piscis";
                        }else{
                            if(dia<=18){
                                mensaje="Acuario";
                            }
                        }
                    }else{
                        if(mes==1){
                            if(dia>=21){
                                mensaje="Acuario";
                            }else{
                                if(dia<=20){
                                    mensaje="Capricornio";
                                }
                            }
                        }
                    }
                }
            }
        }
    }
mensajee=mensajee+mensaje;
return mensajee;
}
int main() {
int a,b; string c,d;
cout<<"ingrese la base, y el exponente, en ese orden"<<endl;
cin>>a;
cout<<endl;
cin>>b;
cout<<"resultado: "<<z(a,b)<<endl;
cout<<"ingrese factorial"<<endl;
cin>>a;
cout<<endl<<"resultado: "<<fac(a)<<endl;
cout<<"ingrese el valor para realizar la operacion"<<endl;
cin>>a;
cout<<endl<<"resultado: "<<sumaserie(a)<<endl;
cout<<"ingrese su nombre"<<endl;
    cin.ignore();
    getline(cin,c);
cout<<"ingrese su edad"<<endl;
cin>>a;
cout<<endl<<saludos(c,a)<<endl;
cout<<"ingrese su nombre"<<endl;
    cin.ignore();
    getline(cin,d);
cout<<"ingrese su dia de nacimiento"<<endl;
cin>>a;
cout<<"ingrese su mes de nacimiento"<<endl;
cin>>b;
cout<<"signo:  "<<signo(d,a,b);
}
