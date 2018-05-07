/***************************************************************************************************
* Copyright (c) 2018 Artois University & CNRS
*
* This file is part of Nacre_mini
*
* Nacre_mini is free software: you can redistribute it and/or modify it 
* under the terms of the GNU General Public License as published by the Free Software Foundation, 
* either version 3 of the License, or (at your option) any later version.
*
* Nacre_mini is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with Nacre_mini. 
* If not, see http://www.gnu.org/licenses/.
*
* Contributors:
*       - Gaël Glorian (glorian@cril.fr)

***************************************************************************************************/

/*
 * @CreateTime: Nov 24, 2017 4:35 PM
 * @Author: Gaël Glorian
 * @Contact: glorian@cril.fr
 * @Last Modified By: Gaël Glorian
 * @Last Modified Time: May 7, 2018 5:59 PM
 * @Description: Modify Here, Please 
 */

#ifndef CONSTRAINTORDERED_H_
#define CONSTRAINTORDERED_H_

#include <string>
#include <vector>

#include "Constraint.hh"
#include "Variable.hh"

class ConstraintOrdered : public Constraint {
public:
    ConstraintOrdered(std::string n, std::vector<Variable*> vars)
        : Constraint(n, vars){};

    virtual bool propagate(int level, Variable* cur, std::vector<Variable*>& touched) = 0;
};

class ConstraintOrderedLT : public ConstraintOrdered {
public:
    ConstraintOrderedLT(std::string n, std::vector<Variable*> vars)
        : ConstraintOrdered(n, vars){};

    bool propagate(int level, Variable* cur, std::vector<Variable*>& touched);
};

class ConstraintOrderedLE : public ConstraintOrdered {
public:
    ConstraintOrderedLE(std::string n, std::vector<Variable*> vars)
        : ConstraintOrdered(n, vars){};

    bool propagate(int level, Variable* cur, std::vector<Variable*>& touched);
};

class ConstraintOrderedGE : public ConstraintOrdered {
public:
    ConstraintOrderedGE(std::string n, std::vector<Variable*> vars)
        : ConstraintOrdered(n, vars){};

    bool propagate(int level, Variable* cur, std::vector<Variable*>& touched);
};

class ConstraintOrderedGT : public ConstraintOrdered {
public:
    ConstraintOrderedGT(std::string n, std::vector<Variable*> vars)
        : ConstraintOrdered(n, vars){};

    bool propagate(int level, Variable* cur, std::vector<Variable*>& touched);
};

#endif // CONSTRAINTORDERED_H_