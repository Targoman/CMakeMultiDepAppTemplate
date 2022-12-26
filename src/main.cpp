/*################################################################################
#   TargomanBuildSystem
#
#   Copyright(c) 2021 by Targoman Intelligent Processing <http://tip.co.ir>
#
#   Redistribution and use in source and binary forms are allowed under the
#   terms of BSD License 2.0. See LICENSE file
################################################################################*/
/**
 * @author S. Mohammad M. Ziabary <ziabary@targoman.com>
 */
#include <iostream>
#include "libSampleLibrary/clsSample.h"
#include "libDummyLib2/clsSample.h"
#include "ISO639.h"

int main(){
    Sample::clsSample Sample("test");
    DummyLib2::clsSample Dummy("dummy");

    std::cout<<Sample.info().toStdString()<<std::endl;
    std::cout<<Dummy.info().toStdString()<<std::endl;
    std::cout<<ISO639getAlpha3B("en")<<std::endl;
    return 0;
}
