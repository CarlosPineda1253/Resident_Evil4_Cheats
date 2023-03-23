/*
 * RE4_cheat.h
 *
 *  Created on: Mar 21, 2023
 *      Author: car_1
 */

#ifndef RE4_CHEAT_H_
#define RE4_CHEAT_H_

typedef struct item_struct{
	unsigned short item;
	unsigned short cantidad;
	unsigned short existe;
	unsigned short mejora_arma;
	unsigned short carga;
	unsigned short posicion;
	unsigned short orientacion;
};

#define Bytes_Case 13
#define Number_items 23
#define Memory_money 0x85F708

/*
<Description>"hp"</Description>
<VariableType>2 Bytes</VariableType>
<Address>bio4.exe+85F714</Address>

<Description>"max hp"</Description>
<VariableType>2 Bytes</VariableType>
<Address>bio4.exe+85F716</Address>

<Description>"money"</Description>
<VariableType>4 Bytes</VariableType>
<Address>bio4.exe+85F708</Address>
*/

#endif /* RE4_CHEAT_H_ */
