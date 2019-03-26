#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre: 
a) a área do triângulo retângulo que tem A por base e C por altura. 
b) a área do círculo de raio C. (pi = 3.14159) 
c) a área do trapézio que tem A e B por bases e C por altura. 
d) a área do quadrado que tem lado B. 
e) a área do retângulo que tem lados A e B. */
float triangulo(float a,float c);
float circulo(float c);
float trapezio(float a,float b, float c);
float quadrado(float b);
float retangulo(float a, float b);

int main(){
	float a,b,c;
	float p1=0,p2=0,p3=0,p4=0,p5=0;
	printf("Digite a: ");
	scanf("%f",&a);
	printf("Digite b: ");
	scanf("%f",&b);
	printf("Digite c: ");
	scanf("%f",&c);
	
	p1=triangulo(a,c);
	p2=circulo(c);
	p3=trapezio(a,b,c);
	p4=quadrado(b);
	p5=retangulo(a,b);
	printf("Area triangulo = %.2f\nArea circulo = %.2f\nArea trapezio = %.2f\nArea quadrado = %.2f\nArea retangulo = %.2f",p1,p2,p3,p4,p5);
}

float triangulo(float a,float c){
	float area=0;
	area = (a * c/2);
	return area;
}
float circulo(float c){
	float area=0,pi=3.14159;
	area = pi * c*c;
	return area;
	
}
float trapezio(float a,float b, float c){
	float area=0;
	area = ((a+b)*c)/2;
	return area;
}
float quadrado(float b){
	float area;
	area = b * b;
	return area;
}
float retangulo(float a, float b){
	float area;
	area = a *b;
	return area;
}











