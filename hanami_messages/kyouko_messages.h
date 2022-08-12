/**
 * @file        hanami_messages.h
 *
 * @author      Tobias Anker <tobias.anker@kitsunemimi.moe>
 *
 * @copyright   Apache License Version 2.0
 *
 *      Copyright 2021 Tobias Anker
 *
 *      Licensed under the Apache License, Version 2.0 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *          http://www.apache.org/licenses/LICENSE-2.0
 *
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 */

#ifndef KYOUKO_HANAMIMESSAGES_H
#define KYOUKO_HANAMIMESSAGES_H

#include <stdint.h>
#include <libKitsunemimiHanamiCommon/messages.h>

namespace Kitsunemimi
{
namespace Hanami
{

//==================================================================================================

class ClusterIO_Message
        : public HanamiMessage
{
public:
    /**
	 * @brief constructor
	 */
	ClusterIO_Message()
	{
	    m_type = 1;
	}

	/**
	 * @brief destructor
	 */
	~ClusterIO_Message() {}

    enum ProcessType
    {
		REQUEST_TYPE = 0,
		LEARN_TYPE = 1,
    };

    enum DataType
    {
		INPUT_TYPE = 0,
		SHOULD_TYPE = 1,
		OUTPUT_TYPE = 2,
    };

    std::string segmentName = "";
    uint64_t processType = REQUEST_TYPE;
    uint64_t dataType = INPUT_TYPE;
    bool isLast = false;
    float* values = nullptr;
    uint64_t numberOfValues = 0;

	/**
	 * @brief read message from byte-array
	 *
	 * @param data pointer to byte-buffer
	 * @param dataSize number of bytes
	 *
	 * @return true, if message was valid, else false
	 */
	bool
	read(void* data, const uint64_t dataSize)
	{
	    if(initRead(data, dataSize) == false) {
	        return false;
	    }

	    if(readString(data, segmentName) == false) {
	        return false;
	    }
        if(readUint(data, processType) == false) {
	        return false;
	    }
        if(readUint(data, dataType) == false) {
            return false;
        }
        if(readBool(data, isLast) == false) {
            return false;
        }
	    if(readFloatList(data, &values, numberOfValues) == false) {
	        return false;
	    }

	    return true;
	}

	/**
	 * @brief convert message to byte-array
	 *
	 * @param result reference to the data-buffer to returning the final byte-array
	 *
	 * @return 0, if data are too big for the provided buffer, else number of used bytes
	 */
	uint64_t
	createBlob(uint8_t* result, const uint64_t bufferSize)
	{
	    const uint64_t totalMsgSize = sizeof(MessageHeader)
                                      + 5 * sizeof(Entry)
	                                  + segmentName.size()
	                                  + sizeof(uint64_t)
                                      + sizeof(uint64_t)
                                      + sizeof(bool)
	                                  + numberOfValues * sizeof(float);

	    if(bufferSize < totalMsgSize) {
	        return 0;
	    }

	    uint64_t pos = 0;
	    pos += initBlob(&result[pos], totalMsgSize);
	    pos += appendString(&result[pos], segmentName);
        pos += appendUint(&result[pos], processType);
        pos += appendUint(&result[pos], dataType);
        pos += appendBool(&result[pos], isLast);
	    pos += appendFloatList(&result[pos], values, numberOfValues);

	    assert(pos == totalMsgSize);

	    return pos;
	}
};

//==================================================================================================

}  // namespace Hanami
}  // namespace Kitsunemimi

#endif // KYOUKO_HANAMIMESSAGES_H
