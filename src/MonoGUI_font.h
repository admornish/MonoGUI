#ifndef __MonoGUI_FONT__
#define __MonoGUI_FONT__

typedef struct MonoGUI_FontCharInfoTypedef {
    const unsigned char widthBits; // width, in bits (or pixels), of the character
    const unsigned int offset;
} MonoGUI_FontCharInfoTypedef;

typedef struct MonoGUI_FontInfoTypedef {
   const unsigned int glyph_height;			/* glyph height in pixels				*/
   const unsigned int start_char;			/* start char							*/
   const unsigned int end_char;				/* end char								*/
   const MonoGUI_FontCharInfoTypedef *mapping_table;		/* used to find the index of a glyph	*/
   const unsigned char *glyph_table;		/* font table start address in memory	*/
} MonoGUI_FontInfoTypedef;


         
#endif
                                  
