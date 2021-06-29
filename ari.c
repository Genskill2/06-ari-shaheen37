string ari(string inp)
{
    int character=0,word=0,sentence=0;

    for(int i=0;inp[i] != "\0";i++)
    {
        if(isalnum(inp[i]))
        {
            character++;
        }

        if(inp[i] ==" ")
        {
            word++;
        }
        
        if(inp[i]=="."||inp[i]=="!"||inp[i]=="?")
        {
            sentence++;
        }
    }

    float score = (4.71 * ((float)(character)/(float)(word))) + (0.5*((float)(word)/(float)(sentence))) -21.43;
    score = ceil(score);
    if(score==1)
    return "Kindergarten";
    if(score==2)
    return "First/Second Grade";
    if(score==3)
    return "Third Grade";
    if(score==4)
    return "Fourth Grade";
    if(score==5)
    return "Fifth Grade";
    if(score==6)
    return "Sixth Grade";
    if(score==7)
    return "Seventh Grade";
    if(score==8)
    return "Eighth Grade";
    if(score==9)
    return "Ninth Grade";
    if(score==10)
    return "Tenth Grade";
    if(score==11)
    return "Eleventh Grade";
    if(score==12)
    return "Twelfth grade";
    if(score==13)
    return "College student";
    if(score==14)
    return "Professor";

}
