
bool CoreMatch(char * s, char * p);

bool isMatch(char * s, char * p){
    if(s == NULL || p == NULL)
        return false;

    return CoreMatch(s,p);
}

bool CoreMatch(char * s, char * p)
{
    if(*s == '\0' && *p == '\0')
        return true;
    if(*s != '\0' && *p == '\0')
        return false;
    if(*(p+1) == '*')
    {
        if(*s == *p || (*p == '.' && *s != '\0'))
            return CoreMatch(s+1,p+2)
            || CoreMatch(s+1,p)
            || CoreMatch(s,p+2);
            
        else
            return CoreMatch(s, p+2);
    }
    if(*s == *p || (*p == '.' && *s != '\0'))
        return CoreMatch(s+1, p+1);
    
    return false;
}
