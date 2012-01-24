/*
    Copyright (C) 2012 Canonical Ltd

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version
    3 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GOURCE_JUJU_H
#define GOURCE_JUJU_H

#include <string>
#include <string.h>

#include <vector>
#include <time.h>

#include "commitlog.h"

class JujuStatusLog : public RCommitLog {
protected:
    bool parseStatusEntry(RCommit& commit);
    BaseLog* generateLog(const std::string& dir);
public:
    JujuStatusLog(const std::string& logfile);
};

#endif
