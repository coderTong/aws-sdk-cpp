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
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/DiscoveredResource.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class AWS_MIGRATIONHUB_API AssociateDiscoveredResourceRequest : public MigrationHubRequest
  {
  public:
    AssociateDiscoveredResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}

    /**
     * <p>The identifier given to the MigrationTask.</p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }

    /**
     * <p>The identifier given to the MigrationTask.</p>
     */
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }

    /**
     * <p>The identifier given to the MigrationTask.</p>
     */
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }

    /**
     * <p>The identifier given to the MigrationTask.</p>
     */
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }

    /**
     * <p>The identifier given to the MigrationTask.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}

    /**
     * <p>The identifier given to the MigrationTask.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}

    /**
     * <p>The identifier given to the MigrationTask.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}

    /**
     * <p>Object representing a Resource.</p>
     */
    inline const DiscoveredResource& GetDiscoveredResource() const{ return m_discoveredResource; }

    /**
     * <p>Object representing a Resource.</p>
     */
    inline void SetDiscoveredResource(const DiscoveredResource& value) { m_discoveredResourceHasBeenSet = true; m_discoveredResource = value; }

    /**
     * <p>Object representing a Resource.</p>
     */
    inline void SetDiscoveredResource(DiscoveredResource&& value) { m_discoveredResourceHasBeenSet = true; m_discoveredResource = std::move(value); }

    /**
     * <p>Object representing a Resource.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithDiscoveredResource(const DiscoveredResource& value) { SetDiscoveredResource(value); return *this;}

    /**
     * <p>Object representing a Resource.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithDiscoveredResource(DiscoveredResource&& value) { SetDiscoveredResource(std::move(value)); return *this;}

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:
    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet;
    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet;
    DiscoveredResource m_discoveredResource;
    bool m_discoveredResourceHasBeenSet;
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
