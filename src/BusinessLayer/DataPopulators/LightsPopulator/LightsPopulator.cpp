/**
 *  Schulich Delta Android Telemetry
 *  Copyright (C) 2015 University of Calgary Solar Car Team
 *
 *  This file is part of Schulich Delta Android Telemetry
 *
 *  Schulich Delta Android Telemetry is free software:
 *  you can redistribute it and/or modify it under the terms
 *  of the GNU Affero General Public License as published by
 *  the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  Schulich Delta Android Telemetry is distributed
 *  in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General
 *  Public License along with Schulich Delta Android Telemetry.
 *  If not, see <http://www.gnu.org/licenses/>.
 *
 *  For further contact, email <software@calgarysolarcar.ca>
 */

#include <QJsonObject>
#include <QJsonArray>

#include "LightsPopulator.h"
#include "src/DataLayer/LightsData/I_LightsData.h"
#include "src/BusinessLayer/DataPopulators/JsonDefines.h"

LightsPopulator::LightsPopulator(I_LightsData& lightsData)
    : lightsData_(lightsData)
{
}

void LightsPopulator::populateData(const QJsonObject& data)
{
    QJsonValue value = data.value(JsonFormat::LIGHTS);
    lightsData_.setAlive(value.toObject().value(JsonFormat::LIGHTS_ALIVE).toBool());
    lightsData_.setlowBeams(value.toObject().value(JsonFormat::LIGHTS_LOWBEAMS).toBool());
    lightsData_.setbrakes(value.toObject().value(JsonFormat::LIGHTS_BRAKES).toBool());
    lightsData_.setleftSignal(value.toObject().value(JsonFormat::LIGHTS_LEFTSIGNAL).toBool());
    lightsData_.setrightSignal(value.toObject().value(JsonFormat::LIGHTS_RIGHTSIGNAL).toBool());
    lightsData_.setBmsStrobeLight(value.toObject().value(JsonFormat::LIGHTS_BMSSTROBELIGHT).toBool());
}
