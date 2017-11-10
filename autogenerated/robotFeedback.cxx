// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file robotFeedback.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "robotFeedback.h"

#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

it::iit::yarp::JointState::JointState()
{
    m_tau = 0.0;
    m_q = 0.0;
    m_qd = 0.0;
}

it::iit::yarp::JointState::~JointState()
{
}

it::iit::yarp::JointState::JointState(const JointState &x)
{
    m_tau = x.m_tau;
    m_q = x.m_q;
    m_qd = x.m_qd;
}

it::iit::yarp::JointState::JointState(JointState &&x)
{
    m_tau = x.m_tau;
    m_q = x.m_q;
    m_qd = x.m_qd;
}

it::iit::yarp::JointState& it::iit::yarp::JointState::operator=(const JointState &x)
{
    m_tau = x.m_tau;
    m_q = x.m_q;
    m_qd = x.m_qd;
    
    return *this;
}

it::iit::yarp::JointState& it::iit::yarp::JointState::operator=(JointState &&x)
{
    m_tau = x.m_tau;
    m_q = x.m_q;
    m_qd = x.m_qd;
    
    return *this;
}

size_t it::iit::yarp::JointState::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

size_t it::iit::yarp::JointState::getCdrSerializedSize(const it::iit::yarp::JointState& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void it::iit::yarp::JointState::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_tau;
    scdr << m_q;
    scdr << m_qd;
}

void it::iit::yarp::JointState::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_tau;
    dcdr >> m_q;
    dcdr >> m_qd;
}

size_t it::iit::yarp::JointState::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            




    return current_align;
}

bool it::iit::yarp::JointState::isKeyDefined()
{
    return false;
}

void it::iit::yarp::JointState::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 
	 
	 
}
it::iit::yarp::IMUState::IMUState()
{
    m_xdd = 0.0;
    m_ydd = 0.0;
    m_zdd = 0.0;
    m_wx = 0.0;
    m_wy = 0.0;
    m_wz = 0.0;
    m_qs = 0.0;
    m_qx = 0.0;
    m_qy = 0.0;
    m_qz = 0.0;
}

it::iit::yarp::IMUState::~IMUState()
{
}

it::iit::yarp::IMUState::IMUState(const IMUState &x)
{
    m_xdd = x.m_xdd;
    m_ydd = x.m_ydd;
    m_zdd = x.m_zdd;
    m_wx = x.m_wx;
    m_wy = x.m_wy;
    m_wz = x.m_wz;
    m_qs = x.m_qs;
    m_qx = x.m_qx;
    m_qy = x.m_qy;
    m_qz = x.m_qz;
}

it::iit::yarp::IMUState::IMUState(IMUState &&x)
{
    m_xdd = x.m_xdd;
    m_ydd = x.m_ydd;
    m_zdd = x.m_zdd;
    m_wx = x.m_wx;
    m_wy = x.m_wy;
    m_wz = x.m_wz;
    m_qs = x.m_qs;
    m_qx = x.m_qx;
    m_qy = x.m_qy;
    m_qz = x.m_qz;
}

it::iit::yarp::IMUState& it::iit::yarp::IMUState::operator=(const IMUState &x)
{
    m_xdd = x.m_xdd;
    m_ydd = x.m_ydd;
    m_zdd = x.m_zdd;
    m_wx = x.m_wx;
    m_wy = x.m_wy;
    m_wz = x.m_wz;
    m_qs = x.m_qs;
    m_qx = x.m_qx;
    m_qy = x.m_qy;
    m_qz = x.m_qz;
    
    return *this;
}

it::iit::yarp::IMUState& it::iit::yarp::IMUState::operator=(IMUState &&x)
{
    m_xdd = x.m_xdd;
    m_ydd = x.m_ydd;
    m_zdd = x.m_zdd;
    m_wx = x.m_wx;
    m_wy = x.m_wy;
    m_wz = x.m_wz;
    m_qs = x.m_qs;
    m_qx = x.m_qx;
    m_qy = x.m_qy;
    m_qz = x.m_qz;
    
    return *this;
}

size_t it::iit::yarp::IMUState::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

size_t it::iit::yarp::IMUState::getCdrSerializedSize(const it::iit::yarp::IMUState& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void it::iit::yarp::IMUState::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_xdd;
    scdr << m_ydd;
    scdr << m_zdd;
    scdr << m_wx;
    scdr << m_wy;
    scdr << m_wz;
    scdr << m_qs;
    scdr << m_qx;
    scdr << m_qy;
    scdr << m_qz;
}

void it::iit::yarp::IMUState::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_xdd;
    dcdr >> m_ydd;
    dcdr >> m_zdd;
    dcdr >> m_wx;
    dcdr >> m_wy;
    dcdr >> m_wz;
    dcdr >> m_qs;
    dcdr >> m_qx;
    dcdr >> m_qy;
    dcdr >> m_qz;
}

size_t it::iit::yarp::IMUState::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            











    return current_align;
}

bool it::iit::yarp::IMUState::isKeyDefined()
{
    return false;
}

void it::iit::yarp::IMUState::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
}
it::iit::yarp::ForceSensor::ForceSensor()
{
    m_fx = 0.0;
    m_fy = 0.0;
    m_fz = 0.0;
    m_tauX = 0.0;
    m_tauY = 0.0;
    m_tauZ = 0.0;
}

it::iit::yarp::ForceSensor::~ForceSensor()
{
}

it::iit::yarp::ForceSensor::ForceSensor(const ForceSensor &x)
{
    m_fx = x.m_fx;
    m_fy = x.m_fy;
    m_fz = x.m_fz;
    m_tauX = x.m_tauX;
    m_tauY = x.m_tauY;
    m_tauZ = x.m_tauZ;
}

it::iit::yarp::ForceSensor::ForceSensor(ForceSensor &&x)
{
    m_fx = x.m_fx;
    m_fy = x.m_fy;
    m_fz = x.m_fz;
    m_tauX = x.m_tauX;
    m_tauY = x.m_tauY;
    m_tauZ = x.m_tauZ;
}

it::iit::yarp::ForceSensor& it::iit::yarp::ForceSensor::operator=(const ForceSensor &x)
{
    m_fx = x.m_fx;
    m_fy = x.m_fy;
    m_fz = x.m_fz;
    m_tauX = x.m_tauX;
    m_tauY = x.m_tauY;
    m_tauZ = x.m_tauZ;
    
    return *this;
}

it::iit::yarp::ForceSensor& it::iit::yarp::ForceSensor::operator=(ForceSensor &&x)
{
    m_fx = x.m_fx;
    m_fy = x.m_fy;
    m_fz = x.m_fz;
    m_tauX = x.m_tauX;
    m_tauY = x.m_tauY;
    m_tauZ = x.m_tauZ;
    
    return *this;
}

size_t it::iit::yarp::ForceSensor::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

size_t it::iit::yarp::ForceSensor::getCdrSerializedSize(const it::iit::yarp::ForceSensor& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void it::iit::yarp::ForceSensor::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_fx;
    scdr << m_fy;
    scdr << m_fz;
    scdr << m_tauX;
    scdr << m_tauY;
    scdr << m_tauZ;
}

void it::iit::yarp::ForceSensor::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_fx;
    dcdr >> m_fy;
    dcdr >> m_fz;
    dcdr >> m_tauX;
    dcdr >> m_tauY;
    dcdr >> m_tauZ;
}

size_t it::iit::yarp::ForceSensor::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            







    return current_align;
}

bool it::iit::yarp::ForceSensor::isKeyDefined()
{
    return false;
}

void it::iit::yarp::ForceSensor::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 
	 
	 
	 
	 
	 
}
it::iit::yarp::RobotFeedback::RobotFeedback()
{
    m_timestampInNanoseconds = 0;



}

it::iit::yarp::RobotFeedback::~RobotFeedback()
{
}

it::iit::yarp::RobotFeedback::RobotFeedback(const RobotFeedback &x)
{
    m_timestampInNanoseconds = x.m_timestampInNanoseconds;
    m_jointStates = x.m_jointStates;
    m_imuStates = x.m_imuStates;
    m_forceSensors = x.m_forceSensors;
}

it::iit::yarp::RobotFeedback::RobotFeedback(RobotFeedback &&x)
{
    m_timestampInNanoseconds = x.m_timestampInNanoseconds;
    m_jointStates = std::move(x.m_jointStates);
    m_imuStates = std::move(x.m_imuStates);
    m_forceSensors = std::move(x.m_forceSensors);
}

it::iit::yarp::RobotFeedback& it::iit::yarp::RobotFeedback::operator=(const RobotFeedback &x)
{
    m_timestampInNanoseconds = x.m_timestampInNanoseconds;
    m_jointStates = x.m_jointStates;
    m_imuStates = x.m_imuStates;
    m_forceSensors = x.m_forceSensors;
    
    return *this;
}

it::iit::yarp::RobotFeedback& it::iit::yarp::RobotFeedback::operator=(RobotFeedback &&x)
{
    m_timestampInNanoseconds = x.m_timestampInNanoseconds;
    m_jointStates = std::move(x.m_jointStates);
    m_imuStates = std::move(x.m_imuStates);
    m_forceSensors = std::move(x.m_forceSensors);
    
    return *this;
}

size_t it::iit::yarp::RobotFeedback::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += it::iit::yarp::JointState::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += it::iit::yarp::IMUState::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += it::iit::yarp::ForceSensor::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t it::iit::yarp::RobotFeedback::getCdrSerializedSize(const it::iit::yarp::RobotFeedback& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < data.jointStates().size(); ++a)
    {
        current_alignment += it::iit::yarp::JointState::getCdrSerializedSize(data.jointStates().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < data.imuStates().size(); ++a)
    {
        current_alignment += it::iit::yarp::IMUState::getCdrSerializedSize(data.imuStates().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    for(size_t a = 0; a < data.forceSensors().size(); ++a)
    {
        current_alignment += it::iit::yarp::ForceSensor::getCdrSerializedSize(data.forceSensors().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void it::iit::yarp::RobotFeedback::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_timestampInNanoseconds;
    scdr << m_jointStates;
    scdr << m_imuStates;
    scdr << m_forceSensors;
}

void it::iit::yarp::RobotFeedback::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_timestampInNanoseconds;
    dcdr >> m_jointStates;
    dcdr >> m_imuStates;
    dcdr >> m_forceSensors;
}

size_t it::iit::yarp::RobotFeedback::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            





    return current_align;
}

bool it::iit::yarp::RobotFeedback::isKeyDefined()
{
    return false;
}

void it::iit::yarp::RobotFeedback::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 
	 
	 
	 
}


