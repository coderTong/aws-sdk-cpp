﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeMatchmakingRequest : public GameLiftRequest
  {
  public:
    DescribeMatchmakingRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for a matchmaking ticket. To request all existing tickets,
     * leave this parameter empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTicketIds() const{ return m_ticketIds; }

    /**
     * <p>Unique identifier for a matchmaking ticket. To request all existing tickets,
     * leave this parameter empty.</p>
     */
    inline void SetTicketIds(const Aws::Vector<Aws::String>& value) { m_ticketIdsHasBeenSet = true; m_ticketIds = value; }

    /**
     * <p>Unique identifier for a matchmaking ticket. To request all existing tickets,
     * leave this parameter empty.</p>
     */
    inline void SetTicketIds(Aws::Vector<Aws::String>&& value) { m_ticketIdsHasBeenSet = true; m_ticketIds = std::move(value); }

    /**
     * <p>Unique identifier for a matchmaking ticket. To request all existing tickets,
     * leave this parameter empty.</p>
     */
    inline DescribeMatchmakingRequest& WithTicketIds(const Aws::Vector<Aws::String>& value) { SetTicketIds(value); return *this;}

    /**
     * <p>Unique identifier for a matchmaking ticket. To request all existing tickets,
     * leave this parameter empty.</p>
     */
    inline DescribeMatchmakingRequest& WithTicketIds(Aws::Vector<Aws::String>&& value) { SetTicketIds(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a matchmaking ticket. To request all existing tickets,
     * leave this parameter empty.</p>
     */
    inline DescribeMatchmakingRequest& AddTicketIds(const Aws::String& value) { m_ticketIdsHasBeenSet = true; m_ticketIds.push_back(value); return *this; }

    /**
     * <p>Unique identifier for a matchmaking ticket. To request all existing tickets,
     * leave this parameter empty.</p>
     */
    inline DescribeMatchmakingRequest& AddTicketIds(Aws::String&& value) { m_ticketIdsHasBeenSet = true; m_ticketIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Unique identifier for a matchmaking ticket. To request all existing tickets,
     * leave this parameter empty.</p>
     */
    inline DescribeMatchmakingRequest& AddTicketIds(const char* value) { m_ticketIdsHasBeenSet = true; m_ticketIds.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_ticketIds;
    bool m_ticketIdsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
