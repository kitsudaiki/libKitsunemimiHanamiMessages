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

#ifndef SAGIRI_HANAMIMESSAGES_H
#define SAGIRI_HANAMIMESSAGES_H

#include <stdint.h>
#include <libKitsunemimiHanamiCommon/messages.h>

namespace Kitsunemimi
{
namespace Hanami
{

//==================================================================================================

class FileUpload_Message
        : public HanamiMessage
{
public:
    /**
	 * @brief constructor
	 */
	FileUpload_Message()
	{
	    m_type = 1;
	}

	/**
	 * @brief destructor
	 */
	~FileUpload_Message() {}

    enum UploadDataType 
    {
        DATASET_TYPE = 0,
        CLUSTER_SNAPSHOT_TYPE = 1
    };

    std::string datasetUuid = "";
    std::string fileUuid = "";
    uint64_t type = DATASET_TYPE;
    bool isLast = false;
    uint64_t position = 0;
    void* payload = nullptr;
    uint64_t numberOfBytes = 0;

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

        if(readString(data, datasetUuid) == false) {
	        return false;
	    }
        if(readString(data, fileUuid) == false) {
            return false;
        }
        if(readUint(data, type) == false) {
	        return false;
	    }
        if(readBool(data, isLast) == false) {
            return false;
        }
        if(readUint(data, position) == false) {
            return false;
        }
        if(readBinary(data, &payload, numberOfBytes) == false) {
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
                                      + 6 * sizeof(Entry)
                                      + datasetUuid.size()
                                      + fileUuid.size()
                                      + sizeof(uint64_t)
                                      + sizeof(bool)
                                      + sizeof(uint64_t)
                                      + numberOfBytes;

	    if(bufferSize < totalMsgSize) {
	        return 0;
	    }

	    uint64_t pos = 0;
	    pos += initBlob(&result[pos], totalMsgSize);
        pos += appendString(&result[pos], datasetUuid);
        pos += appendString(&result[pos], fileUuid);
        pos += appendUint(&result[pos], type);
        pos += appendBool(&result[pos], isLast);
        pos += appendUint(&result[pos], position);
        pos += appendData(&result[pos], payload, numberOfBytes);

	    assert(pos == totalMsgSize);

	    return pos;
	}
};

//==================================================================================================

}  // namespace Hanami
}  // namespace Kitsunemimi

#endif // SAGIRI_HANAMIMESSAGES_H
