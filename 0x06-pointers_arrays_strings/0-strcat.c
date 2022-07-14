#include "main.h"

/**
 * *_strcat - function that concatenate two strings
 * @dest: param1
 * @src: param 2
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i; 
 for (i = 0; dest[i] != '\0'; i++) 
 ; 
  
 do { 
         a++; 
         dest[i] = src[a]; 
         i++; 
 } while (src[a] != '\0'); 
  
 return (dest); 
 }
