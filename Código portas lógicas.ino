int chave1;
int chave2;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop()
{ //Porta And
  
   chave1=1;
   chave2=1;
  
   
   if(chave1==0 && chave2==0)
   {
     }
  
   if(chave1==0 && chave2==1)
   {
    digitalWrite(11, HIGH);
   }
  
   if(chave1==1 && chave2==0)
   {
     digitalWrite(13, HIGH);
   }
  
   if(chave1==1 && chave2==1)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   }
  
  //Porta OR
  
  /*if(chave1==0 && chave2==0)
   {
     }
  
   if(chave1==0 && chave2==1)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   }
  
   if(chave1==1 && chave2==0)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   }
  
   if(chave1==1 && chave2==1)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   }*/
  
  //Porta NAND
  
   /* if(chave1==0 && chave2==0)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   
     }
  
   if(chave1==0 && chave2==1)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   }
  
   if(chave1==1 && chave2==0)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   }
  
   if(chave1==1 && chave2==1)
   {
   	 digitalWrite(13, HIGH);
     digitalWrite(11, HIGH);
   } */
  
  //Porta NOR
  
  /*if(chave1==0 && chave2==0)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   
     }
  
   if(chave1==0 && chave2==1)
   {
     digitalWrite(11, HIGH);
   }
  
   if(chave1==1 && chave2==0)
   {
     digitalWrite(13, HIGH);
   }
  
   if(chave1==1 && chave2==1)
   {
     digitalWrite(13, HIGH);
     digitalWrite(11, HIGH);
   }*/
  
  //Porta XOR
  
   /*if(chave1==0 && chave2==0)
   { 
   }
  
   if(chave1==0 && chave2==1)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   }
  
   if(chave1==1 && chave2==0)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   }
  
   if(chave1==1 && chave2==1)
   {
   }*/
  
  //Porta XNOR
  
 /* if(chave1==0 && chave2==0)
   { 
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
   }
  
   if(chave1==0 && chave2==1)
   {
     digitalWrite(11, HIGH);
   }
  
   if(chave1==1 && chave2==0)
   {
     digitalWrite(13, HIGH);
   }
  
   if(chave1==1 && chave2==1)
   {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
   }*/
  
  
}