#ifndef TEXT_H
#define TEXT_H

#define BANNER "Subjective-C Compiler (SubjC) 1.0\n"\
               "Copyright (C) 2022 Sleppo04\n\n"

#define MSG_COMPILING "Compiling %s...\n\n"
#define MSG_NOFILE    "Please specify an input file. Stupid.\n"
#define MSG_WRONGFILE "The specified file could not be found.\n"

char* lineErrors[] = {
    "What were you trying to do?\nEven my grandma could write better code than this.\n",
    "Were you trying to be smart? Well, that didn't work out.\n",
    "No. Just no.\n",
    "Are you joking? There's no way you're really *that* stupid.\n",
    "Trying to win a prize with this one? You won't.\n",
    "Nope, I'm outta here. See you around! (hopefully not)\n",
    "PLEASE, AT LEAST TRY!\n",
    "Uhm.... okay. I don't even know where to begin. This is just wrong on so many levels.\n",
    "I'm done. I quit. WHAT IS THIS? A TREE? A BOTTLE? Definetly not C-code.\n",
    "Hm. There's nothing wrong with thaaaAAAAAA MAKE IT STOP!\n"
    "OOF.\n",
    "You know, sometimes I'd rather work in the Rainbow Factory than for you.\n",
    "C0815: User is too incompetent.\n"
};

char* finalErrors[] = {
    "Compilation failed. Are you stupid?",
    "Compilation failed. Again.",
    "Compilation failed. PLEASE, MAKE IT STOP!"
};



#endif // TEXT_H