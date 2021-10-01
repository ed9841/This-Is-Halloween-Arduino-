// BPM of entire song = 357.1 

/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/

int C4 = 262;
int D4 = 294;
int E4 = 330;
int F4 = 349;
int G4 = 392;
int C3 = 130.8;
int D3 = 146.8;
int E3 = 164.8;
int F3 = 174.6;
int G3 = 196;
int Gs3 = 207.7;
int Eb4 = 311.1;
int halfnote = 714.4;
int eighth = 178.6;
int dotquarter = 900;
int quarter = 357.2;
int sixteenth = 170;
int dothalf = 2000;
int output = 9;

void setup() { 
  for (int i = 0; i < 1; i++){
    // Measure 1
    // G4
    for (i = 0; i<4; i++){
      tone(9, G4);
      delay(eighth);
      noTone(output);
      delay(eighth);
    }
   // G4
   tone(9, G4);
   delay(eighth);
   noTone(output);
   // #G4
   tone(9, 207.7);
   delay(sixteenth);
   noTone(output);
   // F4
   tone(9, F4);
   delay(eighth);
   noTone(output);
   delay(eighth);
   // longer F4
   tone(9, F4);
   delay(quarter);
   noTone(output);
   delay(quarter);
   // Measure 2
   // F4
   for (i= 0; i<4; i++){
   tone(9, F4);
   delay(eighth);
   noTone(output);
   delay(eighth);
   }
   // F4
   tone(9, F4);
   delay(eighth);
   noTone(output);
   // G4
   tone(9, G4);
   delay(sixteenth);
   noTone(output);
   // #G4
   tone(9, 207.7);
   delay(eighth);
   noTone(output);
   delay(eighth);
   // G4
   tone(9, G4);
   delay(quarter);
   noTone(output);
   delay(quarter);
   // Verse 3
   // G3
   for(i=0; i<3; i++){
    tone(9, G3);
    delay(eighth);
    noTone(output);
    delay(eighth);
   }
    // #G3
    tone(9, 207.7);
    delay(quarter);
    noTone(output);
    // bB
    tone(9, 233.1);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // #G3
    tone(9, 207.7);
    delay(sixteenth);
    noTone(output);
    // G3
    tone(9, G3);
    delay(sixteenth);
    noTone(output);
    //F3
    tone(9, F3);
    delay(quarter);
    noTone(output);
    delay(quarter);
    //Verse 4
    // F3 twice
    for(i=0; i<2; i++){
      tone(9, F3);
      delay(eighth);
      noTone(output);
      delay(eighth);
    }
    // F3
    tone(9, F3);
    delay(sixteenth);
    noTone(output);
    // G3
    tone(9, G3);
    delay(sixteenth);
    noTone(output);
    // G#3
    tone(9, 207.7);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G3
    tone(9, G3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // Eb3
    tone(9, 155.6);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // D3
    tone(9, D3);
    delay(quarter);
    noTone(output);
    // G3
    tone(9, G3);
    delay(quarter);
    noTone(output);
    // Verse 5
    for(i=0; i<2; i++){
      // Bb4
      tone(9, 466.2);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // Bb4
      tone(9, 466.2);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // Bb4
      tone(9, 466.2);
      delay(sixteenth);
      noTone(output);
      // A4
      tone(9, 440);
      delay(sixteenth);
      noTone(output);
      // G4
      tone(9, G4);
      delay(eighth);
      noTone(output);
      delay(eighth);
    }
    // Verse 6
    // Bb4
    tone(9, 466.2);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // F4
    for(i=0; i<2; i++){
      tone(9, F4);
      delay(eighth);
      noTone(output);
      delay(eighth);
    }
    // Eb4
    tone(9, 311.1);
    delay(sixteenth);
    noTone(output);
    // C#4
    tone(9, 277.2);
    delay(sixteenth);
    noTone(output);
    // C4
    tone(9, C4);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G4
    tone(9, G4);
    delay(quarter);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(quarter);
    noTone(output);
    delay(quarter); 
    // Verse 7
    // B4
    for(i=0; i<2; i++){
      tone(9, 493.9);
      delay(eighth);
      noTone(output);
      delay(eighth);
    }
    // B4
    tone(9, 493.5);
    delay(sixteenth);
    noTone(output);
    // Bb4
    tone(9, 466.2);
    delay(sixteenth);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // B4
    for(i=0; i<4; i++){
      tone(9, 493.5);
      delay(sixteenth);
      noTone(output);
    }
    // B4
    tone(9, 493.5);
    delay(sixteenth);
    noTone(output);
    // Bb4
    tone(9, 466.2);
    delay(sixteenth);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(sixteenth);
    noTone(output);
    delay(sixteenth); 
    // Verse 8
    // B4
    tone(9, 493.9);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // F4
    for(i=0; i<2; i++){
      tone(9, F4);
      delay(eighth);
      noTone(output);
      delay(eighth);
    }
    // Eb4
    tone(9, 311.1);
    delay(sixteenth);
    noTone(output);
    // C#4
    tone(9, 277.2);
    delay(sixteenth);
    noTone(output);
    // C4
    tone(9, C4);
    delay(sixteenth);
    noTone(output);
    // G3
    tone(9, G3);
    delay(sixteenth);
    noTone(output);
    // Eb4
    tone(9, 311.1);
    delay(sixteenth);
    noTone(output);
    // C4
    tone(9, C4);
    delay(sixteenth);
    noTone(output);
    // G4
    tone(9, G4);
    delay(sixteenth);
    noTone(output);
    // Eb4
    tone(9, 311.1);
    delay(sixteenth);
    noTone(output);
    // C5
    tone(9, 523.3);
    delay(sixteenth);
    noTone(output);
    delay(eighth);
    //Creature Under Bed Lyrics
    // F4
    tone(output,F4);    // tone(outputPin,frequency)
      delay(eighth);  //  delay(milliseconds) 
    noTone(output);
      delay(eighth);
    // F4
    tone(output, F4);   
      delay(eighth);   
    noTone(output);  
      delay(eighth);  
    // Measure 2, 2 seconds
    // E4
    tone(output, E4);    
      delay(quarter); 
      noTone (output);
      delay (quarter); 
    // F4
    tone(output, F4);    
      delay(sixteenth); 
      noTone (output); 
    // F4
    tone(output, F4);    
      delay(sixteenth);   
    noTone(output);
    // Measure 3, 2 seconds
    // F4
    tone(output, F4);    
      delay(sixteenth);
      noTone(output);
    // F4 
    tone(output, F4);  
      delay(sixteenth); 
      noTone(output);
    // E4
    tone(output, E4);    
      delay(quarter); 
      noTone(output);
      delay(quarter);
    // Measure 4, 2 seconds
    //second verse
    // A3
    tone(output, 220);    
      delay(eighth); 
      noTone(output);
      delay(eighth);
     //F4
     tone(output,F4);
     delay(eighth);
     noTone(output);
     delay(eighth);
     //F4
     tone(output,F4);
     delay(eighth);
     noTone(output);
     delay(eighth);
     //A3
     tone(output, 220);    
      delay(eighth); 
      noTone(output);
      delay(eighth);
      //Gs3
      tone(output, Gs3);
      delay(eighth);
      noTone(output);
      delay(sixteenth);
      //A3
      tone(output, 220);    
      delay(sixteenth); 
      noTone(output);
      //B3
      tone(output, 246.9);
      delay(sixteenth);
      noTone(output);
      //Cs4
      tone(output,277.2);
      delay(eighth);
      noTone(output);
      delay(eighth); 
      //Creature Under Bed Lyrics
      //F3
      tone(output,174.6);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // C#4
      tone(9, 277.2);
      delay(eighth);
      noTone(output);
      delay(eighth);
      //F#3
      tone(output,370);
      delay(eighth);
      noTone(output);
      delay(eighth);
      //F#3
      tone(output,370);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // A4
      tone(9, 440);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // Gs4
      tone(output, 415.3);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // F#3
      tone(output, 370);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // C#4
      tone(output, 277.2);
      delay(eighth);
      noTone(output);
      delay(eighth);
      for(i=0; i<2; i++){
      // F#3
      tone(output, 370);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // Eb4
      tone(output, 311.1);
      delay(eighth);
      noTone(output);
      delay(eighth);
      }
      // F#3
      tone(output, 370);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // Gs4
      tone(output, 415.3);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // Eb4
      tone(output, 311.1);
      delay(quarter);
      noTone(output);
      delay(halfnote);
      // verse
      // C#4
      tone(9, 277.2);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // A4
      tone(output,440);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // A4
      tone(output,440);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // C#5
      tone(9, 554.4);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // B4
      tone(output, 493.9);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // A4
      tone(output, 440);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // A4
      tone(output, 440);
      delay(eighth);
      noTone(output);
      delay(eighth);
      for(i=0; i<2; i++){
      // verse
      // A4
      tone(output, 440);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // F#4
      tone(output, 370.4);
      delay(eighth);
      noTone(output);
      delay(eighth);
      }
      // A4
      tone(output, 440);
      delay(quarter);
      noTone(output);
      //G#4
      tone(9, 415.3);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // C#4
      tone(9, 277.2);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // C#5
      tone(9, 554.4);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // C#4
      tone(9, 277.2);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // verse
      // Eb4
      tone(9, Eb4);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // Eb4
      tone(9, Eb4);
      delay(eighth);
      noTone(output);
      delay(eighth);
      // Eb4
      tone(9, Eb4);
      delay(sixteenth);
      noTone(output);
      // D4
      tone(9, D4);
      delay(sixteenth);
      noTone(output);
      // C4
      tone(9, C4);
      delay(eighth);
      noTone(output);
      delay(eighth);
       // B4
    tone(9,493.9);
      delay(sixteenth);
    noTone(output);
    // Bb4
    tone(9,466.2);
      delay(sixteenth);
    noTone(output); 
   //G#4
    tone(9,415.3);
      delay(sixteenth);
    noTone(output);
      delay(eighth);
   // B4
    tone(9,493.9);
      delay(sixteenth);
    noTone(output);
    // Bb4
    tone(9,466.2);
      delay(sixteenth);
    noTone(output); 
   //G#4
    tone(9,415.3);
      delay(sixteenth);
    noTone(output);
      delay(eighth);
    // B4
    tone(9,493.9);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // Bb4
    tone(9,466.2);
    delay(eighth);
    noTone(output);
    delay(eighth); 
    //G#4
    tone(9,415.3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G#3
    tone(9, 207.7);
    delay(eighth);
    noTone(output);
    delay(eighth); 
    // verse
    // G#5
    tone(9, 830.6);
    delay(sixteenth);
    noTone(output);
    // G5
    tone(9, 784);
    delay(sixteenth);
    noTone(output);
    // F5
    tone(9, 698.5);
    delay(sixteenth);
    noTone(output);
    // C5
    tone(9, 523.3);
    delay(sixteenth);
    noTone(output);
    // F5
    tone(9, 698.5);
    delay(sixteenth);
    noTone(output);
    // G5
    tone(9, 784);
    delay(sixteenth);
    noTone(output);
    // G#5
    tone(9, 830.6);
    delay(sixteenth);
    noTone(output);
    // Bb5
    tone(9, 932.3);
    delay(sixteenth);
    noTone(output); 
    //verse
    // F4
    tone(9,F4);
    delay(quarter);
    noTone(output);
    delay(quarter);
    //E4
    tone(9,E4);
    delay(quarter);
    noTone(output);
    delay(quarter);
    // F4
    tone(9,F4);
    delay(eighth);
    noTone(output);
    delay(eighth);
 //F4
    tone(9,F4);
     delay(eighth);
    noTone(output);
  delay(eighth);
 //E4
    tone(9,E4);
     delay(quarter);
    noTone(output);
  delay(quarter);
  // verse
  // B5
  tone(9, 493.9);
  delay(eighth);
  noTone(output);
  delay(eighth);
  // B5
  tone(9, 493.9);
  delay(eighth);
  noTone(output);
  delay(eighth);
  // B5
  tone(9, 493.9);
  delay(quarter);
  noTone(output);
  // Bb4
  tone(9, 466.2);
  delay(sixteenth);
  noTone(output);
  // G#4
  tone(9, 415.3);
  delay(sixteenth);
  noTone(output);
  // G4
  tone(9, 392);
  delay(eighth);
  noTone(output);
  delay(eighth);
  // Eb4
  tone(9, 311.1);
  delay(eighth);
  noTone(output);
  delay(eighth);
  // G#4
  tone(9, 415.3);
  delay(eighth);
  noTone(output);
  delay(eighth);
  // G#3
  tone(9, 207.7);
  delay(eighth);
  noTone(output);
  delay(eighth);
  // verse
  // F4
  tone(9,F4);
  delay(quarter);
  noTone(output);
  delay(quarter);
  //E4
  tone(9,E4);
  delay(quarter);
  noTone(output);
  delay(quarter);
  // B5
  tone(9, 493.9);
  delay(eighth);
  noTone(output);
  delay(eighth);
  // B5
  tone(9, 493.9);
  delay(eighth);
  noTone(output);
  delay(eighth);
  // B5
  tone(9, 493.9);
  delay(sixteenth);
  noTone(output);
  // Bb4
  tone(9, 466.2);
  delay(sixteenth);
  noTone(output);
  // G#4
  tone(9, 415.3);
  delay(eighth);
  noTone(output);
  delay(eighth);
  // B4
    tone(9, 493.9);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // F4
      tone(9, F4);
      delay(eighth);
      noTone(output);
      delay(eighth);
      tone(9, F4);
      delay(eighth);
      noTone(output);
      delay(eighth);
    // Eb4
    tone(9, 311.1);
    delay(sixteenth);
    noTone(output);
    // C#4
    tone(9, 277.2);
    delay(sixteenth);
    noTone(output);
    // C4
    tone(9, C4);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G4
    tone(9, G4);
    delay(quarter);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G#3
    tone(9, 207.7);
    delay(eighth);
    noTone(eighth);
    delay(eighth);
    // verse
    // G#4
    tone(9, 415.3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G#4
    tone(9, 415.3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G#4
    tone(9, 415.3);
    delay(sixteenth);
    noTone(output);
    // G4
    tone(9, G4);
    delay(sixteenth);
    noTone(output);
    // F4
    tone(9, F4);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G#4
    tone(9, 415.3);
    delay(sixteenth);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(sixteenth);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(sixteenth);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(sixteenth);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(sixteenth);
    noTone(output);
    // G4
    tone(9, G4);
    delay(sixteenth);
    noTone(output);
    // F4
    tone(9, F4);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G#4
    tone(9, 415.3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // Eb4
    tone(9, 311.1);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // Eb4
    tone(9, 311.1);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // C#4
    tone(9, 277.2);
    delay(sixteenth);
    noTone(output);
    // C4
    tone(9, C4);
    delay(sixteenth);
    noTone(output);
    // B3
    tone(9, 246.9);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // F#4
    tone(9, 370);
    delay(quarter);
    noTone(output);
    // G4
    tone(9, G4);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G4
    tone(9, G3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // verse
    // B4
    tone(9, 493.9);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // B4
    tone(9, 493.9);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // B4
    tone(9, 493.9);
    delay(sixteenth);
    noTone(output);
    // Bb4
    tone(9, 466.2);
    delay(sixteenth);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // B4
    tone(9, 493.9);
    delay(sixteenth);
    noTone(output);
    // B4
    tone(9, 493.9);
    delay(sixteenth);
    noTone(output);
    // B4
    tone(9, 493.9);
    delay(sixteenth);
    noTone(output);
    // B4
    tone(9, 493.9);
    delay(sixteenth);
    noTone(output);
    // B4
    tone(9, 493.9);
    delay(sixteenth);
    noTone(output);
    // Bb4
    tone(9, 466.2);
    delay(sixteenth);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // verse
    // B4
    tone(9, 493.9);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // F4
    tone(9, F4);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // F4
    tone(9, F4);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // Eb4
    tone(9, 311.1);
    delay(sixteenth);
    noTone(output);
    // C#4
    tone(9, 277.2);
    delay(sixteenth);
    noTone(output);
    // C4
    tone(9, C4);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G4
    tone(9, G4);
    delay(quarter);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // G#3
    tone(9, 207.7);
    delay(eighth);
    noTone(output);
    delay(eighth);
    // Verse
    for(int i=0; i<3; i++){
      // G4
      tone(9, G4);
      delay(quarter);
      noTone(output);
      delay(quarter);
    }
    // G4
    tone(9, G4);
    delay(quarter);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(quarter);
    noTone(output);
    // Verse
    for(int i=0; i<3; i++){
      // F4
      tone(9, F4);
      delay(quarter);
      noTone(output);
      delay(quarter);
    }
    // F4
    tone(9, F4);
    delay(quarter);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(quarter);
    noTone(output);
    // Verse
    for(int i=0; i<3; i++){
      // G4
      tone(9, G4);
      delay(quarter);
      noTone(output);
      delay(quarter);
    }
    // G4
    tone(9, G4);
    delay(quarter);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(quarter);
    noTone(output);
    // Last Verse
    // F4
    tone(9, F4);
    delay(quarter);
    noTone(output);
    delay(quarter);
    // F4
    tone(9, F4);
    delay(quarter);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(quarter);
    noTone(output);
    for(int i=0; i<2; i++){
    // G4
    tone(9, G4);
    delay(quarter);
    noTone(output);
    // G#4
    tone(9, 415.3);
    delay(quarter);
    noTone(output);
    }
    // Last note, C5
    tone(9, 523.3);
    delay(eighth*17.5);
    noTone(output);
    delay(quarter);

    // THE END
  }
}

void loop() {
  
}
