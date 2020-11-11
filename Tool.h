#ifndef TOOL_H
#define TOOL_H
#include <ctime>


//This class was written by DENNIS-EMMANUEL BEKUNUMCHI	2018/7078
class Tool
{
    public:
        Tool();
        int toolId = 1;
        char toolName[100];
        char toolType[100]; // ELectrical, Mechanical, or biomedical.
        char toolDescription[500];
        time_t now = time(0);   // current system date/time
        char* addDateAndTime = ctime(&now);   // convert in string form



    protected:

    private:
};

#endif // TOOL_H
