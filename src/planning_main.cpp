#include <iostream>
#include "process/process.h"
#include "show_result/show_result.h"
using std::cout, std::endl;

int main()
{
    cout << "planing start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planing end" << endl;

    cout << "show result: " << endl;
    ShowResult showResult;
    showResult.drawResult();

    return 0;
}