#ifndef TP_Class_H
#define TP_Class_H
#include <string>
class TP_Class{
private:
    FILE *TP_Integrador;
	
    struct timestamp{
        int day;
        int month;
        int hh;
        int mm;
    };
    struct measurement{
        float temp;
        float hum;
        struct timestamp time;
    };
    struct city{
        struct measurement m;
        int cityId;
        char city_name[50];
        struct city *netx;
    };
    
    struct city *Head_Cordoba=NULL, *Head_Santa_Fe=NULL, *Head_Mendoza=NULL;
    //      Calculo del promedio para provincias
    float Promedio_Cordoba=0, Promedio_Santa_Fe=0, Promedio_Mendoza=0,
           Contador_Cordoba=0, Contador_Santa_Fe=0, Contador_Mendoza=0,
           Temps_Cordoba=0, Temps_Santa_Fe=0, Temps_Mendoza=0;
    //      Calculo del promedio para ciudades
    float Promedio_Ciudades_Cordoba=0, Promedio_Ciudades_Santa_Fe=0, Promedio_Ciudades_Mendoza=0,
            Temps_Ciudades_Cordoba=0, Temps_Ciudades_Santa_Fe=0, Temps_Ciudades_Mendoza=0,
           Contador_Ciudades_Cordoba=0, Contador_Ciudades_Santa_Fe=0, Contador_Ciudades_Mendoza=0;
    //      
public:
    TP_Class();
    void SetStructs();//(LISTO)
    void GetStructs();//(LISTO)
	//		Funciones Basicas Solicitadas
	//		Ema
	void Temps_Prom_Provincia();//(LISTO)
	void Temps_Prom_City();//(LISTO)
	//		Nati
	void Cultivo_Piminetos();//(LISTO)
	void Ciudad_Calida_Provinia();//(LISTO)
	//		Lean
	void Ciudad_Fria_Provinia();//(LISTO)
	void Dia_Frio_Provinacia();//(LISTO)
	void Dia_Calido_Ciudad();//(LISTO)
    ~TP_Class();
};
#endif
