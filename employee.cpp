
#include "employee.h"

using namespace std;

employee::employee(string n, string i, int s, int e)
{
    name = n;
    id = i;
    start = s;
    end = e;
    status = OFF;
    currentArea = NULL;
    nextRest = 0;
};

void employee::incrementBreak()
{
    nextRest++;
};

void employee::setStatus(eventCatagory x)
{
    status = x;
};

void employee::setCurrentArea(area *n)
{
    currentArea = n;
};

area* employee::getCurrentArea()
{
    return currentArea;
};

eventCatagory employee::getStatus()
{
    return status;
};

short employee::getNextRest()
{
    return nextRest;
};

short employee::getEnd()
{
    return end;
};

string employee::getName()
{
    return name;
};

string employee::getId()
{
    return id;
};

short employee::getStart()
{
    return start;
};