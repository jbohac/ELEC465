# include <math.h>

/*******************************************************************************
*NOTICE:                                                                       *
*This code is believed by the author to be bug free.  You are free to use and  *
*modify this code with the understanding that any use, either direct or        *
*derivative, must contain acknowledgement of its author and source.  The author*
*makes no warranty of any kind, expressed or implied, of merchantability or    *
*fitness for a particular purpose.  The author shall not be held liable for any*
*incidental or consequential damages in connection with or arising out of the  *
*furnishing, performance, or use of this software.  This software is not       *
*authorized for use in life support devices or systems.                        *
********************************************************************************/

int nuquan_enc(float input,  float *b, int numlev)
{
   int level;


  for(level = 0; level < numlev-1; level++)
    if(input <  b[level])
      return level;

  return numlev-1;
}


float nuquan_dec(int label,  float *r)
{
  float output;
  output = r[label];
  return output;
}
