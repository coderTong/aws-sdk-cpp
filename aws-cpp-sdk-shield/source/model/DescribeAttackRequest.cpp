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

#include <aws/shield/model/DescribeAttackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAttackRequest::DescribeAttackRequest() : 
    m_attackIdHasBeenSet(false)
{
}

Aws::String DescribeAttackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attackIdHasBeenSet)
  {
   payload.WithString("AttackId", m_attackId);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAttackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.DescribeAttack"));
  return headers;

}




