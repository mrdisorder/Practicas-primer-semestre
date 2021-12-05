// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


    int main()
    {
        bool respuesta;

        cout << "Bienvenidx al Adivina Quien de My Little Pony.\n Selecciona un personaje de la siguiente lista y el programa intentara adivinarlo." << endl;
        cout << "Ponies:\nApplejack.\nRarity.\nPinkie Pie.\nRainbow Dash.\nFluttershy.\nTwilight Sparkle.\nApplebloom.\nGranny Smith.\nBig Mac.\nScotaloo.\nShining Armor.\nSweetie Belle.\nPrincesa Luna.\nPrincesa Celestia.\nPrincesa Cadence.\n" << endl;
        cout << "Otros:\nZecora.\nDisocrd.\nSpike.\nAngel.\nWinona.\nOwlowiscious.\nGummy.\n" << endl;
        cout << "Ingresa 1 cuando estes listx para continuar.\n";
        cin >> respuesta;

        if (respuesta == 1)

        {
            cout << "¿Tu personaje es un pony?\n";
            cout << "1=Si\n0=No\n";
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "¿Tu personaje tiene Cutie Mark?\n";
                cout << "1=Si\n0=No\n";
                cin >> respuesta;

                if (respuesta == 1)

                {
                    cout << "¿Tu personaje es parte de la realeza?\n";
                    cout << "1=Si\n0=No\n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "¿Tu personaje es princesa?\n";
                        cout << "1=Si\n0=No\n";
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "¿Tu personaje controla la luna?\n";
                            cout << "1=Si\n0=No\n";
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Tu personaje es...PRINCESA LUNA!" << endl;
                                return 0;
                            }

                            else
                            {
                                cout << "¿Tu personaje controla el sol?\n";
                                cout << "1=Si\n0=No\n";
                                cin >> respuesta;

                                if (respuesta == 1)
                                {
                                    cout << "Tu personaje es...PRINCESA CELESTIA!" << endl;
                                    return 0;
                                }

                                else
                                {
                                    cout << "¿Tu personaje es muy estudiosa?\n";
                                    cout << "1=Si\n0=No\n";
                                    cin >> respuesta;

                                    if (respuesta == 1)
                                    {
                                        cout << "Tu personaje es...TWILIGHT SPARKLE!" << endl;
                                        return 0;
                                    }

                                    else
                                    {
                                        cout << "Tu personaje es...PRINCESA CADENCE!" << endl;
                                        return 0;
                                    }
                                }
                            }
                        }
                        else
                        {
                            cout << "Tu personaje es...SHINING ARMOR!" << endl;
                            return 0;
                        }
                    }
                }

                else
                {

                    cout << "¿Tu personaje es parte de la familia Apple?\n";
                    cout << "1=Si\n0=No\n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "¿Tu personaje es joven?\n";
                        cout << "1=Si\n0=No\n";
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "¿Tu personaje usa sombrero?\n";
                            cout << "1=Si\n0=No\n";
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Tu personaje es...APPLEJACK!" << endl;
                                return 0;
                            }

                            else
                            {
                                cout << "Tu personaje es...BIG MAC!" << endl;
                                return 0;
                            }
                        }

                        else
                        {
                            cout << "Tu personaje es...GRANNY SMITH!" << endl;
                            return 0;
                        }
                    }

                    else
                    {
                        cout << "¿Tu personaje es un pegaso?\n";
                        cout << "1=Si\n0=No\n";
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "¿Tu personaje ama los animales?\n";
                            cout << "1=Si\n0=No\n";
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Tu personaje es...FLUTTERSHY!" << endl;
                                return 0;
                            }

                            else
                            {
                                cout << "Tu personaje es...RAINBOWDASH!" << endl;
                                return 0;
                            }
                        }

                        else
                        {
                            cout << "Tu personaje es...RARITY!" << endl;
                            return 0;
                        }
                    }
                }
            }

            else
            {
                cout << "¿Tu personaje es un pegaso?\n";
                cout << "1=Si\n0=No\n";
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es...SCOOTALOO!" << endl;
                    return 0;
                }

                else
                {
                    cout << "¿Tu personaje es un unicornio?\n";
                    cout << "1=Si\n0=No\n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es...SWEETIE BELLE!" << endl;
                        return 0;
                    }

                    else
                    {
                        cout << "Tu personaje es...APPLEBLOOM!" << endl;
                        return 0;
                    }
                }
            }


            cout << "¿Tu personaje es una mascota?\n";
            cout << "1=Si\n0=No\n";
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "¿Tu personaje es un perro?\n";
                cout << "1=Si\n0=No\n";
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es...WINONA!" << endl;
                    return 0;
                }

                else
                {
                    cout << "¿Tu personaje es un buho?\n";
                    cout << "1=Si\n0=No\n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es...OWLOWISCIOUS!" << endl;
                        return 0;
                    }

                    else
                    {
                        cout << "¿Tu personaje es un conejo?\n";
                        cout << "1=Si\n0=No\n";
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personaje es...ANGEL!" << endl;
                            return 0;
                        }

                        else
                        {
                            cout << "Tu personaje es...GUMMY!" << endl;
                            return 0;
                        }
                    }
                }
            }

            else
            {
                cout << "¿Tu personaje es una cebra?\n";
                cout << "1=Si\n0=No\n";
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es...ZECORA!" << endl;
                    return 0;
                }

                else
                {
                    cout << "¿Tu personaje es un dragon?\n";
                    cout << "1=Si\n0=No\n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es...SPIKE!" << endl;
                        return 0;
                    }
                    else
                    {
                        cout << "Tu personaje es...DISCORD!" << endl;
                        return 0;
                    }
                }
            }
        }
    }
