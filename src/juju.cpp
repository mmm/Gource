/*
    Copyright (C) 2012 Canonical

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

#include "juju.h"

JujuStatusLog::JujuStatusLog(const std::string& logfile) : RCommitLog(logfile) {
}

//parse apache access.log entry into components
bool JujuStatusLog::parseStatusEntry(RCommit& commit) {

    std::string line;
    std::vector<std::string> matches;

    if(!logf->getNextLine(line)) return false;

    //commit.username = matches[0];
    //commit.timestamp = mktime(&time_str);
    //commit.addFile(file, action);

    return true;
}
