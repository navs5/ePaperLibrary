/* 
**  Font data for Calibri 10pt
*/
#include "fonts.h"

/* Character bitmaps for Calibri 10pt */
const uint8_t calibri_10ptBitmaps[] = 
{
	/* @0 '!' (1 pixels wide) */
	0x2F, 0xE0, //   # #######

	/* @2 '"' (3 pixels wide) */
	0x00, 0xE0, //         ###
	0x00, 0x00, //            
	0x00, 0xE0, //         ###

	/* @8 '#' (6 pixels wide) */
	0x08, 0x00, //     #      
	0x3D, 0x00, //   #### #   
	0x0B, 0xC0, //     # #### 
	0x3D, 0x00, //   #### #   
	0x0B, 0xC0, //     # #### 
	0x01, 0x00, //        #   

	/* @20 '$' (5 pixels wide) */
	0x11, 0x80, //    #   ##  
	0x62, 0x40, //  ##   #  # 
	0x22, 0x40, //   #   #  # 
	0x24, 0x60, //   #  #   ##
	0x18, 0x80, //    ##   #  

	/* @30 '%' (9 pixels wide) */
	0x01, 0x80, //        ##  
	0x22, 0x40, //   #   #  # 
	0x12, 0x40, //    #  #  # 
	0x09, 0x80, //     #  ##  
	0x06, 0x00, //      ##    
	0x19, 0x00, //    ##  #   
	0x24, 0x80, //   #  #  #  
	0x24, 0x40, //   #  #   # 
	0x18, 0x00, //    ##      

	/* @48 '&' (7 pixels wide) */
	0x1C, 0x00, //    ###     
	0x22, 0xC0, //   #   # ## 
	0x23, 0x20, //   #   ##  #
	0x25, 0x20, //   #  # #  #
	0x18, 0xC0, //    ##   ## 
	0x18, 0x00, //    ##      
	0x26, 0x00, //   #  ##    

	/* @62 ''' (1 pixels wide) */
	0x00, 0xE0, //         ###

	/* @64 '(' (2 pixels wide) */
	0x3F, 0x80, //   #######  
	0xC0, 0x60, // ##       ##

	/* @68 ')' (2 pixels wide) */
	0xC0, 0x60, // ##       ##
	0x3F, 0x80, //   #######  

	/* @72 '*' (5 pixels wide) */
	0x01, 0x40, //        # # 
	0x00, 0x80, //         #  
	0x03, 0xE0, //       #####
	0x00, 0x80, //         #  
	0x01, 0x40, //        # # 

	/* @82 '+' (5 pixels wide) */
	0x04, 0x00, //      #     
	0x04, 0x00, //      #     
	0x3F, 0x80, //   #######  
	0x04, 0x00, //      #     
	0x04, 0x00, //      #     

	/* @92 ',' (2 pixels wide) */
	0x80, 0x00, // #          
	0x60, 0x00, //  ##        

	/* @96 '-' (3 pixels wide) */
	0x04, 0x00, //      #     
	0x04, 0x00, //      #     
	0x04, 0x00, //      #     

	/* @102 '.' (1 pixels wide) */
	0x20, 0x00, //   #        

	/* @104 '/' (5 pixels wide) */
	0xC0, 0x00, // ##         
	0x30, 0x00, //   ##       
	0x0E, 0x00, //     ###    
	0x01, 0x80, //        ##  
	0x00, 0x60, //          ##

	/* @114 '0' (5 pixels wide) */
	0x1F, 0x80, //    ######  
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x1F, 0x80, //    ######  

	/* @124 '1' (5 pixels wide) */
	0x20, 0x80, //   #     #  
	0x20, 0x40, //   #      # 
	0x3F, 0xC0, //   ######## 
	0x20, 0x00, //   #        
	0x20, 0x00, //   #        

	/* @134 '2' (5 pixels wide) */
	0x20, 0x80, //   #     #  
	0x30, 0x40, //   ##     # 
	0x28, 0x40, //   # #    # 
	0x24, 0x40, //   #  #   # 
	0x23, 0x80, //   #   ###  

	/* @144 '3' (5 pixels wide) */
	0x10, 0x80, //    #    #  
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 
	0x1D, 0x80, //    ### ##  

	/* @154 '4' (5 pixels wide) */
	0x0C, 0x00, //     ##     
	0x0B, 0x00, //     # ##   
	0x08, 0xC0, //     #   ## 
	0x3F, 0xC0, //   ######## 
	0x08, 0x00, //     #      

	/* @164 '5' (5 pixels wide) */
	0x13, 0xC0, //    #  #### 
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 
	0x1C, 0x40, //    ###   # 

	/* @174 '6' (5 pixels wide) */
	0x1F, 0x00, //    #####   
	0x22, 0x80, //   #   # #  
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 
	0x1C, 0x40, //    ###   # 

	/* @184 '7' (5 pixels wide) */
	0x00, 0x40, //          # 
	0x30, 0x40, //   ##     # 
	0x0C, 0x40, //     ##   # 
	0x03, 0x40, //       ## # 
	0x00, 0xC0, //         ## 

	/* @194 '8' (5 pixels wide) */
	0x1D, 0x80, //    ### ##  
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 
	0x1D, 0x80, //    ### ##  

	/* @204 '9' (5 pixels wide) */
	0x23, 0x80, //   #   ###  
	0x24, 0x40, //   #  #   # 
	0x24, 0x40, //   #  #   # 
	0x14, 0x40, //    # #   # 
	0x0F, 0x80, //     #####  

	/* @214 ':' (1 pixels wide) */
	0x21, 0x00, //   #    #   

	/* @216 ';' (2 pixels wide) */
	0x80, 0x00, // #          
	0x61, 0x00, //  ##    #   

	/* @220 '<' (5 pixels wide) */
	0x04, 0x00, //      #     
	0x04, 0x00, //      #     
	0x0A, 0x00, //     # #    
	0x0A, 0x00, //     # #    
	0x11, 0x00, //    #   #   

	/* @230 '=' (5 pixels wide) */
	0x09, 0x00, //     #  #   
	0x09, 0x00, //     #  #   
	0x09, 0x00, //     #  #   
	0x09, 0x00, //     #  #   
	0x09, 0x00, //     #  #   

	/* @240 '>' (5 pixels wide) */
	0x11, 0x00, //    #   #   
	0x0A, 0x00, //     # #    
	0x0A, 0x00, //     # #    
	0x04, 0x00, //      #     
	0x04, 0x00, //      #     

	/* @250 '?' (4 pixels wide) */
	0x00, 0x40, //          # 
	0x2E, 0x20, //   # ###   #
	0x02, 0x20, //       #   #
	0x01, 0xC0, //        ### 

	/* @258 '@' (10 pixels wide) */
	0x3E, 0x00, //   #####    
	0x41, 0x00, //  #     #   
	0x80, 0x80, // #       #  
	0x8E, 0x40, // #   ###  # 
	0x91, 0x40, // #  #   # # 
	0x89, 0x40, // #   #  # # 
	0x9F, 0x40, // #  ##### # 
	0x10, 0x40, //    #     # 
	0x10, 0x80, //    #    #  
	0x0F, 0x00, //     ####   

	/* @278 'A' (7 pixels wide) */
	0x30, 0x00, //   ##       
	0x0C, 0x00, //     ##     
	0x0B, 0x00, //     # ##   
	0x08, 0xC0, //     #   ## 
	0x0B, 0x00, //     # ##   
	0x0C, 0x00, //     ##     
	0x30, 0x00, //   ##       

	/* @292 'B' (5 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 
	0x23, 0x80, //   #   ###  
	0x1C, 0x00, //    ###     

	/* @302 'C' (6 pixels wide) */
	0x0F, 0x00, //     ####   
	0x10, 0x80, //    #    #  
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x10, 0x80, //    #    #  

	/* @314 'D' (6 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x10, 0x80, //    #    #  
	0x0F, 0x00, //     ####   

	/* @326 'E' (4 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 
	0x22, 0x40, //   #   #  # 

	/* @334 'F' (4 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x02, 0x40, //       #  # 
	0x02, 0x40, //       #  # 
	0x02, 0x40, //       #  # 

	/* @342 'G' (6 pixels wide) */
	0x0F, 0x00, //     ####   
	0x10, 0x80, //    #    #  
	0x20, 0x40, //   #      # 
	0x24, 0x40, //   #  #   # 
	0x24, 0x40, //   #  #   # 
	0x1C, 0x80, //    ###  #  

	/* @354 'H' (6 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x02, 0x00, //       #    
	0x02, 0x00, //       #    
	0x02, 0x00, //       #    
	0x02, 0x00, //       #    
	0x3F, 0xC0, //   ######## 

	/* @366 'I' (1 pixels wide) */
	0x3F, 0xC0, //   ######## 

	/* @368 'J' (3 pixels wide) */
	0x20, 0x00, //   #        
	0x20, 0x00, //   #        
	0x1F, 0xC0, //    ####### 

	/* @374 'K' (5 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x02, 0x00, //       #    
	0x05, 0x00, //      # #   
	0x18, 0x80, //    ##   #  
	0x20, 0x40, //   #      # 

	/* @384 'L' (4 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x20, 0x00, //   #        
	0x20, 0x00, //   #        
	0x20, 0x00, //   #        

	/* @392 'M' (9 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x00, 0xC0, //         ## 
	0x03, 0x00, //       ##   
	0x0C, 0x00, //     ##     
	0x30, 0x00, //   ##       
	0x0C, 0x00, //     ##     
	0x03, 0x00, //       ##   
	0x00, 0xC0, //         ## 
	0x3F, 0xC0, //   ######## 

	/* @410 'N' (6 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x00, 0xC0, //         ## 
	0x03, 0x00, //       ##   
	0x0C, 0x00, //     ##     
	0x30, 0x00, //   ##       
	0x3F, 0xC0, //   ######## 

	/* @422 'O' (7 pixels wide) */
	0x0F, 0x00, //     ####   
	0x10, 0x80, //    #    #  
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x10, 0x80, //    #    #  
	0x0F, 0x00, //     ####   

	/* @436 'P' (5 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x04, 0x40, //      #   # 
	0x04, 0x40, //      #   # 
	0x04, 0x40, //      #   # 
	0x03, 0x80, //       ###  

	/* @446 'Q' (8 pixels wide) */
	0x0F, 0x00, //     ####   
	0x10, 0x80, //    #    #  
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x20, 0x40, //   #      # 
	0x30, 0x80, //   ##    #  
	0x4F, 0x00, //  #  ####   
	0x40, 0x00, //  #         

	/* @462 'R' (5 pixels wide) */
	0x3F, 0xC0, //   ######## 
	0x04, 0x40, //      #   # 
	0x04, 0x40, //      #   # 
	0x0C, 0x40, //     ##   # 
	0x33, 0x80, //   ##  ###  

	/* @472 'S' (4 pixels wide) */
	0x11, 0x80, //    #   ##  
	0x22, 0x40, //   #   #  # 
	0x24, 0x40, //   #  #   # 
	0x18, 0x80, //    ##   #  

	/* @480 'T' (5 pixels wide) */
	0x00, 0x40, //          # 
	0x00, 0x40, //          # 
	0x3F, 0xC0, //   ######## 
	0x00, 0x40, //          # 
	0x00, 0x40, //          # 

	/* @490 'U' (6 pixels wide) */
	0x1F, 0xC0, //    ####### 
	0x20, 0x00, //   #        
	0x20, 0x00, //   #        
	0x20, 0x00, //   #        
	0x20, 0x00, //   #        
	0x1F, 0xC0, //    ####### 

	/* @502 'V' (7 pixels wide) */
	0x00, 0xC0, //         ## 
	0x03, 0x00, //       ##   
	0x0C, 0x00, //     ##     
	0x30, 0x00, //   ##       
	0x0C, 0x00, //     ##     
	0x03, 0x00, //       ##   
	0x00, 0xC0, //         ## 

	/* @516 'W' (11 pixels wide) */
	0x00, 0xC0, //         ## 
	0x0F, 0x00, //     ####   
	0x30, 0x00, //   ##       
	0x0C, 0x00, //     ##     
	0x03, 0x00, //       ##   
	0x00, 0xC0, //         ## 
	0x03, 0x00, //       ##   
	0x0C, 0x00, //     ##     
	0x30, 0x00, //   ##       
	0x0F, 0x00, //     ####   
	0x00, 0xC0, //         ## 

	/* @538 'X' (7 pixels wide) */
	0x20, 0x40, //   #      # 
	0x10, 0x80, //    #    #  
	0x09, 0x00, //     #  #   
	0x06, 0x00, //      ##    
	0x09, 0x00, //     #  #   
	0x10, 0x80, //    #    #  
	0x20, 0x40, //   #      # 

	/* @552 'Y' (5 pixels wide) */
	0x00, 0xC0, //         ## 
	0x03, 0x00, //       ##   
	0x3C, 0x00, //   ####     
	0x03, 0x00, //       ##   
	0x00, 0xC0, //         ## 

	/* @562 'Z' (6 pixels wide) */
	0x30, 0x40, //   ##     # 
	0x28, 0x40, //   # #    # 
	0x24, 0x40, //   #  #   # 
	0x22, 0x40, //   #   #  # 
	0x21, 0x40, //   #    # # 
	0x20, 0xC0, //   #     ## 

	/* @574 '[' (2 pixels wide) */
	0xFF, 0xE0, // ###########
	0x80, 0x20, // #         #

	/* @578 '\' (5 pixels wide) */
	0x00, 0x60, //          ##
	0x01, 0x80, //        ##  
	0x0E, 0x00, //     ###    
	0x30, 0x00, //   ##       
	0xC0, 0x00, // ##         

	/* @588 ']' (2 pixels wide) */
	0x80, 0x20, // #         #
	0xFF, 0xE0, // ###########

	/* @592 '^' (5 pixels wide) */
	0x06, 0x00, //      ##    
	0x01, 0x80, //        ##  
	0x00, 0x40, //          # 
	0x01, 0x80, //        ##  
	0x06, 0x00, //      ##    

	/* @602 '_' (6 pixels wide) */
	0x80, 0x00, // #          
	0x80, 0x00, // #          
	0x80, 0x00, // #          
	0x80, 0x00, // #          
	0x80, 0x00, // #          
	0x80, 0x00, // #          

	/* @614 '`' (2 pixels wide) */
	0x00, 0x20, //           #
	0x00, 0x40, //          # 

	/* @618 'a' (5 pixels wide) */
	0x19, 0x00, //    ##  #   
	0x25, 0x00, //   #  # #   
	0x25, 0x00, //   #  # #   
	0x25, 0x00, //   #  # #   
	0x3E, 0x00, //   #####    

	/* @628 'b' (5 pixels wide) */
	0x3F, 0xE0, //   #########
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x1E, 0x00, //    ####    

	/* @638 'c' (4 pixels wide) */
	0x1E, 0x00, //    ####    
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   

	/* @646 'd' (5 pixels wide) */
	0x1E, 0x00, //    ####    
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x3F, 0xE0, //   #########

	/* @656 'e' (4 pixels wide) */
	0x1E, 0x00, //    ####    
	0x25, 0x00, //   #  # #   
	0x25, 0x00, //   #  # #   
	0x26, 0x00, //   #  ##    

	/* @664 'f' (4 pixels wide) */
	0x01, 0x00, //        #   
	0x3F, 0xC0, //   ######## 
	0x01, 0x20, //        #  #
	0x01, 0x20, //        #  #

	/* @672 'g' (5 pixels wide) */
	0xD6, 0x00, // ## # ##    
	0xA9, 0x00, // # # #  #   
	0xA9, 0x00, // # # #  #   
	0xA7, 0x00, // # #  ###   
	0x41, 0x00, //  #     #   

	/* @682 'h' (5 pixels wide) */
	0x3F, 0xE0, //   #########
	0x02, 0x00, //       #    
	0x01, 0x00, //        #   
	0x01, 0x00, //        #   
	0x3E, 0x00, //   #####    

	/* @692 'i' (1 pixels wide) */
	0x3F, 0x40, //   ###### # 

	/* @694 'j' (3 pixels wide) */
	0x80, 0x00, // #          
	0x80, 0x00, // #          
	0x7F, 0x40, //  ####### # 

	/* @700 'k' (4 pixels wide) */
	0x3F, 0xE0, //   #########
	0x04, 0x00, //      #     
	0x1A, 0x00, //    ## #    
	0x21, 0x00, //   #    #   

	/* @708 'l' (1 pixels wide) */
	0x3F, 0xE0, //   #########

	/* @710 'm' (8 pixels wide) */
	0x3F, 0x00, //   ######   
	0x02, 0x00, //       #    
	0x01, 0x00, //        #   
	0x01, 0x00, //        #   
	0x3E, 0x00, //   #####    
	0x01, 0x00, //        #   
	0x01, 0x00, //        #   
	0x3E, 0x00, //   #####    

	/* @726 'n' (5 pixels wide) */
	0x3F, 0x00, //   ######   
	0x02, 0x00, //       #    
	0x01, 0x00, //        #   
	0x01, 0x00, //        #   
	0x3E, 0x00, //   #####    

	/* @736 'o' (5 pixels wide) */
	0x1E, 0x00, //    ####    
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x1E, 0x00, //    ####    

	/* @746 'p' (5 pixels wide) */
	0xFF, 0x00, // ########   
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x1E, 0x00, //    ####    

	/* @756 'q' (5 pixels wide) */
	0x1E, 0x00, //    ####    
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   
	0xFF, 0x00, // ########   

	/* @766 'r' (4 pixels wide) */
	0x3F, 0x00, //   ######   
	0x02, 0x00, //       #    
	0x01, 0x00, //        #   
	0x01, 0x00, //        #   

	/* @774 's' (4 pixels wide) */
	0x26, 0x00, //   #  ##    
	0x25, 0x00, //   #  # #   
	0x29, 0x00, //   # #  #   
	0x19, 0x00, //    ##  #   

	/* @782 't' (4 pixels wide) */
	0x01, 0x00, //        #   
	0x1F, 0xC0, //    ####### 
	0x21, 0x00, //   #    #   
	0x21, 0x00, //   #    #   

	/* @790 'u' (5 pixels wide) */
	0x1F, 0x00, //    #####   
	0x20, 0x00, //   #        
	0x20, 0x00, //   #        
	0x10, 0x00, //    #       
	0x3F, 0x00, //   ######   

	/* @800 'v' (5 pixels wide) */
	0x03, 0x00, //       ##   
	0x0C, 0x00, //     ##     
	0x30, 0x00, //   ##       
	0x0C, 0x00, //     ##     
	0x03, 0x00, //       ##   

	/* @810 'w' (9 pixels wide) */
	0x03, 0x00, //       ##   
	0x0C, 0x00, //     ##     
	0x30, 0x00, //   ##       
	0x0C, 0x00, //     ##     
	0x03, 0x00, //       ##   
	0x0C, 0x00, //     ##     
	0x30, 0x00, //   ##       
	0x0C, 0x00, //     ##     
	0x03, 0x00, //       ##   

	/* @828 'x' (5 pixels wide) */
	0x21, 0x00, //   #    #   
	0x12, 0x00, //    #  #    
	0x0C, 0x00, //     ##     
	0x12, 0x00, //    #  #    
	0x21, 0x00, //   #    #   

	/* @838 'y' (5 pixels wide) */
	0x03, 0x00, //       ##   
	0xCC, 0x00, // ##  ##     
	0x30, 0x00, //   ##       
	0x0C, 0x00, //     ##     
	0x03, 0x00, //       ##   

	/* @848 'z' (3 pixels wide) */
	0x31, 0x00, //   ##   #   
	0x2D, 0x00, //   # ## #   
	0x23, 0x00, //   #   ##   

	/* @854 '{' (3 pixels wide) */
	0x04, 0x00, //      #     
	0x7B, 0xC0, //  #### #### 
	0x80, 0x20, // #         #

	/* @860 '|' (1 pixels wide) */
	0xFF, 0xE0, // ###########

	/* @862 '}' (3 pixels wide) */
	0x80, 0x20, // #         #
	0x7B, 0xC0, //  #### #### 
	0x04, 0x00, //      #     

	/* @868 '~' (5 pixels wide) */
	0x01, 0x00, //        #   
	0x00, 0x80, //         #  
	0x01, 0x80, //        ##  
	0x01, 0x00, //        #   
	0x00, 0x80, //         #  
};

/* Character descriptors for Calibri 10pt */
/* { [Char width in bits], [Char height in bits], [Offset into calibri_10ptCharBitmaps in bytes] } */
charInfo_t calibri_10ptDescriptors[] = 
{
	{1, 11, 0}, 		/* ! */ 
	{3, 11, 2}, 		/* " */ 
	{6, 11, 8}, 		/* # */ 
	{5, 11, 20}, 		/* $ */ 
	{9, 11, 30}, 		/* % */ 
	{7, 11, 48}, 		/* & */ 
	{1, 11, 62}, 		/* ' */ 
	{2, 11, 64}, 		/* ( */ 
	{2, 11, 68}, 		/* ) */ 
	{5, 11, 72}, 		/* * */ 
	{5, 11, 82}, 		/* + */ 
	{2, 11, 92}, 		/* , */ 
	{3, 11, 96}, 		/* - */ 
	{1, 11, 102}, 		/* . */ 
	{5, 11, 104}, 		/* / */ 
	{5, 11, 114}, 		/* 0 */ 
	{5, 11, 124}, 		/* 1 */ 
	{5, 11, 134}, 		/* 2 */ 
	{5, 11, 144}, 		/* 3 */ 
	{5, 11, 154}, 		/* 4 */ 
	{5, 11, 164}, 		/* 5 */ 
	{5, 11, 174}, 		/* 6 */ 
	{5, 11, 184}, 		/* 7 */ 
	{5, 11, 194}, 		/* 8 */ 
	{5, 11, 204}, 		/* 9 */ 
	{1, 11, 214}, 		/* : */ 
	{2, 11, 216}, 		/* ; */ 
	{5, 11, 220}, 		/* < */ 
	{5, 11, 230}, 		/* = */ 
	{5, 11, 240}, 		/* > */ 
	{4, 11, 250}, 		/* ? */ 
	{10, 11, 258}, 		/* @ */ 
	{7, 11, 278}, 		/* A */ 
	{5, 11, 292}, 		/* B */ 
	{6, 11, 302}, 		/* C */ 
	{6, 11, 314}, 		/* D */ 
	{4, 11, 326}, 		/* E */ 
	{4, 11, 334}, 		/* F */ 
	{6, 11, 342}, 		/* G */ 
	{6, 11, 354}, 		/* H */ 
	{1, 11, 366}, 		/* I */ 
	{3, 11, 368}, 		/* J */ 
	{5, 11, 374}, 		/* K */ 
	{4, 11, 384}, 		/* L */ 
	{9, 11, 392}, 		/* M */ 
	{6, 11, 410}, 		/* N */ 
	{7, 11, 422}, 		/* O */ 
	{5, 11, 436}, 		/* P */ 
	{8, 11, 446}, 		/* Q */ 
	{5, 11, 462}, 		/* R */ 
	{4, 11, 472}, 		/* S */ 
	{5, 11, 480}, 		/* T */ 
	{6, 11, 490}, 		/* U */ 
	{7, 11, 502}, 		/* V */ 
	{11, 11, 516}, 		/* W */ 
	{7, 11, 538}, 		/* X */ 
	{5, 11, 552}, 		/* Y */ 
	{6, 11, 562}, 		/* Z */ 
	{2, 11, 574}, 		/* [ */ 
	{5, 11, 578}, 		/* \ */ 
	{2, 11, 588}, 		/* ] */ 
	{5, 11, 592}, 		/* ^ */ 
	{6, 11, 602}, 		/* _ */ 
	{2, 11, 614}, 		/* ` */ 
	{5, 11, 618}, 		/* a */ 
	{5, 11, 628}, 		/* b */ 
	{4, 11, 638}, 		/* c */ 
	{5, 11, 646}, 		/* d */ 
	{4, 11, 656}, 		/* e */ 
	{4, 11, 664}, 		/* f */ 
	{5, 11, 672}, 		/* g */ 
	{5, 11, 682}, 		/* h */ 
	{1, 11, 692}, 		/* i */ 
	{3, 11, 694}, 		/* j */ 
	{4, 11, 700}, 		/* k */ 
	{1, 11, 708}, 		/* l */ 
	{8, 11, 710}, 		/* m */ 
	{5, 11, 726}, 		/* n */ 
	{5, 11, 736}, 		/* o */ 
	{5, 11, 746}, 		/* p */ 
	{5, 11, 756}, 		/* q */ 
	{4, 11, 766}, 		/* r */ 
	{4, 11, 774}, 		/* s */ 
	{4, 11, 782}, 		/* t */ 
	{5, 11, 790}, 		/* u */ 
	{5, 11, 800}, 		/* v */ 
	{9, 11, 810}, 		/* w */ 
	{5, 11, 828}, 		/* x */ 
	{5, 11, 838}, 		/* y */ 
	{3, 11, 848}, 		/* z */ 
	{3, 11, 854}, 		/* { */ 
	{1, 11, 860}, 		/* | */ 
	{3, 11, 862}, 		/* } */ 
	{5, 11, 868}, 		/* ~ */ 
};

/* Font information for Calibri 10pt */
font_t calibri_10ptFont =
{
	11, /*  Character height */
	'!', /*  Start character */
	'~', /*  End character */
	2, /*  Width, in pixels, of space character */
	calibri_10ptDescriptors, /*  Character descriptor array */
	calibri_10ptBitmaps, /*  Character bitmap array */
};

