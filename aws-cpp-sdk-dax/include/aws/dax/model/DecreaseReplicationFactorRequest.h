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
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class AWS_DAX_API DecreaseReplicationFactorRequest : public DAXRequest
  {
  public:
    DecreaseReplicationFactorRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the DAX cluster from which you want to remove nodes.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the DAX cluster from which you want to remove nodes.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the DAX cluster from which you want to remove nodes.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the DAX cluster from which you want to remove nodes.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the DAX cluster from which you want to remove nodes.</p>
     */
    inline DecreaseReplicationFactorRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the DAX cluster from which you want to remove nodes.</p>
     */
    inline DecreaseReplicationFactorRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the DAX cluster from which you want to remove nodes.</p>
     */
    inline DecreaseReplicationFactorRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}

    /**
     * <p>The new number of nodes for the DAX cluster.</p>
     */
    inline int GetNewReplicationFactor() const{ return m_newReplicationFactor; }

    /**
     * <p>The new number of nodes for the DAX cluster.</p>
     */
    inline void SetNewReplicationFactor(int value) { m_newReplicationFactorHasBeenSet = true; m_newReplicationFactor = value; }

    /**
     * <p>The new number of nodes for the DAX cluster.</p>
     */
    inline DecreaseReplicationFactorRequest& WithNewReplicationFactor(int value) { SetNewReplicationFactor(value); return *this;}

    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline DecreaseReplicationFactorRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline DecreaseReplicationFactorRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline DecreaseReplicationFactorRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline DecreaseReplicationFactorRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline DecreaseReplicationFactorRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIdsToRemove() const{ return m_nodeIdsToRemove; }

    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline void SetNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = value; }

    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline void SetNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = std::move(value); }

    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline DecreaseReplicationFactorRequest& WithNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { SetNodeIdsToRemove(value); return *this;}

    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline DecreaseReplicationFactorRequest& WithNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { SetNodeIdsToRemove(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline DecreaseReplicationFactorRequest& AddNodeIdsToRemove(const Aws::String& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(value); return *this; }

    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline DecreaseReplicationFactorRequest& AddNodeIdsToRemove(Aws::String&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline DecreaseReplicationFactorRequest& AddNodeIdsToRemove(const char* value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(value); return *this; }

  private:
    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;
    int m_newReplicationFactor;
    bool m_newReplicationFactorHasBeenSet;
    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
    Aws::Vector<Aws::String> m_nodeIdsToRemove;
    bool m_nodeIdsToRemoveHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
