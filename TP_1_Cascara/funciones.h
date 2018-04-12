#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



#endif // FUNCIONES_H_INCLUDED

/** \brief muestra el menu inicial. Se ejecuta solo para imprimir en pantalla
 *
 * \param no recibe parammetros.
 * \return no tiene retorno.
 */
void menu();

/** \brief toma un numero ingresado por teclado.
 * \param int* variable para almacenar el ingreso.
 * \return retorna -1 error de puntero, 0 ok.
 *
 */
int tomarNumero(int*);

/** \brief suma los numeros recibidos.
 *
 * \param int primer sumando.
 * \param int segundo sumando.
 * \param float* resultado de la suma pasado por referencia.
 * \return int, devuelve -1 error de puntero, 0 ok.
 */
 int suma (int, int, float*);

 /** \brief resta A menos B.
  * \param int minuendo.
  * \param int sustraendo.
  * \param float* resultado de la suma, almacenado por referencia.
  * \return int -1 error de puntero. 0 ok.
  */
  int resta(int, int, float*);

  /** \brief divide A sobre B.
   * \param int dividendo.
   * \param int divisor.
   * \param float* resultado.
   * \return 0 ok, -1 error de puntero, -2 error dividendo = 0.
   */
   int divicion(int, int, float*);

   /** \brief multiplica A x B.
    * \param int multiplicando.
    * \param int multiplicador.
    * \param float* producto.
    * \return 0 ok, -1 error de puntero.
    */
    int multiplicacion(int, int, float*);

    /** \brief calcula el factorial de un numero.
     * \param int numero a calcular su factorial.
     * \param float* resultado total.
     * \return 0 ok, -2 error overflow, -1 error de puntero.
     *
     */
     int factorial(int, float*);

