using namespace std;

void arcoCoseno(double);
void Coseno(double);

main()
{
   char opcion;
   double numero;

   cout << "Ingrese un numero: ";
   cin >> numero;

   cout << "\n\nElija la operacion que desea realizar con el numero que ingreso: \n a) Seno \n b) Coseno \n c )Tangente \n d )Arco seno \n e) Arco coseno \n f) Arco Tangente \n\n";
   cin >> opcion;

   switch(opcion)
   {
         case 'a':
            break;
         case 'b': Coseno(numero);
            break;
         case 'c':
            break;
         case 'd':
            break;
         case 'e': arcoCoseno(numero);
            break;
         case 'f':
            break;

         default:
            cout << "Elija una opcion correcta";
   }

}

void Coseno( double numero )
{
   double resultado = cos(numero);
   cout << "\n" << resultado;
}
void arcoCoseno( double numero )
{
   double resultado =  acos(numero);
   cout << "\n" << resultado;
}
