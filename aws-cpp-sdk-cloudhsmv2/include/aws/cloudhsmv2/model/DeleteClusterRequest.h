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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSMV2_API DeleteClusterRequest : public CloudHSMV2Request
  {
  public:
    DeleteClusterRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The identifier (ID) of the cluster that you are deleting. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier (ID) of the cluster that you are deleting. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier (ID) of the cluster that you are deleting. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster that you are deleting. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster that you are deleting. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline DeleteClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that you are deleting. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline DeleteClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that you are deleting. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline DeleteClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}

  private:
    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
